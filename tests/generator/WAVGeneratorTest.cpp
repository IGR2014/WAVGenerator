/////////////////////////////////////////////////////////
//
//	Name:		WAVGeneratorTest.cpp
//
//	Copyright:	Igor Baklykov © 2017
//
//	Author:		Igor Baklykov
//
//	Date:		12.04.2017 17:11
//
//	Description:	WAVE file generators test
//
/////////////////////////////////////////////////////////


#include <iostream>
#include <fstream>

#include "../../WAVHeader.hpp"
#include "../../generators/WAVSinGenerator.hpp"
#include "../../generators/WAVSawGenerator.hpp"
#include "../../generators/WAVSquareGenerator.hpp"


int main(int argc, char* argv[]) {

	unsigned int	dataSize	= 48000;
	unsigned short*	data		= new unsigned short[dataSize + 22];

	std::ofstream	file;

	WAVHeader header;
	header.setDataSize(dataSize * 2);
	header.write((char*)data);

	WAVSinGenerator sinGen;
	sinGen.setFrequency(440.0);
	sinGen.generate((data + 22), dataSize);

	file.open("sin.wav", std::ios::out | std::ios::binary);
	file.write((char*)data, (dataSize + 22) * 2);
	file.close();

	WAVSawGenerator sawGen;
	sawGen.setFrequency(440.0);
	sawGen.generate((data + 22), dataSize);

	file.open("saw.wav", std::ios::out | std::ios::binary);
	file.write((char*)data, (dataSize + 22) * 2);
	file.close();

	WAVSquareGenerator sqrGen;
	sqrGen.setFrequency(440.0);
	sqrGen.generate((data + 22), dataSize);

	file.open("square.wav", std::ios::out | std::ios::binary);
	file.write((char*)data, (dataSize + 22) * 2);
	file.close();

	delete [] data;

	return 0;

}

