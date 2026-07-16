#include<bits/stdc++.h>
using namespace std;

int partition(vector<int>& arr,int low ,int high){
    int pivot=arr[high];
    int i=low-1;
    for(int j=low;j<high;j++){
        if(arr[j]<=pivot){
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[high]);
    return i+1;
}
void quickSort(vector<int>& arr,int low,int high){
    if(low<high){
        int i=partition(arr,low,high);
        quickSort(arr,low,i-1);
        quickSort(arr,i+1,high);
    }
}

int main()
{
    vector<int> arr = {1, 7, 3, 6, 3, 9, 12, 5};
    cout << "Original array : ";
    for (auto x : arr)
        cout << x << " ";
    cout << endl;
    quickSort(arr, 0, arr.size() - 1);
    cout << "Sorted array : ";
    for (auto x : arr)
        cout << x << " ";
}