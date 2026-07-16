#include <bits/stdc++.h>
using namespace std;

int factorial(int n){
    int ans=1;
    for(int i =2;i<=n;i++){
        ans*=i;
    }
    return ans;
}
int factorialR(int n){
    if(n<=1)
        return 1;
    else 
        return n* factorialR(n-1);
}

int main() {
    int n;
    cout << "Enter number to find factorial " << endl;
    cin >> n;
    cout << "Factorial of " <<n<<" : "<<factorial(n)<< endl;
    cout << "Factorial of " <<n<<" : "<<factorialR(n)<< endl;


    return 0;
}
