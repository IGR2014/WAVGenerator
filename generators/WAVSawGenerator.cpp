/////////////////////////////////////////////////////////
//
//	Name:		WAVSawGenerator.cpp
//
//	Copyright:	Igor Baklykov © 2017
//
//	Author:		Igor Baklykov
//
//	Date:		09.04.2017 20:01
//
//	Description:	WAVE file saw generator
//			class definition
//
/////////////////////////////////////////////////////////


#include <cmath>

#include "WAVSawGenerator.hpp"


// Generator function
void WAVSawGenerator::generate(unsigned short* data, const unsigned int &dataSize) {

	double freqQuant = WAVIGenerator::getFrequency() / WAVIGenerator::getSampleRate();
	unsigned short volume =  WAVIGenerator::getVolume() * 2;

	for (unsigned int i = 0; i < dataSize; ++i) {

		data[i] = fmod(freqQuant * i, 1) * volume;

	}

};

