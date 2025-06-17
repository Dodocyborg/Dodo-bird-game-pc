#include "engine/WorldRegenerationRenderer.h"
#include <d3dcompiler.h>

bool WorldRegenerationRenderer::Init(ID3D11Device* dev, ID3D11DeviceContext* ctx) {
    device = dev;
    context = ctx;
    CreateResources();
    return true;
}

void WorldRegenerationRenderer::CreateResources() {
    // Create geometry, shaders, etc. for a regeneration effect (e.g. progress bar, animated mesh)
    // For brevity, not fully implemented here.
}

void WorldRegenerationRenderer::StartRegeneration() {
    active = true;
    progress = 0.0f;
    elapsed = 0.0f;
}

void WorldRegenerationRenderer::Update(float dt) {
    if (!active) return;
    elapsed += dt;
    progress = elapsed / 3.0f; // e.g. 3 sec regen
    if (progress >= 1.0f) {
        progress = 1.0f;
        active = false;
    }
}

void WorldRegenerationRenderer::Render() {
    if (!active) return;
    // Draw visual regeneration effect based on progress
    // For brevity, not fully implemented here.
}

bool WorldRegenerationRenderer::IsActive() const {
    return active;
}

void WorldRegenerationRenderer::Shutdown() {
    ReleaseResources();
}

void WorldRegenerationRenderer::ReleaseResources() {
    vertexBuffer.Reset();
    vertexShader.Reset();
    pixelShader.Reset();
    inputLayout.Reset();
}