CXXFLAGS = -std=c++11
GTKFLAGS = `/usr/bin/pkg-config gtkmm-3.0 --cflags --libs`

all: executable

executable: main.o mywindow.o
	$(CXX) $(CXXFLAGS) main.o mywindow.o $(GTKFLAGS)
	./a.out

main.o: main.cpp
	$(CXX) $(CXXFLAGS) -c main.cpp $(GTKFLAGS)

mywindow.o: mywindow.cpp mywindow.h
	$(CXX) $(CXXFLAGS) -c mywindow.cpp $(GTKFLAGS)

clean:
	rm -f *.o a.out

