#include "AntiCheatManager.h"
#include <iostream>

bool AntiCheatManager::validate(const std::string& gameData) {
    // Stub: always valid for demo
    return true;
}

void AntiCheatManager::reportCheat(const std::string& playerId, const std::string& reason) {
    // Log cheat attempt (stub)
    std::cout << "Cheat reported for player " << playerId << ": " << reason << std::endl;
}