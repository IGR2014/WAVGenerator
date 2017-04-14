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


#include "WAVIGen.hpp"


// C-tor
WAVIGenerator::WAVIGenerator() : frequency(500.0), sampleRate(96000), byteRate(2), volume(32767) {};

// Copy c-tor
WAVIGenerator::WAVIGenerator(const WAVIGenerator &_g) {

	if (&_g != this) {

		frequency	= _g.frequency;
		sampleRate	= _g.sampleRate;
		byteRate	= _g.byteRate;
		volume		= _g.volume;

	}

};

// Move c-tor
WAVIGenerator::WAVIGenerator(WAVIGenerator &&_g) {

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
double WAVIGenerator::getFrequency() const {

	return frequency;

};

// Get sample rate
unsigned int WAVIGenerator::getSampleRate() const {

	return sampleRate;

};

// Get byte rate
unsigned short WAVIGenerator::getByteRate() const {

	return byteRate;

};

// Get volume
unsigned short WAVIGenerator::getVolume() const {

	return volume;

};

// Set frequency
void WAVIGenerator::setFrequency(const double &_frequency) {

	frequency = _frequency;

};

// Set sample rate
void WAVIGenerator::setSampleRate(const unsigned int &_sampleRate) {

	sampleRate = _sampleRate;

};

// Set byte rate
void WAVIGenerator::setByteRate(const unsigned short &_byteRate) {

	byteRate = _byteRate;

};

// Set volume
void WAVIGenerator::setVolume(const unsigned short &_volume) {

	volume = _volume;

};


// D-tor
WAVIGenerator::~WAVIGenerator() {

	frequency	= 0.0;
	sampleRate	= 0;
	byteRate	= 0;
	volume		= 0;

}
