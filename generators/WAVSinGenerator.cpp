/////////////////////////////////////////////////////////
//
//	Name:		WAVSinGenerator.cpp
//
//	Copyright:	Igor Baklykov © 2017
//
//	Author:		Igor Baklykov
//
//	Date:		09.04.2017 20:01
//
//	Description:	WAVE file sin generator
//			class definition
//
/////////////////////////////////////////////////////////


#include <cmath>

#include "WAVSinGenerator.hpp"


// Generator function
void WAVSinGenerator::generate(unsigned short* data, const unsigned int &dataSize) {

	double freq = 2.0 * M_PI * WAVIGenerator::getFrequency();
	double freqQuant = freq / WAVIGenerator::getSampleRate();

	for (unsigned int i = 0; i < dataSize; ++i) {

		data[i] = WAVIGenerator::getVolume() * sin(freqQuant * i);

	}

};

