CXX = g++
CFLAGS =  -g -Wall 


OBJ = main.o board.o test.o game.o
TARGET = main

$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) -o $@ $(OBJ) -lstdc++

all: $(TARGET)

clean:
	rm -f *.o
	rm -f $(TARGET)