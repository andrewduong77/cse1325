#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    string line;
	char *fileInput = "Words.txt";
	char *fileOutput = "and7697_Secret_Code_1.txt";
	vector<string> words;
	int sum = 0;
	vector<char> uppercaseLetters;

    ifstream myFileInput(fileInput);
    if(myFileInput.is_open())
    {
        while (myFileInput >> line)
			words.push_back(line);
		for(int i = 0; i < words.size(); i++)
			cout << words[i] << endl; // Echo the words list
        if (myFileInput.bad())
            throw runtime_error ("bad");
    }
    else
        cout << "Unable to open file";

    // Scan for uppercase letters
    // Scan for integers
    for(int i = 0; i < words.size(); i++)
    {
        for(int j = 0; j < words[i].size(); j++)
        {
            char temp = words[i].at(j);
            if(temp >= 'A' && temp <= 'Z')
                uppercaseLetters.push_back(temp);
            if(temp >= '0' && temp <= '9')
                sum += temp - '0';
        }
    }

    ofstream myFileOutput(fileOutput);
    if(myFileOutput.is_open())
    {
        cout << "The secret code is: ";
        myFileOutput << "The secret code is: ";
        for(int i = 0; i < uppercaseLetters.size(); i++)
        {
            cout << uppercaseLetters[i];
            myFileOutput << uppercaseLetters[i];
        }
        cout << endl;
        myFileOutput << endl;
        cout << "The sum is: " << sum << endl;
        myFileOutput << "The sum is: " << sum << endl;
    }

    return 0;
}
