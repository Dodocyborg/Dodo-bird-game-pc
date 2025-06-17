#include "ProceduralImageGenerator.h"
#include <cmath>
#include <cstdlib>
#include <ctime>

// Simple noise-based procedural image for demo
std::vector<unsigned char> ProceduralImageGenerator::GenerateEventImage(int width, int height, WorldEventType type, int seed) {
    std::vector<unsigned char> pixels(width * height * 4, 0);
    srand(seed);

    // Pick color palette based on event type
    unsigned char r = 0, g = 0, b = 0;
    switch (type) {
        case WorldEventType::Storm:         r = 100; g = 100; b = 200; break;
        case WorldEventType::Corruption:    r = 80;  g = 10;  b = 80;  break;
        case WorldEventType::Boss:          r = 200; g = 50;  b = 50;  break;
        case WorldEventType::Cataclysm:     r = 150; g = 90;  b = 30;  break;
        case WorldEventType::Discovery:     r = 60;  g = 200; b = 120; break;
        default:                            r = 128; g = 128; b = 128; break;
    }
    // Simple noise fill
    for (int y = 0; y < height; ++y) {
        for (int x = 0; x < width; ++x) {
            float freq = 0.1f + (rand() % 100) * 0.001f;
            float n = std::sin((x + seed) * freq) + std::cos((y - seed) * freq);
            int idx = (y * width + x) * 4;
            pixels[idx + 0] = static_cast<unsigned char>(std::abs(r + n * 50));
            pixels[idx + 1] = static_cast<unsigned char>(std::abs(g + n * 50));
            pixels[idx + 2] = static_cast<unsigned char>(std::abs(b + n * 50));
            pixels[idx + 3] = 255;
        }
    }
    return pixels;
}

void ProceduralImageGenerator::Init() {
    // Could set up palettes, noise tables, etc.
    srand(static_cast<unsigned>(std::time(nullptr)));
}