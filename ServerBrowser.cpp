#include <vector>
#include <string>
#include <iostream>

struct ServerInfo {
    std::string address;
    int port;
    std::string type; // "Game", "Mod", "Storage"
    std::string name;
    int players;
    int maxPlayers;
};

void displayServerList(const std::vector<ServerInfo>& servers) {
    std::cout << "Available Servers:\n";
    for (const auto& server : servers) {
        std::cout << server.name << " | " << server.address << ":" << server.port
                  << " | Type: " << server.type
                  << " | Players: " << server.players << "/" << server.maxPlayers
                  << std::endl;
    }
}

void connectToServer(const ServerInfo& server) {
    std::cout << "Connecting to " << server.name << " at " << server.address << ":" << server.port << std::endl;
    // Implement connection logic here
}

// Example usage
int main() {
    std::vector<ServerInfo> servers = {
        {"127.0.0.1", 4000, "Game", "DodoWorld1", 5, 32},
        {"192.168.1.50", 4001, "Mod", "ModsCentral", 0, 0},
        {"cloud.example.com", 4500, "Storage", "DodoStorage", 0, 0}
    };
    displayServerList(servers);
    connectToServer(servers[0]);
    return 0;
}