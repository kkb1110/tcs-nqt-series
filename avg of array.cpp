#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[]={1,2,3,4,5,6,7};
    int n=7;
    float sum=0;
    for(int i : arr){
        sum+=i;
    }
    cout<<"Average : "<<sum/6;
}