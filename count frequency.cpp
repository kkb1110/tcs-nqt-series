#include <bits/stdc++.h>
using namespace std;

void countFrequency(vector<int>& arr){
    int n=arr.size()-1;
    unordered_map<int,int> map;
    for(int i=0;i<n;i++){
        map[arr[i]]++;
    }
    cout<<"elem : frequency"<<endl;
    for(auto i : map){
        cout<<i.first<<"   : "<<i.second<<endl;
    }

}

int main(){
    vector<int> arr={1,2,1,33,2,2,6,6,6,6,9,7,1,8,9,12,12,5};
    countFrequency(arr);
    return 0;
}