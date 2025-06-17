#include "engine/SpriteRenderer.h"
#include <d3dcompiler.h>
#include <DirectXTK/WICTextureLoader.h>
#include <algorithm>

SpriteRenderer::SpriteRenderer() = default;
SpriteRenderer::~SpriteRenderer() { Shutdown(); }

bool SpriteRenderer::Init(ID3D11Device* dev, ID3D11DeviceContext* ctx) {
    device = dev;
    context = ctx;
    CreateResources();
    return true;
}

void SpriteRenderer::CreateResources() {
    // Create vertex buffer, index buffer, shaders, input layout, sampler state, etc.
    // For brevity, not fully implemented here.
}

void SpriteRenderer::DrawSprite(const Sprite& sprite) {
    spriteBatch.push_back(sprite);
}

void SpriteRenderer::Flush() {
    if (spriteBatch.empty()) return;
    // Map, update, and draw all sprites in batch
    // For each unique texture, bind SRV and draw associated sprites
    // For brevity, not fully implemented here.
    spriteBatch.clear();
}

void SpriteRenderer::LoadTexture(const std::string& name, const std::wstring& file) {
    Microsoft::WRL::ComPtr<ID3D11ShaderResourceView> srv;
    HRESULT hr = DirectX::CreateWICTextureFromFile(device, context, file.c_str(), nullptr, srv.GetAddressOf());
    if (SUCCEEDED(hr)) {
        textures.push_back({ name, srv, 0, 0 });
        // Optionally query texture size
    }
}

void SpriteRenderer::UnloadTexture(const std::string& name) {
    textures.erase(std::remove_if(textures.begin(), textures.end(),
        [&](const TextureEntry& t) { return t.name == name; }), textures.end());
}

SpriteRenderer::TextureEntry* SpriteRenderer::FindTexture(const std::string& name) {
    for (auto& t : textures)
        if (t.name == name) return &t;
    return nullptr;
}

void SpriteRenderer::Shutdown() {
    ReleaseResources();
    textures.clear();
    spriteBatch.clear();
}

void SpriteRenderer::ReleaseResources() {
    vertexBuffer.Reset();
    indexBuffer.Reset();
    vertexShader.Reset();
    pixelShader.Reset();
    inputLayout.Reset();
    samplerState.Reset();
}