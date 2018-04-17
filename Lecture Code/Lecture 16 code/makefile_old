# makefile for our date class
CXXFLAGS = -std=c++11

all: executable 

executable: main.o Date.o Planner.o View.o Controller.o
	$(CXX) $(CXXFLAGS) main.o Date.o Planner.o View.o Controller.o

main.o: main.cpp Date.h Planner.h View.h Controller.h
	$(CXX) $(CXXFLAGS) -c main.cpp
	
Controller.o: Controller.cpp Controller.h
	$(CXX) $(CXXFLAGS) -c Controller.cpp
	
View.o: View.cpp View.h
	$(CXX) $(CXXFLAGS) -c View.cpp
	
Planner.o: Planner.cpp Planner.h Date.h
	$(CXX) $(CXXFLAGS) -c Planner.cpp
 
Date.o: Date.cpp Date.h
	$(CXX) $(CXXFLAGS) -c Date.cpp

clean: 
	rm -f *.o a.out

