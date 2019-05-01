// Secondary set of flashlight calculation functions, the old one is a cluttered mess.
#include "common_flashlight_fxc.h"

// do we ever use this? - graham
float DoNewFlashlightShadow_PotatoQuality(sampler DepthSampler, float3 vProjCoords)
{
	float flOutput = 1.0f;
	flOutput = DoShadowNvidiaPCF3x3Gaussian(DepthSampler, vProjCoords, float2(1.0 / DEPHTEX_RES, 1.0 / DEPHTEX_RES));
	return flOutput;
}

float DoNewFlashlightShadow_HighQuality(sampler DepthSampler, float3 vProjCoords)
{
	float flOutput = 1.0f;
	flOutput = DoShadowNvidiaPCF5x5Gaussian(DepthSampler, vProjCoords, float2(1.0 / DEPHTEX_RES, 1.0 / DEPHTEX_RES));
	return flOutput;
}