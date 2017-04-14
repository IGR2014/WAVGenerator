/////////////////////////////////////////////////////////
//
//	Name:		WAVSawGenerator.cpp
//
//	Copyright:	Igor Baklykov (c) 2017
//
//	Author:		Igor Baklykov
//
//	Date:		13.04.2017 22:42
//
//	Description:	WAVE file saw generator
//			class definition
//
/////////////////////////////////////////////////////////


#undef __STRICT_ANSI__
#include <cmath>

#include "WAVSawGen.hpp"


// Generator function
void WAVSawGenerator::generate(unsigned short* data, const unsigned int &dataSize) {

	double freqQuant = getFrequency() / getSampleRate();
	unsigned short volume = getVolume() * 2;

	for (unsigned int i = 0; i < dataSize; ++i) {

		data[i] = fmod(freqQuant * i, 1) * volume;

	}

};
