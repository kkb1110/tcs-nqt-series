#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n){
    if(n<2)
    return false;
    if(n==2)
    return true;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0)
        return false;
    }
    return true;
}

void find(int n){
    
    for(int i=2;i<=n/2;i++){
        if(isPrime(i) && isPrime(n-i)){
            cout<<n<<" = "<<i<<" + "<<n-i<<endl;
            return;
        }
    }
    cout<<"Not possible !!\n";

}

int main(){

    cout<<"Enter n\n";
    int n;
    cin>>n;
    find(n);
}