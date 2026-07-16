#include<bits/stdc++.h>
using namespace std;


template<typename x>
x greatest(x a,x b){
    return a>b?a:b;
    
}

template<typename x>
x greatest(x a,x b,x c){
    return a>b&&a>c?a:b>c?b:c;
    
}



int main(){
    float a,b,c;
    cout<<"Enter 2 numbers"<<endl;
    cin>>a;
    cin>>b;
    cout<<greatest(a,b)<<" is greatest "<<endl;

    cout<<"Enter 3 numbers"<<endl;
    cin>>a;
    cin>>b;
    cin>>c;
    cout<<greatest(a,b,c)<<" is greatest "<<endl;

}