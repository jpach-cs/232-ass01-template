CC = gcc 
# The -g flag is essential for the debugger (F5 in VS Code) 
# The -Isrc flag allows easy inclusion of header files 
CFLAGS = -Wall -g -Isrc 
 
# Name of the target executable file 
TARGET = bin/main.exe 
 
# Object files are placed in the obj/ folder 
OBJS = obj/main.o obj/code.o 
 
all: $(TARGET) 
 
# Linking the program into the bin/ folder 
$(TARGET): $(OBJS) | bin 
	$(CC) $(CFLAGS) $(OBJS) -o $(TARGET) 
bin: 
	md bin 
 
# Compiling main.c -> obj/main.o 
obj/main.o: src/main.c | obj 
	$(CC) $(CFLAGS) -c src/main.c -o obj/main.o 
obj: 
	md obj 

# Compiling code.c -> obj/code.o 
obj/code.o: src/code.c 
	$(CC) $(CFLAGS) -c src/code.c -o obj/code.o