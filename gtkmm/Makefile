SRC = $(shell ls *.cpp)
OBJ = $(SRC:.cpp=.o)
EXE = test.out

CC = gcc
CXX = g++
CFLAGS = -Wall -ggdb 
GTKMM_CFLAGS = --cflags 
GTKMM_LDFLAGS =  --libs
GTK_PKG_CONFIG_COMPILE = pkg-config gtkmm-2.4 $(GTKMM_CFLAGS) $(GTKMM_LDFLAGS)
GTK_PKG_CONFIG_LINK = pkg-config gtkmm-2.4 $(GTKMM_LDFLAGS)

.PHONY: all clean compile
all:main

compile: $(SRC)
	@echo "Compiling ..."; 
	@for go in $(SRC:.cpp=); \
	do \
	$(CXX) $(CFLAGS) -c $$go.cpp -o $$go.o `$(GTK_PKG_CONFIG_COMPILE)` ; \
	echo "compile $$go.cpp to $$go.o" ; \
	done ;\
	echo

main: compile
	@echo "Linking ..."; 
	$(CXX) $(CFLAGS) $(OBJ) -o $(EXE) `$(GTK_PKG_CONFIG_LINK)`

clean:
	rm $(EXE) $(OBJ)
