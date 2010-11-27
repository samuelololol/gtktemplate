SRC = $(shell ls *.c)
OBJ = $(SRC:.c=.o)
EXE = test.out

CC = gcc
CFLAGS = -Wall -ggdb 
GLADE_CFLAGS = --cflags gtk+-2.0 #vte 
GLADE_LDFLAGS =  --libs gtk+-2.0 #vte #gmodule-export-2.0 
GTK_PKG_CONFIG_COMPILE = pkg-config $(GLADE_CFLAGS) $(GLADE_LDFLAGS)
GTK_PKG_CONFIG_LINK = pkg-config $(GLADE_CFLAGS) $(GLADE_LDFLAGS)

.PHONY: all clean compile
all:main

compile: $(SRC)
	@for go in $(SRC:.c=); \
	do \
	$(CC) $(CFLAGS) -c $$go.c -o $$go.o `$(GTK_PKG_CONFIG_COMPILE)` ; \
	done

main: compile
	$(CC) $(CFLAGS) $(OBJ) -o $(EXE) `$(GTK_PKG_CONFIG_LINK)` -export-dynamic 

clean:
	rm $(EXE) $(OBJ)
