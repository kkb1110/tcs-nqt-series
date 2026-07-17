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
    int max=-1;
    char key;
    for(auto x: count){
        if(x.second>max){
            key=x.first;
            max=x.second;
        }
            
    }
    

    cout << key<<" : Count : "<<max;
    return 0;
}