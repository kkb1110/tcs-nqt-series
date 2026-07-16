#include<bits/stdc++.h>
using namespace std;

int toDec(int s){

    
    int base = 1;
    int ans = 0;


    while (s>0) {
        if (s%10 == 1) {
            ans += base;

        }
        s/=10;
        
        base *= 2;
    }
    return ans;
}

int main(){
    cout<<toDec(1101);
}