/////////////////////////////////////////////////////////
//
//	Name:		WAVSinGenerator.hpp
//
//	Copyright:	Igor Baklykov (c) 2017
//
//	Author:		Igor Baklykov
//
//	Date:		09.04.2017 20:01
//
//	Description:	WAVE file sin generator
//			class declaration
//
/////////////////////////////////////////////////////////


#pragma once


#include "../WAVIGenerator.hpp"


// Wav file data sin generator
class WAVSinGenerator : public WAVIGenerator {

	private:


	public:

		// C-tor
		WAVSinGenerator() = default;
		// Copy c-tor
		WAVSinGenerator(const WAVSinGenerator&) = default;
		// Move c-tor
		WAVSinGenerator(WAVSinGenerator&&) = default;

		// Generator function
		virtual void generate(unsigned short*, const unsigned int&) override final;

		// D-tor
		~WAVSinGenerator() = default;

};
