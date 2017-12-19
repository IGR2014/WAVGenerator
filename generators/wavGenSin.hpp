/////////////////////////////////////////////////////////
//
//	Name:		wavGenSin.hpp
//
//	Copyright:	Igor Baklykov (c) 2017
//
//	Author:		Igor Baklykov
//
//	Date:		18.12.2017 16:47
//
//	Description:	WAVE file sin generator
//			class declaration
//
/////////////////////////////////////////////////////////


#pragma once


#include "wavIGen.hpp"


// Wav file data sin generator
class wavGenSin : public wavIGen {

	private:


	public:

		// C-tor
		wavGenSin() : wavIGen() {};
		// Copy c-tor
		wavGenSin(const wavGenSin&);

		// Generator function
		virtual void generate(unsigned short*, const unsigned int&) override;

		// D-tor
		~wavGenSin() {};

};

