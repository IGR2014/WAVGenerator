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


#include "../../wavHeader.hpp"
#include "../../generators/wavGenSin.hpp"
#include "../../generators/wavGenSaw.hpp"
#include "../../generators/wavGenSqr.hpp"


int main(int argc, char* argv[]) {

	unsigned short	volume		= 16384;
	unsigned int	dataSize	= 48000;
	unsigned short*	data		= new unsigned short[dataSize + 22];

	std::ofstream	file;

	WAVHeader header;
	header.setDataSize(dataSize * 2);
	header.write(reinterpret_cast<char*>(data));

	wavGenSin sinGen;
	sinGen.setFrequency(440.0);
	sinGen.setSampleRate(dataSize);
	sinGen.setVolume(volume);
	sinGen.generate((data + 22), dataSize);

	file.open("sin.wav", std::ios::out | std::ios::binary);
	file.write(reinterpret_cast<char*>(data), (dataSize + 22) * 2);
	file.close();

	wavGenSaw sawGen;
	sawGen.setFrequency(440.0);
	sawGen.setSampleRate(dataSize);
	sawGen.setVolume(volume);
	sawGen.generate((data + 22), dataSize);

	file.open("saw.wav", std::ios::out | std::ios::binary);
	file.write(reinterpret_cast<char*>(data), (dataSize + 22) * 2);
	file.close();

	wavGenSqr sqrGen;
	sqrGen.setFrequency(440.0);
	sqrGen.setSampleRate(dataSize);
	sqrGen.setVolume(volume);
	sqrGen.generate((data + 22), dataSize);

	file.open("square.wav", std::ios::out | std::ios::binary);
	file.write(reinterpret_cast<char*>(data), (dataSize + 22) * 2);
	file.close();

	delete [] data;

	return 0;

}
