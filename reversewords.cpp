#include <bits/stdc++.h>
using namespace std;


string reversewords(string s)
{
    string word = "", reversed = "";
    for (char ch : s)
    {   if(ch=='.'){

        }
        else if (ch != ' ')
        {
            word += ch;
        }
        else
        {
            if (word.length() > 0)
            {
                reversed=word+" "+reversed;
            }

            word = "";
        }
    }

    if (word.length() > 0)
            {
                reversed=word+" "+reversed;
            }
    return reversed;
}

int main()
{
    string s;
    cout << "Enter a sentence : \n";
    getline(cin, s);
    string rev=reversewords(s);
    // if(word.length()>0)
        cout << rev;
    // else
    //     cout << -1;

}