CXX=g++
EXT=.cpp
INC_DIR=CodeBuilder
CXXFLAGS=-I$(INC_DIR)
OBJ=main.o $(INC_DIR)/CodeBuilder.o
DEPS=$(INC_DIR)/CodeBuilder.hpp
TARGET=builder

%.o: %${EXT} $(DEPS)
	$(CXX) $(CXXFLAGS) -c $< -o $@ 

all: $(OBJ)
	$(CXX) -g -Wall -o ${TARGET} $(OBJ)

clean: 
	rm -f ${TARGET} $(OBJ)