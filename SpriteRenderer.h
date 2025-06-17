#pragma once
#include <d3d11.h>
#include <wrl/client.h>
#include <vector>
#include <string>
#include "engine/BaseRenderer.h"

struct Sprite {
    float x, y, w, h;
    float u0, v0, u1, v1;
    std::string textureName;
    float color[4];
};

class SpriteRenderer {
public:
    SpriteRenderer();
    ~SpriteRenderer();

    bool Init(ID3D11Device* device, ID3D11DeviceContext* context);
    void DrawSprite(const Sprite& sprite);
    void Flush(); // Call at end of frame to render all sprites
    void Shutdown();

    void LoadTexture(const std::string& name, const std::wstring& file);
    void UnloadTexture(const std::string& name);

private:
    struct TextureEntry {
        std::string name;
        Microsoft::WRL::ComPtr<ID3D11ShaderResourceView> srv;
        unsigned int width, height;
    };
    std::vector<Sprite> spriteBatch;
    std::vector<TextureEntry> textures;
    ID3D11Device* device = nullptr;
    ID3D11DeviceContext* context = nullptr;
    Microsoft::WRL::ComPtr<ID3D11Buffer> vertexBuffer;
    Microsoft::WRL::ComPtr<ID3D11Buffer> indexBuffer;
    Microsoft::WRL::ComPtr<ID3D11VertexShader> vertexShader;
    Microsoft::WRL::ComPtr<ID3D11PixelShader> pixelShader;
    Microsoft::WRL::ComPtr<ID3D11InputLayout> inputLayout;
    Microsoft::WRL::ComPtr<ID3D11SamplerState> samplerState;
    // ... more resources as needed

    TextureEntry* FindTexture(const std::string& name);
    void CreateResources();
    void ReleaseResources();
};