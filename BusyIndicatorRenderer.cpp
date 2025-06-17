#include "engine/BusyIndicatorRenderer.h"
#include <d3dcompiler.h>
#include <cmath>

bool BusyIndicatorRenderer::Init(ID3D11Device* dev, ID3D11DeviceContext* ctx) {
    device = dev;
    context = ctx;
    CreateResources();
    return true;
}

void BusyIndicatorRenderer::CreateResources() {
    // Create a simple geometry (circle or spinner), shaders, etc.
    // For brevity, not fully implemented here.
}

void BusyIndicatorRenderer::Render(float progress, float timeSeconds) {
    // Set shaders, input layout, draw the spinner with animation based on timeSeconds
    // For brevity, not fully implemented here.
}

void BusyIndicatorRenderer::Shutdown() {
    ReleaseResources();
}

void BusyIndicatorRenderer::ReleaseResources() {
    vertexBuffer.Reset();
    vertexShader.Reset();
    pixelShader.Reset();
    inputLayout.Reset();
}