#include "StorageServer.h"

StorageServer::StorageServer(const std::string& storagePath)
    : storagePath(storagePath) {}

void StorageServer::saveData(const std::string& payload, std::string& response) {
    // Stub: pretend to save data
    response = "Save successful";
}

void StorageServer::loadData(const std::string& payload, std::string& response) {
    // Stub: pretend to load data
    response = "{ \"data\": \"dummy_data\" }";
}