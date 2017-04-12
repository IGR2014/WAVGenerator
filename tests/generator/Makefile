# Project: WAVGeneratorTest
# Makefile created by Dev-C++ 5.11

CPP      = g++.exe
CC       = gcc.exe
WINDRES  = windres.exe
OBJ      = WAVGeneratorTest.o ../../WAVHeader.o ../../WAVIGenerator.o ../../generators/WAVSinGenerator.o ../../generators/WAVSawGenerator.o ../../generators/WAVSquareGenerator.o
LINKOBJ  = WAVGeneratorTest.o ../../WAVHeader.o ../../WAVIGenerator.o ../../generators/WAVSinGenerator.o ../../generators/WAVSawGenerator.o ../../generators/WAVSquareGenerator.o
LIBS     = -L"C:/TDM-GCC-64/lib" -L"C:/TDM-GCC-64/x86_64-w64-mingw32/lib" -static-libgcc -m64 -s
INCS     = -I"C:/TDM-GCC-64/include" -I"C:/TDM-GCC-64/x86_64-w64-mingw32/include" -I"C:/TDM-GCC-64/lib/gcc/x86_64-w64-mingw32/5.1.0/include"
CXXINCS  = -I"C:/TDM-GCC-64/include" -I"C:/TDM-GCC-64/x86_64-w64-mingw32/include" -I"C:/TDM-GCC-64/lib/gcc/x86_64-w64-mingw32/5.1.0/include" -I"C:/TDM-GCC-64/lib/gcc/x86_64-w64-mingw32/5.1.0/include/c++"
BIN      = WAVGeneratorTest.exe
CXXFLAGS = $(CXXINCS) -Os -m64 -std=gnu++11 -w -Wall -Wextra -pedantic -Werror -pipe
CFLAGS   = $(INCS) -Os -m64 -std=gnu++11 -w -Wall -Wextra -pedantic -Werror -pipe
RM       = rm.exe -f

.PHONY: all all-before all-after clean clean-custom

all: all-before $(BIN) all-after

clean: clean-custom
	${RM} $(OBJ) $(BIN)

$(BIN): $(OBJ)
	$(CPP) $(LINKOBJ) -o $(BIN) $(LIBS)

WAVGeneratorTest.o: WAVGeneratorTest.cpp
	$(CPP) -c WAVGeneratorTest.cpp -o WAVGeneratorTest.o $(CXXFLAGS)

../../WAVHeader.o: ../../WAVHeader.cpp
	$(CPP) -c ../../WAVHeader.cpp -o ../../WAVHeader.o $(CXXFLAGS)

../../WAVIGenerator.o: ../../WAVIGenerator.cpp
	$(CPP) -c ../../WAVIGenerator.cpp -o ../../WAVIGenerator.o $(CXXFLAGS)

../../generators/WAVSinGenerator.o: ../../generators/WAVSinGenerator.cpp
	$(CPP) -c ../../generators/WAVSinGenerator.cpp -o ../../generators/WAVSinGenerator.o $(CXXFLAGS)

../../generators/WAVSawGenerator.o: ../../generators/WAVSawGenerator.cpp
	$(CPP) -c ../../generators/WAVSawGenerator.cpp -o ../../generators/WAVSawGenerator.o $(CXXFLAGS)

../../generators/WAVSquareGenerator.o: ../../generators/WAVSquareGenerator.cpp
	$(CPP) -c ../../generators/WAVSquareGenerator.cpp -o ../../generators/WAVSquareGenerator.o $(CXXFLAGS)

run:
	$(BIN)
