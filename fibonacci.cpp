#include <bits/stdc++.h>
using namespace std;

int fibonacci(int n)
{
    if (n < 2)
        return n;
    return fibonacci(n-1)+fibonacci(n-2);
}

int main()
{
    int n;
    cout << "Enter value of n " << endl;
    cin >> n;
    cout << "--------------------------------------------------------------------------------\n";
    int last = 1;
    int slast = 0;
    if (n >= 1)
        cout << 0 << endl;
    if (n >= 2)
        cout << 1 << endl;

    for (int i = 2; i < n; i++)
    {
        int temp = slast;
        slast = last;
        last = last + temp;
        cout << last << endl;
    }
    cout << "--------------------------------------------------------------------------------\n";

    for (int i = 0; i < n; i++)
    {
        
        cout << fibonacci(i)<< endl;
    }

    return 0;
}