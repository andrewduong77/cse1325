# Makefile for Boom
CXXFLAGS += --std=c++11

all: main

debug: CXXFLAGS += -g
debug: main

rebuild: clean txz5041_main

main: txz5041_main.o txz5041_puzzle.o txz5041_fuse.o
	$(CXX) $(CXXFLAGS) -o boom txz5041_main.o txz5041_puzzle.o txz5041_fuse.o
main.o: txz5041_main.cpp txz5041_puzzle.h txz5041_fuse.h
	$(CXX) $(CXXFLAGS) -c txz5041_main.cpp
puzzle.o: txz5041_puzzle.cpp txz5041_puzzle.h
	$(CXX) $(CXXFLAGS) -c txz5041_puzzle.cpp
fuse.o: txz5041_fuse.cpp txz5041_fuse.h
	$(CXX) $(CXXFLAGS) -c txz5041_fuse.cpp
clean:
	-rm -f *.o *~ boom
