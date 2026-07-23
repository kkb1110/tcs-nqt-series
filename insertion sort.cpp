#include<bits/stdc++.h>
using namespace std;

void insertionsort(vector<int>& arr){
    int n=arr.size();

    for(int i=1;i<n;i++){
        int newElem=arr[i];
        ;
        for( int j=i-1;j>=0 && arr[j]>newElem;j--){
            arr[j+1]=arr[j];
            
        }
        arr[j+1]=newElem;
        
    }
}

int main()
{
    vector<int> arr = {1, 7, 3, 6, 3, 9, 12, 5};
    cout << "Original array : ";
    for (auto x : arr)
        cout << x << " ";
    cout << endl;
    insertionsort(arr);
    cout << "Sorted array : ";
    for (auto x : arr)
        cout << x << " ";
}