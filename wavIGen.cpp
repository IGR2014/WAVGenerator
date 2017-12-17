/////////////////////////////////////////////////////////
//
//	Name:		WAVIGenerator.cpp
//
//	Copyright:	Igor Baklykov (c) 2017
//
//	Author:		Igor Baklykov
//
//	Date:		11.04.2017 23:28
//
//	Description:	WAVE file generator interface
//			class definition
//
/////////////////////////////////////////////////////////


#include "wavIGen.hpp"


// C-tor
wavIGen::wavIGen() : frequency(500.0), sampleRate(96000), byteRate(2), volume(32767) {};

// Copy c-tor
wavIGen::wavIGen(const wavIGen &_g) {

	if (&_g != this) {

		frequency	= _g.frequency;
		sampleRate	= _g.sampleRate;
		byteRate	= _g.byteRate;
		volume		= _g.volume;

	}

};

// Move c-tor
wavIGen::wavIGen(wavIGen &&_g) {

	if (&_g != this) {

		frequency	= _g.frequency;
		sampleRate	= _g.sampleRate;
		byteRate	= _g.byteRate;
		volume		= _g.volume;

		_g.frequency	= 0.0;
		_g.sampleRate	= 48000;
		_g.byteRate	= 0;
		_g.volume	= 0;

	}

};


// Get frequency
double wavIGen::getFrequency() const {

	return frequency;

};

// Get sample rate
unsigned int wavIGen::getSampleRate() const {

	return sampleRate;

};

// Get byte rate
unsigned short wavIGen::getByteRate() const {

	return byteRate;

};

// Get volume
unsigned short wavIGen::getVolume() const {

	return volume;

};

// Set frequency
void wavIGen::setFrequency(const double &_frequency) {

	frequency = _frequency;

};

// Set sample rate
void wavIGen::setSampleRate(const unsigned int &_sampleRate) {

	sampleRate = _sampleRate;

};

// Set byte rate
void wavIGen::setByteRate(const unsigned short &_byteRate) {

	byteRate = _byteRate;

};

// Set volume
void wavIGen::setVolume(const unsigned short &_volume) {

	volume = _volume;

};


// D-tor
wavIGen::~wavIGen() {

	frequency	= 0.0;
	sampleRate	= 0;
	byteRate	= 0;
	volume		= 0;

}
