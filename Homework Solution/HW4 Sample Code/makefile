# makefile for our date class
CXXFLAGS = -std=c++11

all: executable 

executable: main.o Date.o Transaction.o Transaction_List.o
	$(CXX) $(CXXFLAGS) main.o Date.o Transaction.o Transaction_List.o

main.o: main.cpp Date.h Transaction.h Transaction_List.h
	$(CXX) $(CXXFLAGS) -c main.cpp

Transaction_List.o : Transaction_List.cpp Transaction_List.h
	$(CXX) $(CXXFLAGS) -c Transaction_List.cpp

Transaction.o : Transaction.cpp Transaction.h
	$(CXX) $(CXXFLAGS) -c Transaction.cpp   
 
Date.o: Date.cpp Date.h
	$(CXX) $(CXXFLAGS) -c Date.cpp

clean: 
	rm -f *.o a.out

