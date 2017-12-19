/////////////////////////////////////////////////////////
//
//	Name:		wavSound.cpp
//
//	Copyright:	Igor Baklykov (c) 2017
//
//	Author:		Igor Baklykov
//
//	Date:		18.12.2017 17:11
//
//	Description:	WAVE file generators
//
/////////////////////////////////////////////////////////


#include <windows.h>


#include "../../wavHeader.hpp"
#include "../../wavFile.hpp"
#include "../../generators/wavGenSin.hpp"
#include "../../generators/wavGenSaw.hpp"
#include "../../generators/wavGenSqr.hpp"


int main(int argc, char* argv[]) {

	float		frequency	= 440.0;
	unsigned short	volume		= 16384;
	unsigned int	dataSize	= 44100;
	unsigned short*	data		= new unsigned short[dataSize + 22];

	wavHeader header;
	header.setDataSize(dataSize * 2);
	header.write(reinterpret_cast<char*>(data));

	wavGenSin sinGen;
	sinGen.setFrequency(frequency);
	sinGen.setSampleRate(dataSize);
	sinGen.setVolume(volume);
	sinGen.generate((data + 22), dataSize);

	wavFile wFileSin, wFileSaw, wFileSqr;

	wFileSin.setHeader(header);
	wFileSaw.setHeader(header);
	wFileSqr.setHeader(header);

	wFileSin.setData(reinterpret_cast<char*>(data), (dataSize + 22) * 2);

	wavGenSaw sawGen;
	sawGen.setFrequency(frequency);
	sawGen.setSampleRate(dataSize);
	sawGen.setVolume(volume);
	sawGen.generate((data + 22), dataSize);

	wFileSaw.setData(reinterpret_cast<char*>(data), (dataSize + 22) * 2);

	wavGenSqr sqrGen;
	sqrGen.setFrequency(frequency);
	sqrGen.setSampleRate(dataSize);
	sqrGen.setVolume(volume);
	sqrGen.generate((data + 22), dataSize);

	wFileSqr.setData(reinterpret_cast<char*>(data), (dataSize + 22) * 2);

	delete [] data;

	wFileSin.save(L"sin");
	wFileSaw.save(L"saw");
	wFileSqr.save(L"sqr");

	wFileSin.play(true);
	Sleep(3000);
	wFileSin.stop();

	wFileSaw.play(true);
	Sleep(3000);
	wFileSaw.stop();

	wFileSqr.play(true);
	Sleep(3000);
	wFileSqr.stop();

	return 0;

}


