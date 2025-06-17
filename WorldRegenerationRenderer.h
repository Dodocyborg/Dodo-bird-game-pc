#pragma once
#include <d3d11.h>
#include <wrl/client.h>
#include <memory>

class WorldRegenerationRenderer {
public:
    bool Init(ID3D11Device* device, ID3D11DeviceContext* context);
    void StartRegeneration();
    void Update(float dt);
    void Render();
    bool IsActive() const;
    void Shutdown();
private:
    ID3D11Device* device = nullptr;
    ID3D11DeviceContext* context = nullptr;
    bool active = false;
    float progress = 0.0f;
    float elapsed = 0.0f;
    // Shaders, vertex buffer, etc.
    Microsoft::WRL::ComPtr<ID3D11Buffer> vertexBuffer;
    Microsoft::WRL::ComPtr<ID3D11VertexShader> vertexShader;
    Microsoft::WRL::ComPtr<ID3D11PixelShader> pixelShader;
    Microsoft::WRL::ComPtr<ID3D11InputLayout> inputLayout;
    // ... more as needed
    void CreateResources();
    void ReleaseResources();
};