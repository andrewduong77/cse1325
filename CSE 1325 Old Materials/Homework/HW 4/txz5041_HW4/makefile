# Makefile for Video Rental
CXXFLAGS += --std=c++11

all: div main
rebuild: div clean main

debug: CXXFLAGS += -g
debug: rebuild

main: main.o video_store.o media.o 
	$(CXX) $(CXXFLAGS) -o med main.o video_store.o media.o 
main.o: main.cpp *.h
	$(CXX) $(CXXFLAGS) -c main.cpp
test_video_store: test_video_store.o video_store.o media.o
	$(CXX) $(CXXFLAGS) -o test_video_store test_video_store.o video_store.o media.o
test_video_store.o: test_video_store.cpp *.h
	$(CXX) $(CXXFLAGS) -c test_video_store.cpp
video_store.o: video_store.cpp *.h
	$(CXX) $(CXXFLAGS) -c video_store.cpp
test_media: test_media.o media.o 
	$(CXX) $(CXXFLAGS) -o test_media test_media.o media.o 
test_media.o: test_media.cpp *.h
	$(CXX) $(CXXFLAGS) -c -w test_media.cpp
media.o: media.cpp *.h
	$(CXX) $(CXXFLAGS) -c media.cpp
clean:
	-rm -f *.o med test_media test_video_store
div:
	@echo
	@echo 'X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-'
	@echo '-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X'
	@echo 'X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-'
	@echo '-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X'
	@echo
