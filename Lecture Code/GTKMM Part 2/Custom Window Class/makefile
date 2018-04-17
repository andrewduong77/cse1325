CXXFLAGS += -std=c++11
GTKFLAGS = `/usr/bin/pkg-config gtkmm-3.0 --cflags --libs`

ex: main.o hello.o
	$(CXX) $(CXXFLAGS) -o hello main.o hello.o $(GTKFLAGS)
main.o: main.cpp hello.h
	$(CXX) $(CXXFLAGS) -c main.cpp $(GTKFLAGS)
hello.o: hello.h hello.cpp
	$(CXX) $(CXXFLAGS) -c hello.cpp $(GTKFLAGS)
