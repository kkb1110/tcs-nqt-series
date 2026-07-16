#include<bits/stdc++.h>
using namespace std;
int main(){
    int l,r;
    cout<<"Enter range : \n";
    cin>>l;
    cin>>r;
    cout<< "Sum : "<<(r*(r+1)/2 - (l-1)*(l)/2)<<endl;
}