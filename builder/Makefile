CXX=g++
EXT=.cpp
INC_DIR=JsonBuilder
CXXFLAGS=-I$(INC_DIR)
OBJ=main.o $(INC_DIR)/JsonBuilder.o
DEPS=$(INC_DIR)/JsonBuilder.hpp
TARGET=builder

%.o: %${EXT} $(DEPS)
	$(CXX) $(CXXFLAGS) -c $< -o $@ 

all: $(OBJ)
	$(CXX) -g -Wall -o ${TARGET} $(OBJ)

clean: 
	rm -f ${TARGET} $(OBJ)