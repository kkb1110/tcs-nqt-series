 #include<iostream>
 using namespace std;
 
 int permutation(int n, int r) {
        
        int ans = 1;

        for (int i = n; i >= n - r + 1; i--) {
            ans *= i;
        }

        return ans;
    }

int main(){
    int n,r;
    cout<<"Enter value of n and r\n";
    cin>>n;
    cin>>r;
    cout<<"Possible no of arrangements : "<<permutation(n,r)<< endl;


}