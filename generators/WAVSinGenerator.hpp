/////////////////////////////////////////////////////////
//
//	Name:		WAVSinGenerator.hpp
//
//	Copyright:	Igor Baklykov © 2017
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


// wav file data sin generator
class WAVSinGenerator : public WAVIGenerator {

	private:


	public:

		// C-tor
		WAVSinGenerator();
		// Copy c-tor
		WAVSinGenerator(const WAVSinGenerator&);
		// Move c-tor
		WAVSinGenerator(WAVSinGenerator&&);

		// Generator function
		virtual void generate(unsigned short*, const unsigned int&) override final;

		// D-tor
		~WAVSinGenerator();

};

