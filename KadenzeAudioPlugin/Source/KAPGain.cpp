/*
  ==============================================================================

    KAPGain.cpp
    Created: 25 Sep 2019 9:02:56pm
    Author:  menglee

  ==============================================================================
*/

#include "KAPGain.h"

KAPGain::KAPGain()
{

}

KAPGain::~KAPGain()
{

}

void KAPGain::process(float* inAudio, float inGain, float* outAudio, int inNumSamplesToRender)
{
	for (int i = 0; i < inNumSamplesToRender; i++) {
		outAudio[i] = inAudio[i] * inGain;
	}
}