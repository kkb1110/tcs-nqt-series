#include<iostream>
using namespace std;

int mindigit(int n){
    int mindigit=11,maxdigit=0;
    
    while(n>0){
        int digit =n%10;
        if(mindigit>digit)
            mindigit=digit;
        if(maxdigit<digit)
            maxdigit=digit;
        n=n/10;
    }
    return mindigit;
}

int maxdigit(int n){
    int maxdigit=0;
    
    while(n>0){
        int digit =n%10;
        if(maxdigit<digit)
            maxdigit=digit;
        n=n/10;
    }
    return maxdigit;
}

int main(){
    int a;
    cout<<"Enter a number"<<endl;
    cin>>a;
    
    cout<<"Minimum digit in "<<a<<" is "<<mindigit(a)<<"\nMaximum digit in "<<a<<" is "<<maxdigit(a)<<endl;
}