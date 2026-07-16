#include <bits/stdc++.h>
using namespace std;

int power(int n,int p){
    
    int ans=1;
    for(int i =1;i<=p;i++){
        ans*=n;
    }
    return ans;
}
int powerR(int n,int p){
    if(p==0)
        return 1;
    else 
        return n* powerR(n,p-1);
}

int main() {
    int n,p;
    cout << "Enter number and power to find power " << endl;
    cin >> n;
    cin >> p;
    cout << "Power of " <<n<<" : "<<power(n,p)<< endl;
    cout << "Power of " <<n<<" : "<<powerR(n,p)<< endl;


    return 0;
}
