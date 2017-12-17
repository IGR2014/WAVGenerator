/////////////////////////////////////////////////////////
//
//	Name:		WAVGeneratorTest.cpp
//
//	Copyright:	Igor Baklykov (c) 2017
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
#include "../../generators/WAVSinGen.hpp"
#include "../../generators/WAVSawGen.hpp"
#include "../../generators/WAVSquareGen.hpp"


int main(int argc, char* argv[]) {

	unsigned int	dataSize	= 48000;
	unsigned short*	data		= new unsigned short[dataSize + 22];

	std::ofstream	file;

	WAVHeader header;
	header.setDataSize(dataSize * 2);
	header.write(reinterpret_cast<char*>(data));

	WAVSinGenerator sinGen;
	sinGen.setFrequency(440.0);
	sinGen.setSampleRate(dataSize);
	sinGen.setVolume(16384);
	sinGen.generate((data + 22), dataSize);

	file.open("sin.wav", std::ios::out | std::ios::binary);
	file.write(reinterpret_cast<char*>(data), (dataSize + 22) * 2);
	file.close();

	WAVSawGenerator sawGen;
	sawGen.setFrequency(440.0);
	sawGen.setSampleRate(dataSize);
	sawGen.setVolume(16384);
	sawGen.generate((data + 22), dataSize);

	file.open("saw.wav", std::ios::out | std::ios::binary);
	file.write(reinterpret_cast<char*>(data), (dataSize + 22) * 2);
	file.close();

	WAVSquareGenerator sqrGen;
	sqrGen.setFrequency(440.0);
	sqrGen.setSampleRate(dataSize);
	sqrGen.setVolume(16384);
	sqrGen.generate((data + 22), dataSize);

	file.open("square.wav", std::ios::out | std::ios::binary);
	file.write(reinterpret_cast<char*>(data), (dataSize + 22) * 2);
	file.close();

	delete [] data;

	return 0;

}
