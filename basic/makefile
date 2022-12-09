CC = G++
CFLAGS = -g -Wall 
TARGET = main
DEPENDENCIES = lists.cpp recursion.cpp

.PHONY: all
all: $(TARGET)

$(TARGET): main.cpp $(DEPENDECNIES)
	$(CC) $(CFLAGS) $^ -o $@

%.o : %.cpp
	$(CC) $(CFLAGS) -c $^ -o $@

.PHONY: clean
	rm -f *.o $(TARGET)