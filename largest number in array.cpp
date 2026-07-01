#include <iostream>
using namespace std;

int findLargest(int* arr,int n){
    int max=arr[0];

    for(int i=1;i<n;i++){
        if(arr[i]>max)
            max=arr[i];
    }
    return max;
}

int main(){

    int arr[]={4,6,67,-34,8};
    int n=5;
    int max=findLargest(arr,n);
    cout<<"Largest number in array is : "<<max<<endl;

    return 0;

}