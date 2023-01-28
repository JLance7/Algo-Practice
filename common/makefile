CC = g++
TARGET = main
SRC_DIR = . src

HEADER_FILES = $(foreach D, $(HEADER_DIR), $(wildcard $(D)/*.hpp)) # header files with directory prefix
CPP_FILES = $(foreach D, $(SRC_DIR), $(wildcard $(D)/*.cpp)) 
OBJECTS = $(patsubst %.cpp, %.o, $(CPP_FILES)) # take all subdirectory cpp to .o
CFLAGS = -g -Wall 


.PHONY: all
all: $(TARGET)

$(TARGET): $(OBJECTS) $(HEADER_FILES)
	$(CC) $(CFLAGS) -I headers $^ -o $@ 

%.o : %.cpp 
	$(CC) $(CFLAGS) -c $^ -o $@

.PHONY: clean
clean:
	rm -rf *.o $(TARGET)