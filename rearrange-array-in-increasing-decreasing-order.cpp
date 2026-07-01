#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        void rearrange(vector<int>& arr){
            int n= arr.size();
            sort(arr.begin(),arr.end());
            reverse(arr.begin()+(n/2),arr.end());
        }
};

int main(){
    vector<int> arr={2,6,1,5,3,4};
    for(int i:arr)
        cout<<i<<" ,";
    cout<<endl;
    Solution s;
    s.rearrange(arr);
    for(int i:arr)
        cout<<i<<" ,";
    return 0;
}