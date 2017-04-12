/////////////////////////////////////////////////////////
//
//	Name:		WAVSquareGenerator.hpp
//
//	Copyright:	Igor Baklykov © 2017
//
//	Author:		Igor Baklykov
//
//	Date:		12.04.2017 15:54
//
//	Description:	WAVE file square generator
//			class declaration
//
/////////////////////////////////////////////////////////


#pragma once


#include "../WAVIGenerator.hpp"


// Wav file data square generator
class WAVSquareGenerator : public WAVIGenerator {

	private:


	public:

		// C-tor
		WAVSquareGenerator() = default;
		// Copy c-tor
		WAVSquareGenerator(const WAVSquareGenerator&) = default;
		// Move c-tor
		WAVSquareGenerator(WAVSquareGenerator&&) = default;

		// Generator function
		virtual void generate(unsigned short*, const unsigned int&) override final;

		// D-tor
		~WAVSquareGenerator() = default;

};

