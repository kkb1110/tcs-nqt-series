#include <bits/stdc++.h>
using namespace std;

void reverseArray(vector<int>& arr) {
    int i=0;
    int j=arr.size()-1;
    while(i<j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }


}

int main(){

    vector<int> arr = {1, 2, 3, 4, 5};
    for(int i : arr){
        cout << " "<<i<<";";
    }
    cout<<endl;
    reverseArray(arr);
    for(int i : arr){
        cout << " "<<i<<";";
    }
    return 0;
}