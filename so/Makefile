CC = gcc
C++ = g++
LINK = g++
 
LIBS = -lz -lm -lpcre
#must add -fPIC option
CCFLAGS = $(COMPILER_FLAGS) -c -g -fPIC
C++FLAGS = $(COMPILER_FLAGS) -c -g -fPIC
 
TARGET=libmyc++.so
 
INCLUDES = -I./include
 
C++FILES = main.cpp
CFILES = 
 
OBJFILE = $(CFILES:.c=.o) $(C++FILES:.cpp=.o)
 
all:$(TARGET)
 
$(TARGET): $(OBJFILE)
	$(LINK) $^ $(LIBS) -Wall -fPIC -shared -o $@
 
%.o:%.c
	$(CC) -o $@ $(CCFLAGS) $< $(INCLUDES)
 
%.o:%.cpp
	$(C++) -o $@ $(C++FLAGS) $< $(INCLUDES)
 
install:
	tsxs -i -o $(TARGET)
 
clean:
	rm -rf $(TARGET)
	rm -rf $(OBJFILE)


