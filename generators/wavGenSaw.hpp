/////////////////////////////////////////////////////////
//
//	Name:		wavGenSaw.hpp
//
//	Copyright:	Igor Baklykov (c) 2017
//
//	Author:		Igor Baklykov
//
//	Date:		18.12.2017 16:47
//
//	Description:	WAVE file saw generator
//			class declaration
//
/////////////////////////////////////////////////////////


#pragma once


#include "wavIGen.hpp"


// Wav file data saw generator
class wavGenSaw : public wavIGen {

	private:


	public:

		// C-tor
		wavGenSaw() : wavIGen() {};
		// Copy c-tor
		wavGenSaw(const wavGenSaw&);

		// Generator function
		virtual void generate(unsigned short*, const unsigned int&) override;

		// D-tor
		~wavGenSaw() {};

};

