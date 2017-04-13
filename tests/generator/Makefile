CXX		?= g++
OBJ		= WAVGeneratorTest.o ../../WAVHeader.o ../../WAVIGenerator.o ../../generators/WAVSinGenerator.o ../../generators/WAVSawGenerator.o ../../generators/WAVSquareGenerator.o
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

WAVGeneratorTest.o: WAVGeneratorTest.cpp
	$(CXX) -c WAVGeneratorTest.cpp -o WAVGeneratorTest.o $(CXXFLAGS)

../../WAVHeader.o: ../../WAVHeader.cpp
	$(CXX) -c ../../WAVHeader.cpp -o ../../WAVHeader.o $(CXXFLAGS)

../../WAVIGenerator.o: ../../WAVIGenerator.cpp
	$(CXX) -c ../../WAVIGenerator.cpp -o ../../WAVIGenerator.o $(CXXFLAGS)

../../generators/WAVSinGenerator.o: ../../generators/WAVSinGenerator.cpp
	$(CXX) -c ../../generators/WAVSinGenerator.cpp -o ../../generators/WAVSinGenerator.o $(CXXFLAGS)

../../generators/WAVSawGenerator.o: ../../generators/WAVSawGenerator.cpp
	$(CXX) -c ../../generators/WAVSawGenerator.cpp -o ../../generators/WAVSawGenerator.o $(CXXFLAGS)

../../generators/WAVSquareGenerator.o: ../../generators/WAVSquareGenerator.cpp
	$(CXX) -c ../../generators/WAVSquareGenerator.cpp -o ../../generators/WAVSquareGenerator.o $(CXXFLAGS)

run:
	$(BIN)
