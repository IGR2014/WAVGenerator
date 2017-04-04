/////////////////////////////////////////////////////////
//
//	Name:		WAVHeader.hpp
//
//	Copyright:	Igor Baklykov © 2017
//
//	Author:		Igor Baklykov
//
//	Date:		04.04.17 22:50
//
//	Description:	WAVE file header class
//
/////////////////////////////////////////////////////////


#include "WAVHeader.hpp"


// Default c-tor
WAVHeader::WAVHeader() {

	chunkID		= WAV_RIFF_CHUNK_ID;
	chunkSize	= 36;
	format		= WAV_WAVE_CHUNK_ID;
	subchunk1ID	= WAV_FMT__SUBCHUNK_ID;
	subchunk1Size	= 16;
	audioFormat	= 1;
	numOfChannels	= 1;
	sampleRate	= 48000;
	byteRate	= 96000;
	blockAlign	= 2;
	bitsPerSample	= 16;
	subchunk2ID	= WAV_DATA_SUBCHUNK_ID;
	subchunk2Size	= 0;

};

// Copy c-tor
WAVHeader::WAVHeader(const WAVHeader &_w) {

	if (&_w != this) {
	
		chunkID			= _w.chunkID;
		chunkSize		= _w.chunkSize;
		format			= _w.format;
		subchunk1ID		= _w.subchunk1ID;
		subchunk1Size		= _w.subchunk1Size;
		audioFormat		= _w.audioFormat;
		numOfChannels		= _w.numOfChannels;
		sampleRate		= _w.sampleRate;
		byteRate		= _w.byteRate;
		blockAlign		= _w.blockAlign;
		bitsPerSample		= _w.bitsPerSample;
		subchunk2ID		= _w.subchunk2ID;
		subchunk2Size		= _w.subchunk2Size;
	
	}

};

// Move c-tor
WAVHeader::WAVHeader(WAVHeader &&_w) {

	if (&_w != this) {
	
		chunkID			= _w.chunkID;
		chunkSize		= _w.chunkSize;
		format			= _w.format;
		subchunk1ID		= _w.subchunk1ID;
		subchunk1Size		= _w.subchunk1Size;
		audioFormat		= _w.audioFormat;
		numOfChannels		= _w.numOfChannels;
		sampleRate		= _w.sampleRate;
		byteRate		= _w.byteRate;
		blockAlign		= _w.blockAlign;
		bitsPerSample		= _w.bitsPerSample;
		subchunk2ID		= _w.subchunk2ID;
		subchunk2Size		= _w.subchunk2Size;
	
		_w.chunkID		= WAV_RIFF_CHUNK_ID;
		_w.chunkSize		= 36;
		_w.format		= WAV_WAVE_CHUNK_ID;
		_w.subchunk1ID		= WAV_FMT__SUBCHUNK_ID;
		_w.subchunk1Size	= 16;
		_w.audioFormat		= 1;
		_w.numOfChannels	= 1;
		_w.sampleRate		= 48000;
		_w.byteRate		= 96000;
		_w.blockAlign		= 2;
		_w.bitsPerSample	= 16;
		_w.subchunk2ID		= WAV_DATA_SUBCHUNK_ID;
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

	return byteRate;

};

// Get block align
unsigned short WAVHeader::getBlockAlign() const {

	return blockAlign;

};

// Get bits per sample
unsigned short WAVHeader::getBitsPerSample() const {

	return bitsPerSample;

};


// Get audio format
void WAVHeader::setAudioFormat(const unsigned short &_audioFormat) {

	audioFormat = _audioFormat;

};

// Get number of channels
void WAVHeader::setNumOfChannels(const unsigned short &_numOfChannels) {

	numOfChannels = _numOfChannels;

};

// Get sample rate
void WAVHeader::setSampleRate(const unsigned int &_sampleRate) {

	sampleRate = _sampleRate;

};

// Get byte rate
void WAVHeader::setByteRate(const unsigned int &_byteRate) {

	byteRate = _byteRate;

};

// Get block align
void WAVHeader::setBlockAlign(const unsigned short &_blockAlign) {

	blockAlign = _blockAlign;

};

// Get bits per sample
void WAVHeader::setBitsPerSample(const unsigned short &_bitsPerSample) {

	bitsPerSample = _bitsPerSample;

};


// Read header
bool WAVHeader::read(const char *_buffer) {

	chunkID		= *((unsigned int*)_buffer);
	chunkSize	= *((unsigned int*)_buffer + 4);
	format		= *((unsigned int*)_buffer + 8);
	subchunk1ID	= *((unsigned int*)_buffer + 12);
	subchunk1Size	= *((unsigned int*)_buffer + 16);
	audioFormat	= *((unsigned short*)_buffer + 20);
	numOfChannels	= *((unsigned short*)_buffer + 22);
	sampleRate	= *((unsigned int*)_buffer + 24);
	byteRate	= *((unsigned int*)_buffer + 28);
	blockAlign	= *((unsigned short*)_buffer + 32);
	bitsPerSample	= *((unsigned short*)_buffer + 34);
	subchunk2ID	= *((unsigned int*)_buffer + 36);
	subchunk2Size	= *((unsigned int*)_buffer + 40);

	return true;

};

// Write header
bool WAVHeader::write(const char *_buffer) const {

	*((unsigned int*)_buffer)		= chunkID;
	*((unsigned int*)_buffer + 4)		= chunkSize;
	*((unsigned int*)_buffer + 8)		= format;
	*((unsigned int*)_buffer + 12)		= subchunk1ID;
	*((unsigned int*)_buffer + 16)		= subchunk1Size;
	*((unsigned short*)_buffer + 20)	= audioFormat;
	*((unsigned short*)_buffer + 22)	= numOfChannels;
	*((unsigned int*)_buffer + 24)		= sampleRate;
	*((unsigned int*)_buffer + 28)		= byteRate;
	*((unsigned short*)_buffer + 32)	= blockAlign;
	*((unsigned short*)_buffer + 34)	= bitsPerSample;
	*((unsigned int*)_buffer + 36)		= subchunk2ID;
	*((unsigned int*)_buffer + 40)		= subchunk2Size;
	
	return true;

};
		

// D-tor
WAVHeader::~WAVHeader() {

	chunkID		= 0;
	chunkSize	= 0;
	format		= 0;
	subchunk1ID	= 0;
	subchunk1Size	= 0;
	audioFormat	= 0;
	numOfChannels	= 0;
	sampleRate	= 0;
	byteRate	= 0;
	blockAlign	= 0;
	bitsPerSample	= 0;
	subchunk2ID	= 0;
	subchunk2Size	= 0;

};

