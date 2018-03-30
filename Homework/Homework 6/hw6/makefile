# makefile for our date class
CXXFLAGS = -std=c++11

all: executable 

executable: and7697_main.o and7697_Robot.o and7697_Mobile_Robot.o and7697_Arm_Robot.o and7697_Extendable_Arm.o and7697_Powered_Arm.o
	$(CXX) $(CXXFLAGS) and7697_main.o and7697_Robot.o and7697_Mobile_Robot.o and7697_Arm_Robot.o and7697_Extendable_Arm.o and7697_Powered_Arm.o
	./a.out

and7697_main.o: and7697_main.cpp and7697_Robot.h and7697_Mobile_Robot.h and7697_Arm_Robot.h and7697_Extendable_Arm.h and7697_Powered_Arm.h
	$(CXX) $(CXXFLAGS) -c and7697_main.cpp

and7697_Robot.o: and7697_Robot.cpp and7697_Robot.h
	$(CXX) $(CXXFLAGS) -c and7697_Robot.cpp

and7697_Mobile_Robot.o: and7697_Mobile_Robot.cpp and7697_Mobile_Robot.h
	$(CXX) $(CXXFLAGS) -c and7697_Mobile_Robot.cpp

and7697_Arm_Robot.o: and7697_Arm_Robot.cpp and7697_Arm_Robot.h
	$(CXX) $(CXXFLAGS) -c and7697_Arm_Robot.cpp

and7697_Extendable_Arm.o: and7697_Extendable_Arm.cpp and7697_Extendable_Arm.h
	$(CXX) $(CXXFLAGS) -c and7697_Extendable_Arm.cpp

and7697_Powered_Arm.o: and7697_Powered_Arm.cpp and7697_Powered_Arm.h
	$(CXX) $(CXXFLAGS) -c and7697_Powered_Arm.cpp

clean: 
	rm -f *.o a.out

