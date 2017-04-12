/////////////////////////////////////////////////////////
//
//	Name:		WAVSquareGenerator.cpp
//
//	Copyright:	Igor Baklykov © 2017
//
//	Author:		Igor Baklykov
//
//	Date:		12.04.2017 15:54
//
//	Description:	WAVE file square generator
//			class definition
//
/////////////////////////////////////////////////////////


#include <cmath>

#include "WAVSquareGenerator.hpp"


// Generator function
void WAVSquareGenerator::generate(unsigned short* data, const unsigned int &dataSize) {

	double freq = 2.0 * M_PI * WAVIGenerator::getFrequency();
	double freqQuant = freq / WAVIGenerator::getSampleRate();

	for (unsigned int i = 0; i < dataSize; ++i) {

		data[i] = WAVIGenerator::getVolume() * ((sin(freqQuant * i) < 0) ? -1 : 1);

	}

};

