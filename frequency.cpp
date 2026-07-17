#include<bits/stdc++.h>
using namespace std;

bool ischar(char a,char b){
    return a==b;
}

int frequency(string& s,char c){
    int n=s.length()-1;
    int num=0;
    for(char ch:s){
        if(ischar(ch,c)){
            num++;
        }
        
    }
    return num;
}

int main() {
    string s;
    char ch;
    cout<<"Enter a santence & then character to find frequency\n";
    getline(cin, s);
    cin>>ch;
    int num=frequency(s,ch);
    

    cout << num;
    return 0;
}