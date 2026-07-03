#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
        float getMedian(vector<int>& arr){
            sort(arr.begin(),arr.end());
            int n=arr.size();
            if(n%2==0){
                int n1=arr[n/2 -1];
                int n2=arr[n/2];
                return float(n1+n2) /2;
            }
            else return arr[n/2];
        }
};

int main(){
    vector<int> arr={8, 3, 11, 2, 6, 9};
    Solution s;
    cout<<"Median : "<<s.getMedian(arr);
    return 0;
}