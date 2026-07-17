#include <iostream>
#include <string>
using namespace std;

string largestWord(string s) {
    string word = "", longest = "";

    for (char ch : s) {
        if (ch != ' ') {
            word += ch;
        } else {
            if (word.length() > longest.length())
                longest = word;
            word = "";
        }
    }

    
    if (word.length() > longest.length())
        longest = word;

    return longest;
}

int main() {
    string s;
    cout<<"Enter a sentence : \n";
    getline(cin, s);

    cout << largestWord(s);
}