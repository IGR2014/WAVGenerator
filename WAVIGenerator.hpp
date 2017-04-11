/////////////////////////////////////////////////////////
//
//	Name:		WAVIGenerator.hpp
//
//	Copyright:	Igor Baklykov © 2017
//
//	Author:		Igor Baklykov
//
//	Date:		11.04.2017 23:28
//
//	Description:	WAVE file generator interface
//			class declaration
//
/////////////////////////////////////////////////////////


#pragma once


// WAV file data generator interface class
class WAVIGenerator {

	private:

		double		frequency;		// Generated sound frequency
		unsigned int	sampleRate;		// Generated sound sample rate
		unsigned short	byteRate;		// Generated sound byte rate
		unsigned short	volume;			// Generated sound volume


	public:

		// C-tor
		WAVIGenerator();
		// Copy c-tor
		WAVIGenerator(const WAVIGenerator&);
		// Move c-tor
		WAVIGenerator(WAVIGenerator&&);

		// Generator function
		virtual void	generate(unsigned short*, const unsigned int&) = 0;

		// Get frequency
		double		getFrequency() const;
		// Get sample rate
		unsigned int	getSampleRate() const;
		// Get byte rate
		unsigned short	getByteRate() const;
		// Get volume
		unsigned short	getVolume() const;

		// Set frequency
		void		setFrequency(const double&);
		// Set sample rate
		void		setSampleRate(const unsigned int&);
		// Set byte rate
		void		setByteRate(const unsigned short&);
		// Set volume
		void		setVolume(const unsigned short&);

		// D-tor
		virtual ~WAVIGenerator();

};

