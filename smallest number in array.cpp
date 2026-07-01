#include <bits/stdc++.h>
using namespace std;


int SmallestElement(int arr[], int n) {
    int min = arr[0];  

    
    for (int i = 1; i < n; i++) {
        if (min > arr[i]) { 
            min = arr[i];
        }
    }

    return min;  
}

int main() {
    
    int arr1[] = {2, 5, 1, 3, 0};  
    int n = 5;  

    
    int min = SmallestElement(arr1, n);
    cout << "The smallest element in the array is: " << min << endl;

    return 0;
}