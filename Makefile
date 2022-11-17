CC=gcc
CFLAGS= -Wall -Wextra -Werror -pedantic -std=gnu89
CFILES=$(wildcard *.c)
BIN=out

all:$(CFILES)
	$(CC) $(CFLAGS) $(CFILES) -o $(BIN)
