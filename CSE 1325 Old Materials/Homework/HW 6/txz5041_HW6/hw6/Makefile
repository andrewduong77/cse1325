# ~~~~~KING TAUSIF~~~~~
CXXFLAGS += --std=c++11

all: div main
rebuild: div clean main

debug: CXXFLAGS += -g
debug: rebuild

main: main.o main_window.o controller.o view.o video_store.o media.o patron.o dialogs.o
	$(CXX) $(CXXFLAGS) -o vts main.o main_window.o controller.o view.o video_store.o media.o patron.o dialogs.o `/usr/bin/pkg-config gtkmm-3.0 --cflags --libs`
main.o: main.cpp *.h
	$(CXX) $(CXXFLAGS) -c main.cpp `/usr/bin/pkg-config gtkmm-3.0 --cflags --libs`
controller.o: controller.cpp *.h
	$(CXX) $(CXXFLAGS) -c controller.cpp `/usr/bin/pkg-config gtkmm-3.0 --cflags --libs`
main_window.o: main_window.cpp *.h
	$(CXX) $(CXXFLAGS) -c main_window.cpp `/usr/bin/pkg-config gtkmm-3.0 --cflags --libs`
view.o: view.cpp dialogs.o *.h
	$(CXX) $(CXXFLAGS) -c view.cpp `/usr/bin/pkg-config gtkmm-3.0 --cflags --libs`
test_video_store: test_video_store.o video_store.o patron.o media.o view.o
	$(CXX) $(CXXFLAGS) -o test_video_store test_video_store.cpp video_store.o patron.o media.o
test_video_store.o: test_video_store.cpp *.h
	$(CXX) $(CXXFLAGS) -c test_video_store.cpp
video_store.o: video_store.cpp *.h
	$(CXX) $(CXXFLAGS) -c video_store.cpp
test_media: test_media.o media.o patron.o
	$(CXX) $(CXXFLAGS) -o test_media test_media.o media.o patron.o
test_media.o: test_media.cpp *.h
	$(CXX) $(CXXFLAGS) -c -w test_media.cpp
media.o: media.cpp *.h
	$(CXX) $(CXXFLAGS) -c media.cpp
test_patron: test_patron.o patron.o
	$(CXX) $(CXXFLAGS) -o test_patron test_patron.o patron.o
test_patron.o: test_patron.cpp *.h
	$(CXX) $(CXXFLAGS) -c -w test_patron.cpp
patron.o: patron.cpp *.h
	$(CXX) $(CXXFLAGS) -c -w patron.cpp
dialogs.o: dialogs.cpp *.h
	$(CXX) $(CXXFLAGS) -c dialogs.cpp `/usr/bin/pkg-config gtkmm-3.0 --cflags --libs`
clean:
	-rm -f *.o vts test_age test_genre test_media_type test_media test_patron test_video_store 
div:
	@echo
	@echo 'X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-'
	@echo '-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X'
	@echo 'X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-'
	@echo '-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X'
	@echo
