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


#pragma once


#include <windows.h>


#include "wavHeader.hpp"


class wavFile {

	private:

		// Wave header
		wavHeader		header;

		// Sound data
		char*			data;
		// Sound data size
		size_t			dataSize;

		// WAV header
		WAVEHDR			wh;
		// WaveOut API handle
		HWAVEOUT		hWaveOut;


	public:

		// Default c-tor
		wavFile();

		// Play file
		void			play(bool);
		// Stop playing
		void			stop();

		// Save file on disk
		void			save(const wchar_t*) const;

		// Set WAV header
		void			setHeader(const wavHeader&);

		// Set WAV data
		void			setData(const char*, const int&);

		// Get WAV header
		wavHeader*		getHeader();
		// Get WAV data
		char*			getData() const;
		// Get file size
		size_t			getSize() const;

		// D-tor
		~wavFile();

};

