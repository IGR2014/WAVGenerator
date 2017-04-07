#include <iostream>
#include <fstream>

#include "WAVHeader.hpp"


int main(int argc, char argv[]) {

	char data[44];

	WAVHeader wHeader;
	wHeader.write(data);

	printf("Chunk ID:\t\t%c%c%c%c\n", data[0], data[1], data[2], data[3]);
	printf("Chunk size:\t\t%d\n", *(unsigned int*)&data[4]);
	printf("Format:\t\t\t%c%c%c%c\n", data[8], data[9], data[10], data[11]);
	printf("Subchunk 1 ID:\t\t%c%c%c%c\n", data[12], data[13], data[14], data[15]);
	printf("Subchunk 1 size:\t%d\n", *(unsigned int*)&data[16]);
	printf("Audio format:\t\t%d\n", *(unsigned short*)&data[20]);
	printf("Number of channels:\t%d\n", *(unsigned short*)&data[22]);
	printf("Sample rate:\t\t%d\n", *(unsigned int*)&data[24]);
	printf("Byte rate:\t\t%d\n", *(unsigned int*)&data[28]);
	printf("Block align:\t\t%d\n", *(unsigned short*)&data[32]);
	printf("Bits per sample:\t%d\n", *(unsigned short*)&data[34]);
	printf("Subchunk 2 ID:\t\t%c%c%c%c\n", data[36], data[37], data[38], data[39]);
	printf("Subchunk 2 size:\t%d\n", *(unsigned int*)&data[40]);

	if (wHeader.read(data)) {

		printf("\nChunk ID:\t\t%c%c%c%c\n", data[0], data[1], data[2], data[3]);
		printf("Chunk size:\t\t%d\n", *(unsigned int*)&data[4]);
		printf("Format:\t\t\t%c%c%c%c\n", data[8], data[9], data[10], data[11]);
		printf("Subchunk 1 ID:\t\t%c%c%c%c\n", data[12], data[13], data[14], data[15]);
		printf("Subchunk 1 size:\t%d\n", *(unsigned int*)&data[16]);
		printf("Audio format:\t\t%d\n", *(unsigned short*)&data[20]);
		printf("Number of channels:\t%d\n", *(unsigned short*)&data[22]);
		printf("Sample rate:\t\t%d\n", *(unsigned int*)&data[24]);
		printf("Byte rate:\t\t%d\n", *(unsigned int*)&data[28]);
		printf("Block align:\t\t%d\n", *(unsigned short*)&data[32]);
		printf("Bits per sample:\t%d\n", *(unsigned short*)&data[34]);
		printf("Subchunk 2 ID:\t\t%c%c%c%c\n", data[36], data[37], data[38], data[39]);
		printf("Subchunk 2 size:\t%d\n", *(unsigned int*)&data[40]);
	
	}

	return 0;

}

