#include <bits/stdc++.h>
using namespace std;

bool prime(int n)
{
    if (n == 2)
        return false;

    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main()
{
    // int num = 21;
    int start = 5, end = 77;
    for (int i = start; i <= end; i++)
    {
        if (prime(i))
        {
            cout << i << " is prime \n";
        }
    }
    
}
