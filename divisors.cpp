#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
        void find(int n){
            vector<int> divisors;
            for(int i=1;i<=sqrt(n);i++){
                if(n%i==0){
                    divisors.push_back(i);
                    if(i!=n/i)
                        divisors.push_back(n/i);
                }
                    
            }
            cout<<"Divisors of "<<n << " : ";       

            for(auto x : divisors){
                cout<<x<<" ";
            }
                cout<<endl;


        }
};

int main(){
    int n;
    cout << "Enter number to find divisors " << endl;
    cin >> n;
    Solution s;
    s.find(n);
}