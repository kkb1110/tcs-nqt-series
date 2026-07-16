#include <bits/stdc++.h>
using namespace std;

bool armstrong(int n)
{
    int dup = n;
    int dup2 = n;
    int power = 0;
    while (n > 0)
    {
        n = n / 10;
        power++;
    }
    int arm = 0;
    while (dup2 > 0)
    {
        int digit = dup2 % 10;
        int num=1;
        for (int i = 0; i < power; i++)
        {
            num *= digit;
        }
        arm = arm + num;
        dup2 = dup2 / 10;
    }
    // cout<<dup<<" "<<arm<<" "<<power<<endl;
    return arm == dup;
}

int main()
{
    int num = 153;
    if (armstrong(num))
        cout << num << " is a armstrong number\n";
    else
        cout << num << " is not a armstrong number\n";
}