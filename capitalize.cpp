#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string s;
    getline(cin, s);

    int n = s.length();

    for (int i = 0; i < n; i++) {
        // First character of a word
        if (i == 0 || s[i - 1] == ' ')
            s[i] = toupper(s[i]);

        // Last character of a word
        if (i == n - 1 || s[i + 1] == ' ')
            s[i] = toupper(s[i]);
    }

    cout << s;
    return 0;
}