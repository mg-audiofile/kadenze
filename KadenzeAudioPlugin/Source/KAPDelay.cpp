/*
  ==============================================================================

    KAPDelay.cpp
    Created: 25 Sep 2019 9:03:12pm
    Author:  menglee

  ==============================================================================
*/

#include "KAPDelay.h"
#include "JuceHeader.h"

KAPDelay::KAPDelay()
	: mSampleRate(-1),
	mFeedbackSample(0.0),
	mDelayIndex(0)
{

}

KAPDelay::~KAPDelay()
{

}

void KAPDelay::setSampleRate(double inSampleRate)
{
	mSampleRate = inSampleRate;
}

void KAPDelay::reset()
{
	zeromem(mBuffer, sizeof(double) * 2048);
}

void KAPDelay::process(float* inAudio,
	float inTime,
	float inFeedback,
	float inWetDry,
	float* outAudio,
	int inNumSamplesToRender)
{
	const float wet = inWetDry;
	const float dry = 1.0f - wet;
	const float feedbackMapped = jmap(inFeedback, 0.0f, 1.0f, 0.0f, 0.95f);
}