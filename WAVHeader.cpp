/////////////////////////////////////////////////////////
//
//	Name:		WAVHeader.hpp
//
//	Copyright:	Igor Baklykov © 2017
//
//	Author:		Igor Baklykov
//
//	Date:		04.04.2017 22:50
//
//	Description:	WAVE file header class
//
/////////////////////////////////////////////////////////


#include "WAVHeader.hpp"


// Default c-tor
WAVHeader::WAVHeader() {

	audioFormat	= 1;
	numOfChannels	= 1;
	sampleRate	= 48000;
	bitsPerSample	= 16;
	subchunk2Size	= 0;

};

// Copy c-tor
WAVHeader::WAVHeader(const WAVHeader &_w) {

	if (&_w != this) {

		audioFormat		= _w.audioFormat;
		numOfChannels		= _w.numOfChannels;
		sampleRate		= _w.sampleRate;
		bitsPerSample		= _w.bitsPerSample;
		subchunk2Size		= _w.subchunk2Size;
	
	}

};

// Move c-tor
WAVHeader::WAVHeader(WAVHeader &&_w) {

	if (&_w != this) {

		audioFormat		= _w.audioFormat;
		numOfChannels		= _w.numOfChannels;
		sampleRate		= _w.sampleRate;
		bitsPerSample		= _w.bitsPerSample;
		subchunk2Size		= _w.subchunk2Size;
	
		_w.audioFormat		= 1;
		_w.numOfChannels	= 1;
		_w.sampleRate		= 48000;
		_w.bitsPerSample	= 16;
		_w.subchunk2Size	= 0;
	
	}

};


// Get audio format
unsigned short WAVHeader::getAudioFormat() const {

	return audioFormat;

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


// Set audio format
void WAVHeader::setAudioFormat(const unsigned short &_audioFormat) {

	audioFormat = _audioFormat;

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


// Read header
bool WAVHeader::read(const char *_buffer) {

	if (*(unsigned int*)&_buffer[0] != WAV_RIFF_CHUNK_ID ||
	    *(unsigned int*)&_buffer[8] != WAV_WAVE_CHUNK_ID ||
	    *(unsigned int*)&_buffer[12] != WAV_FMT__SUBCHUNK_ID ||
	    *(unsigned int*)&_buffer[16] != 16 ||
	    *(unsigned int*)&_buffer[36] != WAV_DATA_SUBCHUNK_ID) {

		return false;

	}

	audioFormat	= *(unsigned short*)&_buffer[20];
	numOfChannels	= *(unsigned short*)&_buffer[22];
	sampleRate	= *(unsigned int*)&_buffer[24];
	bitsPerSample	= *(unsigned short*)&_buffer[34];
	subchunk2Size	= *(unsigned int*)&_buffer[40];

	return true;

};

// Write header
bool WAVHeader::write(const char *_buffer) const {

	*(unsigned int*)&_buffer[0]	= WAV_RIFF_CHUNK_ID;
	*(unsigned int*)&_buffer[4]	= 36 + subchunk2Size;
	*(unsigned int*)&_buffer[8]	= WAV_WAVE_CHUNK_ID;
	*(unsigned int*)&_buffer[12]	= WAV_FMT__SUBCHUNK_ID;
	*(unsigned int*)&_buffer[16]	= 16;
	*(unsigned short*)&_buffer[20]	= audioFormat;
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

	audioFormat	= 0;
	numOfChannels	= 0;
	sampleRate	= 0;
	bitsPerSample	= 0;
	subchunk2Size	= 0;

};

