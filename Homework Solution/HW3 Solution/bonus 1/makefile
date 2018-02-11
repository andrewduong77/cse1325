#Makefile for HW3 Spring 2018
CXXFLAGS = -std=c++11

main_executable: main.o Transaction_List.o
	$(CXX) $(CXXFLAGS) -o main_executable main.o Transaction_List.o
main.o: main.cpp Transaction_List.h
	$(CXX) $(CXXFLAGS) -c main.cpp
Transaction_List.o: Transaction_List.cpp Transaction_List.h
	$(CXX) $(CXXFLAGS) -c Transaction_List.cpp
clean:
	rm -f *.o a.out test_executable main_executable
