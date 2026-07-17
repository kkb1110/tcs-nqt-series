#include <bits/stdc++.h>
using namespace std;

bool ischar(char a, char b)
{
    return a == b;
}

unordered_map<char, int> frequency(string &s)
{
    unordered_map<char, int> count;
    for (char ch : s)
    {
        ch = tolower(ch);
        count[ch]++;
    }
    return count;
}

int main()
{
    string s1;
    string s2;
    cout << "Enter santence 1 : \n";
    getline(cin, s1);
    cout << "Enter santence 2 : \n";
    getline(cin, s2);

    unordered_map<char, int> count1 = frequency(s1);
    unordered_map<char, int> count2 = frequency(s2);
    int flag = 0;
    if (count1.size() != count2.size())
        flag = 1;
    else
    {
        for (auto x : count1)
        {
            auto it = count2.find(x.first);

            if (it == count2.end() || it->second != x.second)
            {
                flag = 1;
                break;
            }
        }
    }
    if (flag == 1)
        cout << "Not Anagram\n";
    else
        cout << "Anagram\n";

    // cout << num;
    return 0;
}