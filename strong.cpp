#include<bits/stdc++.h>
using namespace std;

int factorial(int n){
    if(n<=1)
        return 1;
    else 
        return n* factorial(n-1);
}

bool strong(int n){
    int copy=n,sum=0;
    while(n>0){
        int digit=n%10;
        sum=sum+factorial(digit);
        n/=10;
    }
    return sum==copy;
}

int main() {
    int n;
    cout << "Enter number to find if strong number" << endl;
    cin >> n;
    if(strong(n))
        cout << "Strong" << endl;
    else
        cout << "Not Strong" << endl;
    
}