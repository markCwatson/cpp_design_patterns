CXX=g++
EXT=.cpp
INC_DIR=PersonFactory
CXXFLAGS=-I$(INC_DIR)
OBJ=main.o
DEPS=$(INC_DIR)/PersonFactory.hpp
TARGET=factory

%.o: %${EXT} $(DEPS)
	$(CXX) $(CXXFLAGS) -c $< -o $@ 

all: $(OBJ)
	$(CXX) -g -Wall -o ${TARGET} $(OBJ)

clean: 
	rm -f ${TARGET} $(OBJ)