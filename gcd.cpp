#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b){
    while(a>0 && b>0){
        if (a>b)
            a=a%b;
        else if(b>a)
            b=b%a;
    }
    if(a==0)
        return b;
    return a;
}
int main() {
    int n,m;
    cout << "Enter 2 number to find gcd" << endl;
    cin >> n;
    cin >> m;
    cout << "GCD of " <<n<<" & "<<m<<" : "<<gcd(n,m)<< endl;
}