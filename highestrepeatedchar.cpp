#include <bits/stdc++.h>
using namespace std;

int score(string s)
{
    unordered_map<char, int> count;
    int scr = 0;
    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];
        count[ch]++;
    }

    for (auto x : count)
    {
        if (x.second > 1)
            scr += x.second;
    }
    return scr;
}

string hwords(string s)
{
    string word = "", highest = "";
    int maxscore = 0;
    for (char ch : s)
    {
        if (ch != ' ')
        {
            word += ch;
        }
        else
        {
            if (word.length() > 0)
            {
                int scr = score(word);
                if (scr > maxscore)
                {
                    maxscore = scr;
                    highest = word;
                }
            }

            word = "";
        }
    }

    if (word.length() > 0)
    {
        int scr = score(word);
        if (scr > maxscore)
        {
            maxscore = scr;
            highest = word;
        }
    }
    if(maxscore==0)
        return "-1";
    return highest;
}

int main()
{
    string s;
    cout << "Enter a sentence : \n";
    getline(cin, s);
    string word=hwords(s);
    // if(word.length()>0)
        cout << word;
    // else
    //     cout << -1;

}