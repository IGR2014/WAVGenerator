/////////////////////////////////////////////////////////
//
//	Name:		WAVIGenerator.hpp
//
//	Copyright:	Igor Baklykov © 2017
//
//	Author:		Igor Baklykov
//
//	Date:		09.04.2017 20:01
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


	public:

		// C-tor
		WAVIGenerator();
		// Copy c-tor
		WAVIGenerator(const WAVIGenerator&);
		// Move c-tor
		WAVIGenerator(WAVIGenerator&&);

		// Generator function
		virtual void	generate(char*, const int&) = 0;

		// D-tor
		virtual ~WAVIGenerator();

};

