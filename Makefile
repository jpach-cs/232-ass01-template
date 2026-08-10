CC = gcc
# Flaga -g jest kluczowa dla debugera (F5 w VS Code)
# Flaga -Isrc pozwala na łatwe dołączanie plików nagłówkowych
CFLAGS = -Wall -g -Isrc

# Nazwa docelowego pliku wykonywalnego
TARGET = bin/main.exe

# Pliki obiektowe lądują w folderze obj/
OBJS = obj/main.o obj/code.o

all: $(TARGET)

# Linkowanie programu do folderu bin/
$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(TARGET)

# Kompilacja main.c -> obj/main.o
obj/main.o: src/main.c src/code.c
	$(CC) $(CFLAGS) -c src/main.c -o obj/main.o

# Kompilacja code.c -> obj/code.o
obj/code.o: src/code.c
	$(CC) $(CFLAGS) -c src/code.c -o obj/code.o