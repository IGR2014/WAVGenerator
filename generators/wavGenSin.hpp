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


#include "../wavIGen.hpp"


// Wav file data sin generator
class wavGenSin : public wavIGen {

	private:


	public:

		// C-tor
		wavGenSin() = default;
		// Copy c-tor
		wavGenSin(const wavGenSin&) = default;
		// Move c-tor
		wavGenSin(wavGenSin&&) = default;

		// Generator function
		virtual void generate(unsigned short*, const unsigned int&) override final;

		// D-tor
		~wavGenSin() = default;

};
