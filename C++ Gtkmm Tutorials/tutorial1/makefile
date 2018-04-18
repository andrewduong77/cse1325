CXXFLAGS = -std=c++11
GTKFLAGS = `/usr/bin/pkg-config gtkmm-3.0 --cflags --libs`

all: executable

executable: main.o
	$(CXX) $(CXXFLAGS) main.o $(GTKFLAGS)
	./a.out

main.o: main.cpp
	$(CXX) $(CXXFLAGS) -c main.cpp $(GTKFLAGS)

clean:
	rm -f *.o a.out

