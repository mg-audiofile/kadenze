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
	zeromem(mBuffer, sizeof(double) * maxBufferDelaySize);
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

	for (int i = 0; i < inNumSamplesToRender; i++) {

		const double delayTimeInSamples = (inTime * mSampleRate);
		const double sample = getInterpolatedSample(delayTimeInSamples);
	}
}

double KAPDelay::getInterpolatedSample(float inDelayTimeSamples)
{
	double readPosition = (double)mDelayIndex - inDelayTimeSamples;

	if (readPosition < 0.0f) {
		readPosition = readPosition + maxBufferDelaySize;
	}
}