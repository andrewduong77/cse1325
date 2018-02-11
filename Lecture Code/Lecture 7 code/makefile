# makefile for our date class
CXXFLAGS = -std=c++11

all: executable 

executable: main.o Date.o Planner.o
	$(CXX) $(CXXFLAGS) main.o Date.o Planner.o

main.o: main.cpp Date.h Planner.h
	$(CXX) $(CXXFLAGS) -c main.cpp
	
Planner.o: Planner.cpp Planner.h Date.h
	$(CXX) $(CXXFLAGS) -c Planner.cpp
 
Date.o: Date.cpp Date.h
	$(CXX) $(CXXFLAGS) -c Date.cpp

clean: 
	rm -f *.o a.out

