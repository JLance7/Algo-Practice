CC = g++
CFLAGS = -g -Wall 
TARGET = main
OBJ = main.o common.o lists.o searching.o sorting.o graphs.o
HEADERS = lib.h node.h
DEPENDENCIES = $(HEADERS) $(OBJ)

.PHONY: make
make: $(TARGET)

$(TARGET): $(DEPENDENCIES)
	$(CC) $(CFLAGS) $^ -o $@

%.o : %.cpp 
	$(CC) $(CFLAGS) -c $^ -o $@

.PHONY: clean
clean:
	rm $(OBJ) $(TARGET)