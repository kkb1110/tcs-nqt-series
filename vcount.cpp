#include <bits/stdc++.h>
using namespace std;

int *count(string str)
{
    // string str = s;
    int vowels = 0, consonants = 0, spaces = 0;
    for (int i = 0; i < str.length(); i++)
    {
        str[i] = tolower(str[i]);
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
            vowels++;
        else if (str[i] > 'a' && str[i] <= 'z')
            consonants++;
        else if (str[i] ==' ')
            spaces++;
    }
    int* arr = new int[3];

    arr[0] = vowels;
    arr[1] = consonants;
    arr[2] = spaces;
    return arr;
}
int main()
{
    string s = "fuck fuck fuck!";
    int * arr=count(s);
    cout<<"Vowels : "<<arr[0]<<endl;
    cout<<"Consonants : "<<arr[1]<<endl;
    cout<<"Spaces : "<<arr[2]<<endl;

}