#pragma once


static const char RIFF_CHUNK_ID[]		= "RIFF";
static const char WAVE_CHUNK_ID[]		= "WAVE";
static const char FMT__SUBCHUNK_ID[]	= "fmt ";
static const char DATA_SUBCHUNK_ID[]	= "data";

class WAVHeader {

	private:

		char				chunkID;				// "RIFF"
		unsigned int		chunkSize;				// Size of all chunks
		char				format;					// "WAVE"
		char				subchunk1ID;			// "fmt "
		unsigned int		subchunk1Size;			// Size of chunk (16 for PCM)
		unsigned short		audioFormat;			// Audio format
		unsigned short		numOfChannels;			// Number of channels
		unsigned int		sampleRate;				// Sample rate
		unsigned int		byteRate;				// Byte rate
		unsigned short		blockAlign;				// Block align
		unsigned short		bitsPerSample;			// Bits per sample
		char				subchunk2ID;			// "data"
		unsigned int		subchunk2Size;			// Size of data


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
		void				getAudioFormat(const unsigned short&);
		// Get number of channels
		void				getNumOfChannels(const unsigned short&);
		// Get sample rate
		void				getSampleRate(const unsigned int&);
		// Get byte rate
		void				getByteRate(const unsigned int&);
		// Get block align
		void				getBlockAlign(const unsigned short&);
		// Get bits per sample
		void				getBitsPerSample(const unsigned short&);
		
		// Read header
		bool				read(const char*);
		// Write header
		bool				write(const char*) const;
		
		// D-tor
		~WAVHeader();

};

