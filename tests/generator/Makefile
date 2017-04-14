CXX		?= g++
OBJ		= WAVGenTest.o ../../WAVHeader.o ../../WAVIGen.o ../../generators/WAVSinGen.o ../../generators/WAVSawGen.o ../../generators/WAVSquareGen.o
LIBS		= -static-libgcc -m64 -s
BIN		= WAVGeneratorTest
CXXFLAGS	= -Os -m64 -std=c++11 -w -Wall -Wextra -pedantic -Werror -pipe
RM		= rm -f

.PHONY: all all-before all-after clean clean-custom

all: all-before $(BIN) all-after

clean: clean-custom
	${RM} $(OBJ) $(BIN)

$(BIN): $(OBJ)
	$(CXX) $(OBJ) -o $(BIN) $(LIBS)

WAVGenTest.o: WAVGenTest.cpp
	$(CXX) -c WAVGenTest.cpp -o WAVGenTest.o $(CXXFLAGS)

../../WAVHeader.o: ../../WAVHeader.cpp
	$(CXX) -c ../../WAVHeader.cpp -o ../../WAVHeader.o $(CXXFLAGS)

../../WAVIGen.o: ../../WAVIGen.cpp
	$(CXX) -c ../../WAVIGen.cpp -o ../../WAVIGen.o $(CXXFLAGS)

../../generators/WAVSinGen.o: ../../generators/WAVSinGen.cpp
	$(CXX) -c ../../generators/WAVSinGen.cpp -o ../../generators/WAVSinGen.o $(CXXFLAGS)

../../generators/WAVSawGen.o: ../../generators/WAVSawGen.cpp
	$(CXX) -c ../../generators/WAVSawGen.cpp -o ../../generators/WAVSawGen.o $(CXXFLAGS)

../../generators/WAVSquareGen.o: ../../generators/WAVSquareGen.cpp
	$(CXX) -c ../../generators/WAVSquareGen.cpp -o ../../generators/WAVSquareGen.o $(CXXFLAGS)

run:
	$(BIN)
