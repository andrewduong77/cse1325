#include <string>
#include <iostream>
#include "fuse.cpp"

using namespace std;

class Puzzle{

private:
    string solution;

    bool guesses[255];

public:
    Puzzle(string solution){}

    bool guess(char c){
        return 0;
    }

    string solve(string proposed_solution){
        string l = "e";

        return l;
    }

    string to_string(){
        string fire_cracker = "";

        return fire_cracker;
    }

    string get_solution(){
        string l = "e";

        return l;
    }
};
