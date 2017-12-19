/////////////////////////////////////////////////////////
//
//	Name:		wavFile.hpp
//
//	Copyright:	Igor Baklykov (c) 2017
//
//	Author:		Igor Baklykov
//
//	Date:		18.12.2017 17:11
//
//	Description:	WAVE file
//
/////////////////////////////////////////////////////////


#define UNICODE
#define _UNICODE


#include <fstream>


#include "wavFile.hpp"


// Default c-tor
wavFile::wavFile() : data(NULL), dataSize(0) {}


// Play file
void wavFile::play(bool loop) {

	WAVEFORMATEX wf;

	wf.wFormatTag		= WAVE_FORMAT_PCM;
	wf.nChannels		= header.getNumOfChannels();
	wf.nSamplesPerSec	= header.getSampleRate();
	wf.nAvgBytesPerSec	= header.getByteRate();
	wf.nBlockAlign		= header.getBlockAlign();
	wf.wBitsPerSample	= header.getBitsPerSample();
	wf.cbSize		= 0;

	wh.lpData		= data + 44;
	wh.dwBufferLength	= header.getDataSize();
	wh.dwFlags		= (loop ? (WHDR_BEGINLOOP | WHDR_ENDLOOP) : 0);
	wh.dwLoops		= 1000;

	waveOutOpen(&hWaveOut, WAVE_MAPPER, &wf, 0, 0, CALLBACK_NULL);
	waveOutPrepareHeader(hWaveOut, &wh, sizeof(wh));

	waveOutWrite(hWaveOut, &wh, sizeof(wh));

}

// Stop playing
void wavFile::stop() {

	waveOutReset(hWaveOut);
	waveOutUnprepareHeader(hWaveOut, &wh, sizeof(wh));
	waveOutClose(hWaveOut);

}

// Save file on disk
void wavFile::save(const wchar_t* fileName) const {

	// File name
	WCHAR name[MAX_PATH];
	// Generate file name
	wsprintf(name, L"%s.wav", fileName);
	// Open file
	HANDLE hFile = CreateFileW(name,
				   GENERIC_WRITE,
				   FILE_SHARE_READ | FILE_SHARE_WRITE,
				   NULL,
				   CREATE_ALWAYS,
				   FILE_ATTRIBUTE_NORMAL,
				   NULL);
	// Check if file opened successfully
	if (hFile == INVALID_HANDLE_VALUE) {

		MessageBoxW(NULL, L"Unable to open file!", L"Error!", MB_OK);
		return;

	}

	// Write error checker
	DWORD bytesWriten = 0;
	// Write data to file
	WriteFile(hFile,
		  data,
		  dataSize,
		  &bytesWriten,
		  NULL);

	// Check if data readed successfully
	if (bytesWriten != dataSize) {
	
		MessageBoxW(NULL, L"Unable to write WAV!", L"Error!", MB_OK);
		return;

	}
	// Close file
	CloseHandle(hFile);

}

// Set WAV header
void wavFile::setHeader(const wavHeader &_header) {

	header = _header;

}

// Set WAV data
void wavFile::setData(const char* _data, const int &size) {

	delete [] data;

	dataSize	= size;
	data		= new char[size];

	memcpy(data, _data, size);

}

// Get WAV header
wavHeader* wavFile::getHeader() {

	return &header;

}

// Get WAV data
char* wavFile::getData() const {

	return data;

}

// Get file size
size_t wavFile::getSize() const {

	return dataSize;

}

// D-tor
wavFile::~wavFile() {

	// Clean up
	if (data) {
	
		delete [] data;
		data = NULL;

	}

	// Set size to zero
	dataSize = 0;

}

