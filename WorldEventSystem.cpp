#include "WorldEventSystem.h"
#include <iostream>
#include <functional>
#include <ctime>
#include <cstdlib>

// ------------------ ProceduralEventImage ------------------
void ProceduralEventImage::SaveToFile(const std::string& path) const {
    // Save pixelData as PNG using your preferred image library (e.g., stb_image_write)
    // Example pseudocode:
    // stbi_write_png(path.c_str(), width, height, 4, pixelData.data(), width * 4);
}

// ------------------ WorldEvent ------------------
void WorldEvent::Start() {
    active = true;
    std::cout << "Event started: " << name << std::endl;
}
void WorldEvent::Update(float dt) {
    if (!active) return;
    duration -= dt;
    if (duration <= 0) End();
}
void WorldEvent::End() {
    active = false;
    std::cout << "Event ended: " << name << std::endl;
}
void WorldEvent::GenerateProceduralImage(ProceduralImageGenerator& generator) {
    // Default: generate a simple event image
    image = std::make_unique<ProceduralEventImage>();
    image->width = 128;
    image->height = 128;
    image->pixelData = generator.GenerateEventImage(image->width, image->height, type, static_cast<int>(std::time(nullptr)));
    image->description = "Procedurally generated event art";
}

// ------------------ WorldEventSystem ------------------
void WorldEventSystem::UpdateEvents(float dt) {
    for (auto& evt : activeEvents) {
        evt->Update(dt);
    }
    // Remove inactive events
    activeEvents.erase(
        std::remove_if(activeEvents.begin(), activeEvents.end(),
                       [](const std::unique_ptr<WorldEvent>& e) { return !e->active; }),
        activeEvents.end());
    timeSinceLastEvent += dt;
}

void WorldEventSystem::TriggerRandomEvent() {
    WorldEventType types[] = {
        WorldEventType::Storm,
        WorldEventType::Corruption,
        WorldEventType::Boss,
        WorldEventType::Discovery,
        WorldEventType::Cataclysm
    };
    int idx = rng() % (sizeof(types)/sizeof(types[0]));
    TriggerProceduralEvent(types[idx]);
}

void WorldEventSystem::TriggerProceduralEvent(WorldEventType type) {
    std::unique_ptr<WorldEvent> event = std::make_unique<WorldEvent>();
    event->type = type;
    switch (type) {
        case WorldEventType::Storm:
            event->name = "Procedural Storm";
            event->description = "A wild, unpredictable storm!";
            event->duration = 60.0f + (rng() % 60); // 1-2 minutes
            break;
        case WorldEventType::Boss:
            event->name = "Procedural Boss";
            event->description = "A strange new entity appears!";
            event->duration = 120.0f;
            break;
        case WorldEventType::Corruption:
            event->name = "Corruption Spreads";
            event->description = "Corruption is overtaking the land!";
            event->duration = 90.0f;
            break;
        case WorldEventType::Discovery:
            event->name = "Discovery!";
            event->description = "Something new has been discovered!";
            event->duration = 45.0f;
            break;
        case WorldEventType::Cataclysm:
            event->name = "Cataclysmic Event";
            event->description = "The world is changing drastically!";
            event->duration = 180.0f;
            break;
        default:
            event->name = "Unknown Event";
            event->description = "Something mysterious is happening...";
            event->duration = 30.0f;
            break;
    }
    event->GenerateProceduralImage(imageGenerator);
    event->Start();
    activeEvents.push_back(std::move(event));
    timeSinceLastEvent = 0.0f;
}

void WorldEventSystem::TriggerEventOnCondition(WorldEventType type, std::function<bool()> condition) {
    if (condition()) {
        TriggerProceduralEvent(type);
    }
}

void WorldEventSystem::CheckAndTriggerEvents() {
    // Example: Trigger a random event if enough time has passed
    if (timeSinceLastEvent > minEventInterval) {
        TriggerRandomEvent();
    }

    // Example: Trigger a corruption event if IsCorruptionSpreading returns true
    if (IsCorruptionSpreading()) {
        TriggerProceduralEvent(WorldEventType::Corruption);
    }

    // Example: Boss awakens at specific times/events
    if (IsBossAwakeningTime()) {
        TriggerProceduralEvent(WorldEventType::Boss);
    }

    // Example: Storms based on a procedural likelihood
    if (IsStormLikely()) {
        TriggerProceduralEvent(WorldEventType::Storm);
    }
}

const std::vector<std::unique_ptr<WorldEvent>>& WorldEventSystem::GetActiveEvents() const {
    return activeEvents;
}

// --- Example procedural triggers (you can expand/tune these) ---
bool WorldEventSystem::IsStormLikely() {
    // 5% chance every check
    return (rng() % 100) < 5;
}
bool WorldEventSystem::IsBossAwakeningTime() {
    // For demo: every 1000 seconds, a boss may awaken
    static float timeAccumulator = 0.0f;
    timeAccumulator += timeSinceLastEvent;
    if (timeAccumulator > 1000.0f) {
        timeAccumulator = 0.0f;
        return true;
    }
    return false;
}
bool WorldEventSystem::IsCorruptionSpreading() {
    // 10% chance every check, or driven by world state
    return (rng() % 100) < 10;
}

// ------------------ Constructor ------------------
WorldEventSystem::WorldEventSystem() : rng(static_cast<unsigned>(std::time(nullptr))) {
    imageGenerator.Init();
    timeSinceLastEvent = 0.0f;
}