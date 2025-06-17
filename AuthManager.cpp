#include "AuthManager.h"

void AuthManager::login(const std::string& payload, std::string& response) {
    // Stub: parse payload and set a fake token
    response = "{ \"token\": \"fake_token_123\" }";
}

bool AuthManager::validateToken(const std::string& token) {
    // Stub: always valid for demo
    return !token.empty();
}