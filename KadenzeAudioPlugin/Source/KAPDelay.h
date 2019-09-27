/*
  ==============================================================================

    KAPDelay.h
    Created: 25 Sep 2019 9:03:12pm
    Author:  menglee

  ==============================================================================
*/

#pragma once

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
	double mSampleRate;
	double mBuffer[2048];
	double mFeedbackSample;

	int mDelayIndex;
};