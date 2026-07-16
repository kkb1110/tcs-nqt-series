#include <bits/stdc++.h>
using namespace std;
bool harshad(int n){
    int copy=n;
    int sum=0;
    while(n>0){
        sum+=n%10;
        n=n/10;
    }
    return !(copy%sum);
}

int main() {
    int num = 3728;  
    
    if (harshad(num)) {
        cout << "YES it is Harshad Number" << "\n";  
    }
    else {
        cout << "NO it is not a Harshad Number" << "\n";  
    }
}