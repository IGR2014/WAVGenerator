#pragma once


// RIFF chunk ID
static const char WAV_RIFF_CHUNK_ID[]		= "RIFF";
// WAVE chunk ID
static const char WAV_WAVE_CHUNK_ID[]		= "WAVE";
// fmt subchunk/section
static const char WAV_FMT__SUBCHUNK_ID[]	= "fmt ";
// data subchunk/section
static const char WAV_DATA_SUBCHUNK_ID[]	= "data";

// WAVE file header
class WAVHeader {

	private:

		char			chunkID;		// "RIFF"
		unsigned int		chunkSize;		// Size of all chunks
		char			format;			// "WAVE"
		char			subchunk1ID;		// "fmt "
		unsigned int		subchunk1Size;		// Size of chunk (16 for PCM)
		unsigned short		audioFormat;		// Audio format
		unsigned short		numOfChannels;		// Number of channels
		unsigned int		sampleRate;		// Sample rate
		unsigned int		byteRate;		// Byte rate
		unsigned short		blockAlign;		// Block align
		unsigned short		bitsPerSample;		// Bits per sample
		char			subchunk2ID;		// "data"
		unsigned int		subchunk2Size;		// Size of data


	public:

		// Default c-tor
		WAVHeader();
		// C-tor
		explicit WAVHeader(const char*);
		// Copy c-tor
		WAVHeader(const WAVHeader&);
		// Move c-tor
		WAVHeader(WAVHeader&&);
		
		// Get audio format
		unsigned short		getAudioFormat() const;
		// Get number of channels
		unsigned short		getNumOfChannels() const;
		// Get sample rate
		unsigned int		getSampleRate() const;
		// Get byte rate
		unsigned int		getByteRate() const;
		// Get block align
		unsigned short		getBlockAlign() const;
		// Get bits per sample
		unsigned short		getBitsPerSample() const;
		
		// Get audio format
		void			setAudioFormat(const unsigned short&);
		// Get number of channels
		void			setNumOfChannels(const unsigned short&);
		// Get sample rate
		void			setSampleRate(const unsigned int&);
		// Get byte rate
		void			setByteRate(const unsigned int&);
		// Get block align
		void			setBlockAlign(const unsigned short&);
		// Get bits per sample
		void			setBitsPerSample(const unsigned short&);
		
		// Read header
		bool			read(const char*);
		// Write header
		bool			write(const char*) const;
		
		// D-tor
		~WAVHeader();

};

