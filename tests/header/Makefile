# Project: WAVHeaderTest
# Makefile created by Dev-C++ 5.11

CPP      = g++.exe
CC       = gcc.exe
WINDRES  = windres.exe
OBJ      = WAVHeaderTest.o ../../WAVHeader.o
LINKOBJ  = WAVHeaderTest.o ../../WAVHeader.o
LIBS     = -L"C:/TDM-GCC-64/lib" -L"C:/TDM-GCC-64/x86_64-w64-mingw32/lib" -static-libgcc -m64 -s
INCS     = -I"C:/TDM-GCC-64/include" -I"C:/TDM-GCC-64/x86_64-w64-mingw32/include" -I"C:/TDM-GCC-64/lib/gcc/x86_64-w64-mingw32/5.1.0/include"
CXXINCS  = -I"C:/TDM-GCC-64/include" -I"C:/TDM-GCC-64/x86_64-w64-mingw32/include" -I"C:/TDM-GCC-64/lib/gcc/x86_64-w64-mingw32/5.1.0/include" -I"C:/TDM-GCC-64/lib/gcc/x86_64-w64-mingw32/5.1.0/include/c++"
BIN      = WAVHeaderTest.exe
CXXFLAGS = $(CXXINCS) -Os -m64 -std=gnu++11 -w -Wall -Wextra -pedantic -Werror -pipe
CFLAGS   = $(INCS) -Os -m64 -std=gnu++11 -w -Wall -Wextra -pedantic -Werror -pipe
RM       = rm.exe -f

.PHONY: all all-before all-after clean clean-custom

all: all-before $(BIN) all-after

clean: clean-custom
	${RM} $(OBJ) $(BIN)

$(BIN): $(OBJ)
	$(CPP) $(LINKOBJ) -o $(BIN) $(LIBS)

WAVHeaderTest.o: WAVHeaderTest.cpp
	$(CPP) -c WAVHeaderTest.cpp -o WAVHeaderTest.o $(CXXFLAGS)

../../WAVHeader.o: ../../WAVHeader.cpp
	$(CPP) -c ../../WAVHeader.cpp -o ../../WAVHeader.o $(CXXFLAGS)

run:
	$(BIN)
