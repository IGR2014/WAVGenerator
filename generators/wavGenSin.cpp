/////////////////////////////////////////////////////////
//
//	Name:		WAVSinGenerator.cpp
//
//	Copyright:	Igor Baklykov (c) 2017
//
//	Author:		Igor Baklykov
//
//	Date:		18.12.2017 16:45
//
//	Description:	WAVE file sin generator
//			class definition
//
/////////////////////////////////////////////////////////


#undef __STRICT_ANSI__
#define _USE_MATH_DEFINES


#ifndef	M_PI
#define M_PI	3.14159265358979323846
#endif	// M_PI


#include <cmath>


#include "wavGenSin.hpp"


// Generator function
void wavGenSin::generate(unsigned short* data, const unsigned int &dataSize) {

	double freqQuant = 2.0 * M_PI * getFrequency() / getSampleRate();

	for (unsigned int i = 0; i < dataSize; ++i) {

		data[i] = static_cast<short>(getVolume() * sin(freqQuant * i));

	}

}

