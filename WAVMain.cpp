#include <iostream>

#include "WAVHeader.hpp"


int main(int argc, char argv[]) {

	char data[44];

	WAVHeader wHeader;
	wHeader.write(data);

	for (int i = 0; i < 44; ++i) {
	
		printf("%X ", data[i]);
	
	}

	return 0;

}

