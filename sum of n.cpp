#include<iostream>
using namespace std;
  
int sum(int n){
    return ((n*(n+1))/2);
}
int sumRecursive(int n){
    if(n==1)
    return 1;
    return n+sumRecursive(n-1);
}

int main(){
    int n=10;
    cout<<sum(n)<<"  :  "<<sumRecursive(n);
}