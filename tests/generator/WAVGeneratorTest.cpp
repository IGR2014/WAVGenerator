/////////////////////////////////////////////////////////
//
//	Name:		WAVGeneratorTest.cpp
//
//	Copyright:	Igor Baklykov © 2017
//
//	Author:		Igor Baklykov
//
//	Date:		12.04.2017 15:54
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

	unsigned int dataSize = 48000;
	unsigned short* data = new unsigned short[dataSize + 22];

	WAVHeader header;
	header.setDataSize(dataSize * 2);
	header.write((char*)data);

	WAVSquareGenerator gen;
	gen.setFrequency(440.0);
	gen.generate((data + 22), dataSize);

	std::ofstream file;
	file.open("file.wav", std::ios::out | std::ios::binary);
	file.write((char*)data, (dataSize + 22) * 2);
	file.close();

	delete [] data;

	return 0;

}

