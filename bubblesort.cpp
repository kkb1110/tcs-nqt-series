#include<Bits/stdc++.h>
using namespace std;

void bubbleSort(vector<int>& arr){
    int n= arr.size();
    for (int i = 0; i < n - 1; i++) {
        bool swapped = false;

        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }

        if (!swapped)
            break;
    }
}

int main(){
    vector<int> arr={1,7,3,6,3,9,12,5};
    cout<<"Original array : ";
    for(auto x:arr)
        cout<<x<<" ";
    cout<<endl;
    bubbleSort(arr);
    cout<<"Sorted array : ";
    for(auto x:arr)
        cout<<x<<" ";

}