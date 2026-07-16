#include<bits/stdc++.h>
using namespace std;

vector<int> primeFactors(int n){
    vector<int> factors;
    if(n%2==0){
        factors.push_back(2);
        while(n%2==0)
        n/=2;
    }
    for(int i=3;i*i<=n;i+=2){
        if(n%i==0){
            factors.push_back(i);
            while(n%i==0)
            n/=i;
        }
    }
    if(n>1)
        factors.push_back(n);
        return factors;
    
}

int main(){
    int n;
    cout << "Enter number to find prime factors " << endl;
    cin >> n;
    vector<int> arr=primeFactors(n);
    cout << "Prime factors of " <<n<<" : ";
    for(auto x : arr){
        cout<<x<<" ";
    }


}