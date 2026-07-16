#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b){
    if(b==0)
    return a;
    return gcd(b,a%b);
}
int main() {
    int n,m;
    cout << "Enter 2 number to find gcd" << endl;
    cin >> n;
    cin >> m;
    int g=gcd(n,m);
    cout<<g<<endl;
    cout << "LCM of " <<n<<" & "<<m<<" : "<<(n/g)*m<< endl;
}