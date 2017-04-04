#include "WAVHeader.hpp"


// Default c-tor
WAVHeader::WAVHeader() {
};

// C-tor
explicit WAVHeader::WAVHeader(const char* file) {
};

// Copy c-tor
WAVHeader::WAVHeader(const WAVHeader &w) {
};

// Move c-tor
WAVHeader::WAVHeader(WAVHeader &&w) {
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
bool WAVHeader::read(const char*) {

	// TO BE DONE

	return false;

};

// Write header
bool WAVHeader::write(const char*) const {

	// TO BE DONE
	
	return false;

};
		

// D-tor
WAVHeader::~WAVHeader() {
};

