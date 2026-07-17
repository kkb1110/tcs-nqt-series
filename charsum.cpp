#include<bits/stdc++.h>
using namespace std;

int sum(string& s){
    int n=s.length()-1;
    int num=0;
    int sum=0;
    for(char ch:s){
        if(isdigit(ch)){
            num=num*10+(ch-'0');
        }
        else{
            sum+=num;
            num=0;
        }
    }
    sum+=num;
    return sum;
}

int main() {
    string s;
    cout<<"Enter a santence\n";
    getline(cin, s);
    int num=sum(s);
    

    cout << num;
    return 0;
}