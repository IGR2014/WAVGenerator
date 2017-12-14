/////////////////////////////////////////////////////////
//
//	Name:		WAVSquareGenerator.cpp
//
//	Copyright:	Igor Baklykov (c) 2017
//
//	Author:		Igor Baklykov
//
//	Date:		13.04.2017 22:42
//
//	Description:	WAVE file square generator
//			class definition
//
/////////////////////////////////////////////////////////


#undef __STRICT_ANSI__
#define _USE_MATH_DEFINES


#include <cmath>

#include "WAVSquareGen.hpp"


// Generator function
void WAVSquareGenerator::generate(unsigned short* data, const unsigned int &dataSize) {

	double freqQuant = 2.0 * M_PI * getFrequency() / getSampleRate();

	for (unsigned int i = 0; i < dataSize; ++i) {

		data[i] = getVolume() * ((sin(freqQuant * i) < 0) ? -1 : 1);

	}

};
