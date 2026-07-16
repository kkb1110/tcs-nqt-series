#include<bits/stdc++.h>
using namespace std;



bool strong(int n){
    int copy=n,divisor=1;;
    while(n>0){
        divisor*=10;
        n/=10;
    }
    int x=(copy*copy)%divisor;
    return copy==x;
}

int main() {
    int n;
    cout << "Enter number to find if Automorphic number" << endl;
    cin >> n;
    if(strong(n))
        cout << "Automorphic" << endl;
    else
        cout << "Not Automorphic" << endl;
    
}