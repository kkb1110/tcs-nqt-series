#include<bits/stdc++.h>
using namespace std;


bool leapyear(int n){
    return ((n%4==0 && n%100!=0) || n%400==0);
}



int main(){
    float a,b,c;
    cout<<"Enter year"<<endl;
    cin>>a;
    if(leapyear(a))
        cout<<a<<" is leapyear "<<endl;
    else    
        cout<<a<<" is not leapyear "<<endl;


}