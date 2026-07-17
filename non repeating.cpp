#include<bits/stdc++.h>
using namespace std;

bool ischar(char a,char b){
    return a==b;
}

unordered_map<char, int> frequency(string& s){
    unordered_map<char, int> count;
    for(char ch:s){
        if(ch==' '){
            continue;
        }
        count[ch]++;
        
    }
    return count;
}

int main() {
    string s;
    char ch;
    cout<<"Enter a santence : \n";
    getline(cin, s);
    unordered_map<char, int> count =frequency(s);
    for(auto x: count){
        if(x.second==1)
            cout<<x.first<<",";
    }
    

    // cout << num;
    return 0;
}