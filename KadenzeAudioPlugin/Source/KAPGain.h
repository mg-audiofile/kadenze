/*
  ==============================================================================

    KAPGain.h
    Created: 25 Sep 2019 9:02:56pm
    Author:  menglee

  ==============================================================================
*/

#pragma once

class KAPGain 
{
public:
	KAPGain();
	~KAPGain();

	void process(float* inAudio, float inGain, float* outAudio, int inNumSamplesToRender);

private:

};