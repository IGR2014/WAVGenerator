/////////////////////////////////////////////////////////
//
//	Name:			wavGenSqr.hpp
//
//	Copyright:		Igor Baklykov (c) 2017
//
//	Author:			Igor Baklykov
//
//	Date:			18.12.2017 16:48
//
//	Description:	WAVE file square generator
//					class declaration
//
/////////////////////////////////////////////////////////


#pragma once


#include "wavIGen.hpp"


// Wav file data square generator
class wavGenSqr : public wavIGen {

	private:


	public:

		// C-tor
		wavGenSqr() : wavIGen() {};
		// Copy c-tor
		wavGenSqr(const wavGenSqr&);

		// Generator function
		virtual void generate(unsigned short*, const unsigned int&) override;

		// D-tor
		~wavGenSqr() {};

};


