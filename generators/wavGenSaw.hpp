/////////////////////////////////////////////////////////
//
//	Name:		WAVSawGenerator.hpp
//
//	Copyright:	Igor Baklykov (c) 2017
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


#include "../wavIGen.hpp"


// Wav file data saw generator
class wavGenSaw : public wavIGen {

	private:


	public:

		// C-tor
		wavGenSaw() = default;
		// Copy c-tor
		wavGenSaw(const wavGenSaw&) = default;
		// Move c-tor
		wavGenSaw(wavGenSaw&&) = default;

		// Generator function
		virtual void generate(unsigned short*, const unsigned int&) override final;

		// D-tor
		~wavGenSaw() = default;

};
