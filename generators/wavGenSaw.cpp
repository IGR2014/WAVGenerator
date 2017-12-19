/////////////////////////////////////////////////////////
//
//	Name:		wavGenSaw.cpp
//
//	Copyright:	Igor Baklykov (c) 2017
//
//	Author:		Igor Baklykov
//
//	Date:		18.12.2017 16:37
//
//	Description:	WAVE file saw generator
//			class definition
//
/////////////////////////////////////////////////////////


#undef __STRICT_ANSI__


#include <cmath>


#include "wavGenSaw.hpp"


// Generator function
void wavGenSaw::generate(unsigned short* data, const unsigned int &dataSize) {

	double freqQuant = getFrequency() / getSampleRate();
	unsigned short volume = getVolume() * 2;

	for (unsigned int i = 0; i < dataSize; ++i) {

		data[i] = static_cast<short>(volume * fmod(freqQuant * i, 1) - getVolume());

	}

}

