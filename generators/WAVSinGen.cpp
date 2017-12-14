/////////////////////////////////////////////////////////
//
//	Name:		WAVSinGenerator.cpp
//
//	Copyright:	Igor Baklykov (c) 2017
//
//	Author:		Igor Baklykov
//
//	Date:		13.04.2017 22:42
//
//	Description:	WAVE file sin generator
//			class definition
//
/////////////////////////////////////////////////////////


#undef __STRICT_ANSI__
#define _USE_MATH_DEFINES


#include <cmath>

#include "WAVSinGen.hpp"


// Generator function
void WAVSinGenerator::generate(unsigned short* data, const unsigned int &dataSize) {

	double freqQuant = 2.0 * M_PI * getFrequency() / getSampleRate();

	for (unsigned int i = 0; i < dataSize; ++i) {

		data[i] = getVolume() * sin(freqQuant * i);

	}

};
