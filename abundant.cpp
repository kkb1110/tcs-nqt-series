#include<bits/stdc++.h>
using namespace std;

bool abundant(int n){
    int copy=n;
    int sum=0;
    for(int i=1;i<=sqrt(n);i++){
        if(n%i==0){
            if(i==n/i){
                sum+=i;
            }
            else{
                sum+=i;
                sum+=n/i;
            }
        }
    }
    sum-=n;
    // cout<<sum;
    return sum>copy;

}

int main(){
    cout<<abundant(18);
}