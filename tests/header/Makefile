CPP      = g++
CC       = gcc
OBJ      = WAVHeaderTest.o ../../WAVHeader.o
LIBS     = -static-libgcc -m64 -s
BIN      = WAVHeaderTest
CXXFLAGS = -Os -m64 -std=gnu++11 -w -Wall -Wextra -pedantic -Werror -pipe
RM       = rm -f

.PHONY: all all-before all-after clean clean-custom

all: all-before $(BIN) all-after

clean: clean-custom
	${RM} $(OBJ) $(BIN)

$(BIN): $(OBJ)
	$(CPP) $(OBJ) -o $(BIN) $(LIBS)

WAVHeaderTest.o: WAVHeaderTest.cpp
	$(CPP) -c WAVHeaderTest.cpp -o WAVHeaderTest.o $(CXXFLAGS)

../../WAVHeader.o: ../../WAVHeader.cpp
	$(CPP) -c ../../WAVHeader.cpp -o ../../WAVHeader.o $(CXXFLAGS)

run:
	$(BIN)
