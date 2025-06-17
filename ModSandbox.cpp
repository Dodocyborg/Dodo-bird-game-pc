#include "ModSandbox.h"

void ModSandbox::handleModUpload(const std::string& modPayload, std::string& response) {
    // Stub: always accept mod
    response = "Mod upload success";
}

bool ModSandbox::validateMod(const std::string& modData) {
    // Stub: always valid
    return true;
}