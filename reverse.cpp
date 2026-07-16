#include<iostream>
using namespace std;

int reverse(int n){
    int rev=0;
    while(n>0){
        int digit =n%10;
        rev=rev*10+digit;
        n=n/10;
    }
    return rev;
}

int main(){
    int a;
    cout<<"Enter a number"<<endl;
    cin>>a;
    
    cout<<"Number : "<<a<<"  ||  "<<" Reversed : "<<reverse(a)<<endl;
}