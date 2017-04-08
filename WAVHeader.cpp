/////////////////////////////////////////////////////////
//
//	Name:		WAVHeader.hpp
//
//	Copyright:	Igor Baklykov © 2017
//
//	Author:		Igor Baklykov
//
//	Date:		08.04.2017 03:41
//
//	Description:	WAVE file header class
//
/////////////////////////////////////////////////////////


#include "WAVHeader.hpp"


// Default c-tor
WAVHeader::WAVHeader() {

	sampleRate	= 48000;
	subchunk2Size	= 0;
	numOfChannels	= 1;
	bitsPerSample	= 16;

};

// Copy c-tor
WAVHeader::WAVHeader(const WAVHeader &_w) {

	if (&_w != this) {

		sampleRate		= _w.sampleRate;
		subchunk2Size		= _w.subchunk2Size;
		numOfChannels		= _w.numOfChannels;
		bitsPerSample		= _w.bitsPerSample;
	
	}

};

// Move c-tor
WAVHeader::WAVHeader(WAVHeader &&_w) {

	if (&_w != this) {

		sampleRate		= _w.sampleRate;
		subchunk2Size		= _w.subchunk2Size;
		numOfChannels		= _w.numOfChannels;
		bitsPerSample		= _w.bitsPerSample;

		_w.sampleRate		= 48000;
		_w.subchunk2Size	= 0;
		_w.numOfChannels	= 1;
		_w.bitsPerSample	= 16;
	
	}

};


// Get number of channels
unsigned short WAVHeader::getNumOfChannels() const {

	return numOfChannels;

};

// Get sample rate
unsigned int WAVHeader::getSampleRate() const {

	return sampleRate;

};

// Get byte rate
unsigned int WAVHeader::getByteRate() const {

	return sampleRate * numOfChannels * bitsPerSample / 8;

};

// Get block align
unsigned short WAVHeader::getBlockAlign() const {

	return numOfChannels * bitsPerSample / 8;

};

// Get bits per sample
unsigned short WAVHeader::getBitsPerSample() const {

	return bitsPerSample;

};


// Set number of channels
void WAVHeader::setNumOfChannels(const unsigned short &_numOfChannels) {

	numOfChannels = _numOfChannels;

};

// Set sample rate
void WAVHeader::setSampleRate(const unsigned int &_sampleRate) {

	sampleRate = _sampleRate;

};

// Set bits per sample
void WAVHeader::setBitsPerSample(const unsigned short &_bitsPerSample) {

	bitsPerSample = _bitsPerSample;

};


// Write header
bool WAVHeader::write(const char *_buffer) const {

	*(unsigned int*)&_buffer[0]	= WAV_RIFF_CHUNK_ID;
	*(unsigned int*)&_buffer[4]	= 36 + subchunk2Size;
	*(unsigned int*)&_buffer[8]	= WAV_WAVE_CHUNK_ID;
	*(unsigned int*)&_buffer[12]	= WAV_FMT__SUBCHUNK_ID;
	*(unsigned int*)&_buffer[16]	= 16;
	*(unsigned short*)&_buffer[20]	= 1;
	*(unsigned short*)&_buffer[22]	= numOfChannels;
	*(unsigned int*)&_buffer[24]	= sampleRate;
	*(unsigned int*)&_buffer[28]	= sampleRate * numOfChannels * bitsPerSample / 8;
	*(unsigned short*)&_buffer[32]	= numOfChannels * bitsPerSample / 8;
	*(unsigned short*)&_buffer[34]	= bitsPerSample;
	*(unsigned int*)&_buffer[36]	= WAV_DATA_SUBCHUNK_ID;
	*(unsigned int*)&_buffer[40]	= subchunk2Size;
	
	return true;

};
		

// D-tor
WAVHeader::~WAVHeader() {

	sampleRate	= 0;
	subchunk2Size	= 0;
	numOfChannels	= 0;
	bitsPerSample	= 0;

};

