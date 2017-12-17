CXX		?= g++
OBJ		= wavTestGenerator.o ../../wavHeader.o ../../wavIGen.o ../../generators/wavGenSin.o ../../generators/wavGenSaw.o ../../generators/wavGenSqr.o
LIBS		= -static-libgcc -m64 -s
BIN		= wavTestGenerator
CXXFLAGS	= -Os -m64 -std=c++11 -w -Wall -Wextra -pedantic -Werror -pipe
RM		= rm -f

.PHONY: all all-before all-after clean clean-custom

all: all-before $(BIN) all-after

clean: clean-custom
	${RM} $(OBJ) $(BIN)

$(BIN): $(OBJ)
	$(CXX) $(OBJ) -o $(BIN) $(LIBS)

wavTestGenerator.o: wavTestGenerator.cpp
	$(CXX) -c wavTestGenerator.cpp -o wavTestGenerator.o $(CXXFLAGS)

../../wavHeader.o: ../../wavHeader.cpp
	$(CXX) -c ../../wavHeader.cpp -o ../../wavHeader.o $(CXXFLAGS)

../../wavIGen.o: ../../wavIGen.cpp
	$(CXX) -c ../../wavIGen.cpp -o ../../wavIGen.o $(CXXFLAGS)

../../generators/wavGenSin.o: ../../generators/wavGenSin.cpp
	$(CXX) -c ../../generators/wavGenSin.cpp -o ../../generators/wavGenSin.o $(CXXFLAGS)

../../generators/wavGenSaw.o: ../../generators/wavGenSaw.cpp
	$(CXX) -c ../../generators/wavGenSaw.cpp -o ../../generators/wavGenSaw.o $(CXXFLAGS)

../../generators/wavGenSqr.o: ../../generators/wavGenSqr.cpp
	$(CXX) -c ../../generators/wavGenSqr.cpp -o ../../generators/wavGenSqr.o $(CXXFLAGS)

run:
	$(BIN)
