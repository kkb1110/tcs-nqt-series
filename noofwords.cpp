#include <iostream>
#include <string>
using namespace std;

int words(string s) {
    string word = "";
    int count=0;
    // if(s.length()>0)
    //     count=1

    for (char ch : s) {
        if (ch != ' ') {
            word+=ch;
        } else {
            if (word.length() > 0)
                count++;
            word = "";
        }
    }

    
    if (word.length() > 0)
         count++;

    return count;
}

int main() {
    string s;
    cout<<"Enter a sentence : \n";
    getline(cin, s);

    cout << words(s);
}