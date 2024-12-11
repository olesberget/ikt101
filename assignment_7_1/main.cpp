#include <iostream>
#include <string>
using namespace std;

int main() {
    string string1, string2;

    cout << "Enter the first string: ";getline(cin, string1);
    cout << "Enter the second string: ";getline(cin, string2);

    if (string1 == string2) {cout << "The strings are equal" << endl;}
    else {cout << "The strings are not equal" << endl;

        if (string1.find(string2) != string::npos) {cout << "Last string is substring of first string" << endl;}
        else if (string2.find(string1) != string::npos) {cout << "First string is substring of last string" << endl;}
        else {cout << "There are no substrings" << endl;}
    }
    return 0;
}