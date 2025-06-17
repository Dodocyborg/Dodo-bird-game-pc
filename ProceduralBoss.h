#pragma once
// Bosses with procedural stats, abilities, and art

#include "WorldEventSystem.h"

class ProceduralBoss : public WorldEvent {
public:
    int level;
    std::vector<std::string> proceduralAbilities;
    void GenerateProceduralImage() override; // Boss portrait, silhouette, etc.
    // Additional procedural logic for attacks, phases, etc.
};

class ProceduralStorm : public WorldEvent {
public:
    float intensity;
    void GenerateProceduralImage() override; // Unique storm art each time
};

class ProceduralCorruption : public WorldEvent {
public:
    float spreadSpeed;
    void GenerateProceduralImage() override; // Corruption visual effect
};