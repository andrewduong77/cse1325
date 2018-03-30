# makefile for our date class
CXXFLAGS = -std=c++11

all: executable 

executable: and7697_main.o and7697_Media.o and7697_Bundle.o and7697_Book.o and7697_Movie.o and7697_Video_Game.o and7697_Music_Album.o and7697_Television_Show_Season.o and7697_Librarian.o and7697_Customer.o
	$(CXX) $(CXXFLAGS) and7697_main.o and7697_Media.o and7697_Bundle.o and7697_Book.o and7697_Movie.o and7697_Video_Game.o and7697_Music_Album.o and7697_Television_Show_Season.o and7697_Librarian.o and7697_Customer.o
	./a.out

and7697_main.o: and7697_main.cpp and7697_Media.h and7697_Bundle.h and7697_Book.h and7697_Movie.h and7697_Video_Game.h and7697_Music_Album.h and7697_Television_Show_Season.h and7697_Librarian.h and7697_Customer.h
	$(CXX) $(CXXFLAGS) -c and7697_main.cpp

and7697_Media.o: and7697_Media.cpp and7697_Media.h
	$(CXX) $(CXXFLAGS) -c and7697_Media.cpp

and7697_Bundle.o: and7697_Bundle.cpp and7697_Bundle.h
	$(CXX) $(CXXFLAGS) -c and7697_Bundle.cpp

and7697_Book.o: and7697_Book.cpp and7697_Book.h
	$(CXX) $(CXXFLAGS) -c and7697_Book.cpp

and7697_Movie.o: and7697_Movie.cpp and7697_Movie.h
	$(CXX) $(CXXFLAGS) -c and7697_Movie.cpp

and7697_Video_Game.o: and7697_Video_Game.cpp and7697_Video_Game.h
	$(CXX) $(CXXFLAGS) -c and7697_Video_Game.cpp

and7697_Music_Album.o: and7697_Music_Album.cpp and7697_Music_Album.h
	$(CXX) $(CXXFLAGS) -c and7697_Music_Album.cpp

and7697_Television_Show_Season.o: and7697_Television_Show_Season.cpp and7697_Television_Show_Season.h
	$(CXX) $(CXXFLAGS) -c and7697_Television_Show_Season.cpp

and7697_Librarian.o: and7697_Librarian.cpp and7697_Librarian.h
	$(CXX) $(CXXFLAGS) -c and7697_Librarian.cpp

and7697_Customer.o: and7697_Customer.cpp and7697_Customer.h
	$(CXX) $(CXXFLAGS) -c and7697_Customer.cpp

clean: 
	rm -f *.o a.out

