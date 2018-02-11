#include <iostream> //for cout
#include <vector> //for vector
#include <fstream> //for ifstream and ofstream
#include <sstream> //for ostringstream
#include <cctype> //for isupper and isdigit

using namespace std;

int main (){

    //declaring variables
    vector<string> word_list; //for holding file data
    string secret_code; //for creating word
    int sum = 0; //for summing numbers
    
    //open and read file - Bullet 1 and 2
    ifstream ifs {"Bonus_Words.txt"}; //open file for reading
    string file_input; //for temporarily storing data
    while ( ifs >> file_input ) //while we can successfully read input
    {
        word_list.push_back(file_input); //add word from file to list
    }
    ifs.close();
    
    //read through list to print out to console - Bullet 3
    for (string temp : word_list) //for each string in the word list
    {
        cout << temp << endl;
    }
    
    //go through vector to check for uppercase letters and numbers
    // Bullet 4
    char ch; //for checking the characters of words
    for (string temp : word_list) //for each string in word list
    {
        istringstream oss {temp}; //to parse through the string
        while (oss >> ch) //while there are characters to read
        {
            if(isdigit(ch))//if current character is a digit - Bullet 6
            {
                oss.unget();//put our digit back
                int num; //int to hold number
                oss >> num; //put digit in the int
                sum += num; //add digit to the sum
            }
            else if (isupper(ch)) //if current character is upper case
            // Bullet 5
            {
                secret_code += ch; //add letter to secret word
            }
        }
    }
    
    //output secret code to screen - Bullet 7
    cout << secret_code << " " << sum << endl;
    
    //output to new file - Bullet 8
    ofstream ofs {"secret_code_Bonus.txt"};
    ofs << secret_code << " " << sum << endl;
    ofs.close();
    
    //append to words.txt - Bullet 9
    ofstream ofs2 {"Bonus_Words.txt", ios_base::app};
    ofs2 << secret_code << " " << sum << endl;
    ofs.close();
    
    return 0;
}
