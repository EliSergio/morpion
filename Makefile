CC = gcc
CFLAGS = -I$(IDIR)

IDIR = ./include/
SRCDIR = ./src/

SOURCES = $(SRCDIR)*.c

all : morpion run

morpion :
	$(CC) $(SOURCES) $(CFLAGS) -o $@

run :
	./morpion