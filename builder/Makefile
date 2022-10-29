CC=g++
CFLAGS=-I.
OBJ=main.o CodeBuilder/CodeBuilder.o
DEPS=CodeBuilder/CodeBuilder.hpp
TARGET=builder

%.o: %.cpp $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

all: $(OBJ)
	$(CC) -g -Wall -o ${TARGET} $(OBJ)

clean: 
	rm -f ${TARGET} $(OBJ)