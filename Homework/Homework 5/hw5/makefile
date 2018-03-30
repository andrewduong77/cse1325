# makefile for our date class
CXXFLAGS = -std=c++11

all: executable 

executable: and7697_main.o and7697_Date.o and7697_Transaction.o and7697_Transaction_List.o and7697_View.o and7697_Controller.o
	$(CXX) $(CXXFLAGS) and7697_main.o and7697_Date.o and7697_Transaction.o and7697_Transaction_List.o and7697_View.o and7697_Controller.o
	./a.out

and7697_main.o: and7697_main.cpp and7697_Date.h and7697_Transaction.h and7697_Transaction_List.h and7697_View.h and7697_Controller.h
	$(CXX) $(CXXFLAGS) -c and7697_main.cpp

and7697_Date.o: and7697_Date.cpp and7697_Date.h
	$(CXX) $(CXXFLAGS) -c and7697_Date.cpp

and7697_Transaction.o: and7697_Transaction.cpp and7697_Transaction.h
	$(CXX) $(CXXFLAGS) -c and7697_Transaction.cpp

and7697_Transaction_List.o: and7697_Transaction_List.cpp and7697_Transaction_List.h
	$(CXX) $(CXXFLAGS) -c and7697_Transaction_List.cpp

and7697_View.o: and7697_View.cpp and7697_View.h
	$(CXX) $(CXXFLAGS) -c and7697_View.cpp

and7697_Controller.o: and7697_Controller.cpp and7697_Controller.h
	$(CXX) $(CXXFLAGS) -c and7697_Controller.cpp

clean: 
	rm -f *.o a.out

