CXX		?= g++
OBJ		= wavTestHeader.o ../../wavHeader.o
LIBS		= -static-libgcc -m64 -s
BIN		= wavTestHeader
CXXFLAGS	= -Os -m64 -std=c++11 -w -Wall -Wextra -pedantic -Werror -pipe
RM		= rm -f

.PHONY: all all-before all-after clean clean-custom

all:  all-before $(BIN) all-after

clean: clean-custom
	${RM} $(OBJ) $(BIN)

$(BIN): $(OBJ)
	$(CXX) $(OBJ) -o $(BIN) $(LIBS)

wavTestHeader.o: wavTestHeader.cpp
	$(CXX) -c wavTestHeader.cpp -o wavTestHeader.o $(CXXFLAGS)

../../wavHeader.o: ../../wavHeader.cpp
	$(CXX) -c ../../wavHeader.cpp -o ../../wavHeader.o $(CXXFLAGS)

run:
	$(BIN)
