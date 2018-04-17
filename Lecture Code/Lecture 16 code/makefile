CXXFLAGS += -std=c++11
GTKFLAGS = `/usr/bin/pkg-config gtkmm-3.0 --cflags --libs`

ex: main.o dialog.o Date.o Planner.o View.o Controller.o
	$(CXX) $(CXXFLAGS) -o hello main.o dialog.o Controller.o View.o Planner.o Date.o $(GTKFLAGS)
main.o: main.cpp dialog.h
	$(CXX) $(CXXFLAGS) -c main.cpp $(GTKFLAGS)
dialog.o: dialog.h dialog.cpp
	$(CXX) $(CXXFLAGS) -c dialog.cpp $(GTKFLAGS)
	
Controller.o: Controller.cpp Controller.h
	$(CXX) $(CXXFLAGS) -c Controller.cpp $(GTKFLAGS)
	
View.o: View.cpp View.h dialog.h
	$(CXX) $(CXXFLAGS) -c View.cpp $(GTKFLAGS)
	
Planner.o: Planner.cpp Planner.h Date.h
	$(CXX) $(CXXFLAGS) -c Planner.cpp $(GTKFLAGS)
 
Date.o: Date.cpp Date.h
	$(CXX) $(CXXFLAGS) -c Date.cpp $(GTKFLAGS)
