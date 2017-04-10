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


// C-tor
WAVSinGenerator::WAVSinGenerator() {
};

// Copy c-tor
WAVSinGenerator::WAVSinGenerator(const WAVSinGenerator &_g) {
};

// Move c-tor
WAVSinGenerator::WAVSinGenerator(WAVSinGenerator &&_g) {
};

// Generator function
void WAVSinGenerator::generate(unsigned short* data, const unsigned int &dataSize) {

	for (unsigned int i = 0; i < dataSize; ++i) {

		double freq = 2.0 * M_PI * WAVIGenerator::getFrequency();
		double freqQuant = freq / WAVIGenerator::getSampleRate();
		data[i] = WAVIGenerator::getVolume() * sin(freqQuant * i);

	}

};

// D-tor
WAVSinGenerator::~WAVSinGenerator() {
};

