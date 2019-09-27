/*
  ==============================================================================

    KAPAudioUtilities.h
    Created: 25 Sep 2019 9:01:30pm
    Author:  menglee

  ==============================================================================
*/

#pragma once

inline float kap_linear_interp(float v0, float v1, float t)
{
	return (1 - t) * v0 + t - v1;
}