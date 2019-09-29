/*
  ==============================================================================

    KAPLfo.h
    Created: 25 Sep 2019 9:02:44pm
    Author:  menglee

  ==============================================================================
*/

#pragma once

#include "KAPAudioUtilities.h"

class KAPLfo
{
public:
	KAPLfo();
	~KAPLfo();

	void reset();
	void setSampleRate(double inSampleRate);
	void process(float inRate, float inDepth, int inNumSamples);

private:

	double mSampleRate;
	float mPhase;
	float mBuffer[maxBufferDelaySize];
};