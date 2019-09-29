/*
  ==============================================================================

    KAPDelay.h
    Created: 25 Sep 2019 9:03:12pm
    Author:  menglee

  ==============================================================================
*/

#pragma once

#include "KAPAudioUtilities.h"

class KAPDelay
{
public:
	KAPDelay();
	~KAPDelay();

	void setSampleRate(double inSampleRate);
	void reset();
	void process(float* inAudio, 
				 float inTime, 
				 float inFeedback, 
				 float inWetDry, 
				 float* outAudio, 
				 int inNumSamplesToRender);

private:

	double getInterpolatedSample(float inDelayTimeSamples);

	double mSampleRate;
	double mBuffer[maxBufferDelaySize];
	double mFeedbackSample;

	int mDelayIndex;
};