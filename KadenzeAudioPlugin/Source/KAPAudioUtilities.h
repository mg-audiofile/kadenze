/*
  ==============================================================================

    KAPAudioUtilities.h
    Created: 25 Sep 2019 9:01:30pm
    Author:  menglee

  ==============================================================================
*/

#pragma once

#define kParamSmoothingCoeff_Rough 0.04
#define kParamSmoothingCoeff_Fine 0.002

const static int maxBufferDelaySize = 19200;

const static double kPI = 3.14159265359;
const static double k2PI = 6.28318530718;

inline float kap_linear_interp(float v0, float v1, float t)
{
	return (1 - t) * v0 + t * v1;
}