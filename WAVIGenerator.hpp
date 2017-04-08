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
//	Description:	WAVE file generator class
//			declaration
//
/////////////////////////////////////////////////////////


#pragma once


// WAV file data generator interface class
class WAVIGenerator {

	private:

	public:

		// C-tor
		WAVIGenerator();

		// Generation function
		virtual void generate() = 0;

		// D-tor
		virtual ~WAVIGenerator();

};

