#include<bits/stdc++.h>
using namespace std;



void deleteChar(string& s){
    unordered_map<char, int> count;
    for(int i=0;i<s.length();i++){
        char ch=s[i];
        if(ch==' '){
            continue;
        }
        if(count[ch]==0){
            count[ch]=1;
        }
        else if(count[ch]==1){
            s.erase(i, 1);
            i--;
        }
        
    }
    
}

int main() {
    string s;
    char ch;
    cout<<"Enter a santence : \n";
    getline(cin, s);
    cout<<s<<endl;
    deleteChar(s);
    cout<<s<<endl;
    
    return 0;
}