#include <bits/stdc++.h>  
using namespace std;

int main() {
    int n = 28; 

    // int binary[32] = {0}; 
    int digit;
    int i = 0;  

    string s="";
    while (n) {
        digit = n % 2; 
        s=to_string(digit)+s;               
        n /= 2;             
    }

    
    // for (int ind = i - 1; ind >= 0; ind--) {
    //     cout << binary[ind];  // Output binary digits
    // }

    cout << s;  
}
