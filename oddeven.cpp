#include <iostream>
using namespace std;

int check(int n){
    return !(n & 1);
}

int main(){
    int num1=5,num2=8;
    if(check(num1))
        cout<<num1<< " is even \n";
    else
        cout<<num1<< " is odd \n";

    if(check(num2))
        cout<<num2<< " is even \n";
    else
        cout<<num2<< " is odd \n";

}