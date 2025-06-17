#pragma once
// Orchestrates world-scale events: storms, bosses, corruption, etc. with procedural triggers.

#include <vector>
#include <memory>
#include <string>
#include <random>
#include "ProceduralImageGenerator.h"

enum class WorldEventType {
    Storm,
    Corruption,
    Boss,
    Discovery,
    Cataclysm,
    ProceduralFestival,
    // Extend as needed
};

class ProceduralEventImage {
public:
    std::vector<unsigned char> pixelData;
    int width, height;
    std::string description;
    void SaveToFile(const std::string& path) const;
};

class WorldEvent {
public:
    WorldEventType type;
    std::string name;
    std::string description;
    float duration; // in seconds
    bool active = false;
    std::unique_ptr<ProceduralEventImage> image;
    virtual void Start();
    virtual void Update(float dt);
    virtual void End();
    virtual void GenerateProceduralImage(ProceduralImageGenerator& generator);
    virtual ~WorldEvent() = default;
};

class WorldEventSystem {
public:
    void UpdateEvents(float dt);

    // Procedural or custom triggers for world events
    void TriggerRandomEvent();
    void TriggerProceduralEvent(WorldEventType type);
    void TriggerEventOnCondition(WorldEventType type, std::function<bool()> condition);

    // Example: Automatically called in the main loop
    void CheckAndTriggerEvents(); // Call this to run all procedural triggers

    const std::vector<std::unique_ptr<WorldEvent>>& GetActiveEvents() const;

private:
    std::vector<std::unique_ptr<WorldEvent>> activeEvents;

    // Example procedural triggers
    float timeSinceLastEvent = 0.0f;
    float minEventInterval = 120.0f; // seconds
    std::mt19937 rng;

    // Example conditions for procedural triggers
    bool IsStormLikely();
    bool IsBossAwakeningTime();
    bool IsCorruptionSpreading();

    ProceduralImageGenerator imageGenerator;
};