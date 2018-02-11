# makefile for our date class
CXXFLAGS = -std=c++11
# CXX means we access the C++ compiler
# CXXFLAGS is the parameters for the C++ compiler. Mostly this is used to tell the compiler we are using c++11, but does have some other uses. We'll talk about that later in the class.

all: executable 
#the first rule is what happens when we type "make". We could also type "make all" to execute the all rule. We could also type "make executable" to just execute the executable rule. Etc, etc.

executable: main.o Date.o
#executalbe is dependent on Date.o and main.o. This command will not run if Date.o and main.o have not been updated since the last time this rule was run and the a.out file is already present. It will also call the Date.o and main.o rules
	$(CXX) $(CXXFLAGS) main.o Date.o
#Run the command g++ -std=c++11 main.o Date.o
main.o: main.cpp Date.h
#main.o is dependent on main.cpp and Date.h. This command will not run if main.cpp and Date.h have not been updated since the last time this was run.
	$(CXX) $(CXXFLAGS) -c main.cpp
#Run the command g++ -std=c++11 -c main.cpp
#The -c command is kind of the same as the -o command. 
#-o puts the output in a named object file instead of a.out. So the command "g++ -std=c++11 -o hello hello_world.cpp" would store the object file in hello.o instead of a.out. 
#-c also places the output in a named object file instead of a.out, but the name comes from a different place. It comes from the name of the file we are compiling. So the command "g++ -std=c++11 -c hello_world.cpp" would store the object file in hello_world.o. It just stores in an object file with the same name as the code we are compiling
#-c also does not do any linking. In the compilation process, there are different stages the computer goes through. The linking stage is not done. This topic is gone over in 2312. One theing you need to know about this that you can't compile multiple files at once when use -c because it can not link the two files together.  
Date.o: Date.cpp Date.h
	$(CXX) $(CXXFLAGS) -c Date.cpp
#This rule follows the same as the main.o rule
clean: 
	rm -f *.o a.out
#clean is a command that is commonly implemented in makefiles. clean rules delete all compiled code. In our case, it is all our .o files in our directorly and a.out
