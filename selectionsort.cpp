#include<bits/stdc++.h>
using namespace std;

void selectionsort(vector<int>& arr){
    int n=arr.size();
    for(int i=0;i<n-1;i++){
        int minIdx=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[minIdx]){
                minIdx=j;
            }
        }
        if (minIdx != i)
            swap(arr[i],arr[minIdx]);
    }
}

int main()
{
    vector<int> arr = {1, 7, 3, 6, 3, 9, 12, 5};
    cout << "Original array : ";
    for (auto x : arr)
        cout << x << " ";
    cout << endl;
    selectionsort(arr);
    cout << "Sorted array : ";
    for (auto x : arr)
        cout << x << " ";
}