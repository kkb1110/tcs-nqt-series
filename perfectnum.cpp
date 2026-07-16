#include <bits/stdc++.h>
using namespace std;

bool perfect(int n)
{
    int sum = 1;
    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
            sum += i;
    }
    return sum == n;
}

int main()
{
    int num = 6, num2 = 218;
    if (perfect(num))
    {
        cout << num << " is perfect number\n";
    }
    else
        cout << num << " is not a perfect number\n";
    if (perfect(num2))
    {
        cout << num2 << " is perfect number\n";
    }
    else
        cout << num2 << " is not a perfect number\n";
}