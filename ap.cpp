#include<iostream>
using namespace std;


int sum(int a,int n,int d){
    return ((n/2.0) * ((2*a) + ((n-1)*d)));
}

int main(){
    // int n=10;
    int n,a,d;
    cout<<"Enter the first digit"<<endl;
    cin>>a;
    cout<<"Enter the no of terms"<<endl;
    cin>>n;
    cout<<"Enter the difference"<<endl;
    cin>>d;
    cout<<"Sum of the AP : "<<sum(a,n,d);
}