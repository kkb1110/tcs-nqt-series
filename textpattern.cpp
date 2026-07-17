#include <bits/stdc++.h>
using namespace std;

bool match(string text, string pattern, int i, int j)
{
    // Both strings finished
    if (i == text.length() && j == pattern.length())
        return true;

    // Pattern finished but text remains
    if (j == pattern.length())
        return false;

    // Text finished
    if (i == text.length())
    {
        // Remaining pattern must be all '*'
        while (j < pattern.length())
        {
            if (pattern[j] != '*')
                return false;
            j++;
        }
        return true;
    }

    // Characters match or '?'
    if (text[i] == pattern[j] || pattern[j] == '?')
        return match(text, pattern, i + 1, j + 1);

    // '*'
    if (pattern[j] == '*')
    {
        return match(text, pattern, i, j + 1) ||   // '*' matches nothing
               match(text, pattern, i + 1, j);     // '*' matches one character
    }

    return false;
}

int main()
{
    string text, pattern;

    cin >> text >> pattern;

    if (match(text, pattern, 0, 0))
        cout << "Match";
    else
        cout << "Not Match";
}