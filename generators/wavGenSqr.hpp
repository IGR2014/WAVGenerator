/////////////////////////////////////////////////////////
//
//	Name:		WAVSquareGenerator.hpp
//
//	Copyright:	Igor Baklykov (c) 2017
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


#include "../wavIGen.hpp"


// Wav file data square generator
class wavGenSqr : public wavIGen {

	private:


	public:

		// C-tor
		wavGenSqr() = default;
		// Copy c-tor
		wavGenSqr(const wavGenSqr&) = default;
		// Move c-tor
		wavGenSqr(wavGenSqr&&) = default;

		// Generator function
		virtual void generate(unsigned short*, const unsigned int&) override final;

		// D-tor
		~wavGenSqr() = default;

};
