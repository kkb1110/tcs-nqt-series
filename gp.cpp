#include<bits/stdc++.h>
using namespace std;

float gp(float a,float r,int n){
    if(r==1)
        return a*n;
    return  a * (pow(r, n) - 1) / (r - 1);
    
}



int main(){
    int n;
    float a,r;
    cout<<"Enter the first digit"<<endl;
    cin>>a;
    cout<<"Enter the no of terms"<<endl;
    cin>>n;
    cout<<"Enter the ratio"<<endl;
    cin>>r;
    cout<<"Sum of the AP : "<<gp(a,r,n);
}