/////////////////////////////////////////////////////////
//
//	Name:		WAVSawGenerator.hpp
//
//	Copyright:	Igor Baklykov © 2017
//
//	Author:		Igor Baklykov
//
//	Date:		09.04.2017 20:01
//
//	Description:	WAVE file saw generator
//			class declaration
//
/////////////////////////////////////////////////////////


#pragma once


#include "../WAVIGenerator.hpp"


// Wav file data saw generator
class WAVSawGenerator : public WAVIGenerator {

	private:


	public:

		// C-tor
		WAVSawGenerator() = default;
		// Copy c-tor
		WAVSawGenerator(const WAVSawGenerator&) = default;
		// Move c-tor
		WAVSawGenerator(WAVSawGenerator&&) = default;

		// Generator function
		virtual void generate(unsigned short*, const unsigned int&) override final;

		// D-tor
		~WAVSawGenerator() = default;

};

