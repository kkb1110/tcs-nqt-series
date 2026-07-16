#include<iostream>
using namespace std;

int check(int n){
    return (n>>31);
}

int main(){
    int num =89;
    if(check(num))
        cout<<num<< " is negative \n";
    else 
        cout<<num<< " is positive \n";
}