/////////////////////////////////////////////////////////
//
//	Name:		WAVHeader.hpp
//
//	Copyright:	Igor Baklykov © 2017
//
//	Author:		Igor Baklykov
//
//	Date:		09.04.2017 20:01
//
//	Description:	WAVE file header test
//
/////////////////////////////////////////////////////////


#include <iostream>

#include "../../WAVHeader.hpp"


int main(int argc, char* argv[]) {

	char data[44];

	WAVHeader wHeader;
	wHeader.write(data);

	std::cout << "Chunk ID:\t\t\"" << data[0] << data[1] << data[2] << data[3] << "\"" << std::endl;
	std::cout << "Chunk size:\t\t" << *(unsigned int*)&data[4] << std::endl;
	std::cout << "Format:\t\t\t\"" << data[8] << data[9] << data[10] << data[11] << "\"" << std::endl;
	std::cout << "Subchunk 1 ID:\t\t\"" << data[12] << data[13] << data[14] << data[15] << "\"" << std::endl;
	std::cout << "Subchunk 1 size:\t" << *(unsigned int*)&data[16] << std::endl;
	std::cout << "Audio format:\t\t" << *(unsigned short*)&data[20] << std::endl;
	std::cout << "Number of channels:\t" << *(unsigned short*)&data[22] << std::endl;
	std::cout << "Sample rate:\t\t" << *(unsigned int*)&data[24] << std::endl;
	std::cout << "Byte rate:\t\t" << *(unsigned int*)&data[28] << std::endl;
	std::cout << "Block align:\t\t" << *(unsigned short*)&data[32] << std::endl;
	std::cout << "Bits per sample:\t" << *(unsigned short*)&data[34] << std::endl;
	std::cout << "Subchunk 2 ID:\t\t\"" << data[36] << data[37] << data[38] << data[39] << "\"" << std::endl;
	std::cout << "Subchunk 2 size:\t" << *(unsigned int*)&data[40] << std::endl;


	return 0;

}

