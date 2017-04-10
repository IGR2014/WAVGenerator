/////////////////////////////////////////////////////////
//
//	Name:		WAVGeneratorTest.cpp
//
//	Copyright:	Igor Baklykov © 2017
//
//	Author:		Igor Baklykov
//
//	Date:		09.04.2017 20:01
//
//	Description:	WAVE file generator test
//
/////////////////////////////////////////////////////////


#include <iostream>
#include <fstream>

#include "../../WAVHeader.hpp"
#include "../../generators/WAVSinGenerator.hpp"


int main(int argc, char* argv[]) {

	unsigned int dataSize = 96022;
	unsigned short* data = new unsigned short[dataSize];

	WAVHeader header;
	header.write((char*)data);
	header.setDataSize((dataSize - 22) * 2);

	WAVSinGenerator sin;
	sin.generate((data + 22), dataSize - 22);

	std::ofstream file;
	file.open("file.wav", std::ios::out | std::ios::binary);
	file.write((char*)data, dataSize * 2);
	file.close();

	delete [] data;

	return 0;

}

