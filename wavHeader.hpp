/////////////////////////////////////////////////////////
//
//	Name:		wavHeader.hpp
//
//	Copyright:	Igor Baklykov (c) 2017
//
//	Author:		Igor Baklykov
//
//	Date:		18.12.2017 16:26
//
//	Description:	WAVE file header class
//			declaration
//
/////////////////////////////////////////////////////////


#pragma once


// RIFF chunk ID
static const unsigned int WAV_RIFF_CHUNK_ID	= 0x46464952;	// "RIFF"
// WAVE chunk ID
static const unsigned int WAV_WAVE_CHUNK_ID	= 0x45564157;	// "WAVE"
// fmt subchunk/section
static const unsigned int WAV_FMT__SUBCHUNK_ID	= 0x20746d66;	// "fmt "
// data subchunk/section
static const unsigned int WAV_DATA_SUBCHUNK_ID	= 0x61746164;	// "data"


// WAVE file header
class wavHeader {

	private:

		unsigned int		sampleRate;		// Sample rate
		unsigned int		dataSize;		// Size of data
		unsigned short		numOfChannels;		// Number of channels
		unsigned short		bitsPerSample;		// Bits per sample


	public:

		// Default c-tor
		wavHeader();
		// Copy c-tor
		wavHeader(const wavHeader&);

		// Get sample rate
		unsigned int		getSampleRate() const;
		// Get data size
		unsigned int		getDataSize() const;
		// Get number of channels
		unsigned short		getNumOfChannels() const;
		// Get bits per sample
		unsigned short		getBitsPerSample() const;
		// Get byte rate
		unsigned int		getByteRate() const;
		// Get block align
		unsigned short		getBlockAlign() const;

		// Set sample rate
		void			setSampleRate(const unsigned int&);
		// Set data size
		void			setDataSize(const unsigned int&);
		// Set number of channels
		void			setNumOfChannels(const unsigned short&);
		// Set bits per sample
		void			setBitsPerSample(const unsigned short&);

		// Write header
		bool			write(const char*) const;

		// D-tor
		~wavHeader();

};

