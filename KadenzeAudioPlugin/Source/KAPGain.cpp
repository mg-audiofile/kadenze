/*
  ==============================================================================

    KAPGain.cpp
    Created: 25 Sep 2019 9:02:56pm
    Author:  menglee

  ==============================================================================
*/

#include "KAPGain.h"
#include "JuceHeader.h"

KAPGain::KAPGain()
{

}

KAPGain::~KAPGain()
{

}

void KAPGain::process(float* inAudio, float inGain, float* outAudio, int inNumSamplesToRender)
{
	float gainMapped = jmap(inGain, 0.0f, 1.0f, -24.0f, 24.0f);
	gainMapped = Decibels::decibelsToGain(gainMapped, -24.0f);

	for (int i = 0; i < inNumSamplesToRender; i++) {
		outAudio[i] = inAudio[i] * gainMapped;
	}
}