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
int invert(int n){
    int rev=0;
    while(n>0){
        int digit =n%10;
        if(digit==0)
            digit=1;
        rev=rev*10+digit;
        n=n/10;
    }
    rev=reverse(rev);
}

int main(){
    int a;
    cout<<"Enter a number"<<endl;
    cin>>a;
    
    cout<<"Number : "<<a<<"  ||  "<<" Inverted(0->1) : "<<invert(a)<<endl;
}