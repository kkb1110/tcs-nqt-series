#include<bits/stdc++.h>
using namespace std;



unordered_map<char, int> deleteMap(string& s){
    unordered_map<char, int> count;
    for(int i=0;i<s.length();i++){
        char ch=s[i];
        if(ch==' '){
            continue;
        }
        count[ch]=1;    
    }
    return count;
    
}
void deletefrom1st(string& s1,string& s2){
    unordered_map<char, int> map=deleteMap(s2);
    for(int i=0;i<s1.length();i++){
        
        if(map.find(s1[i]) != map.end()){
            s1.erase(i, 1);
            i--;
        }   
    }
}

int main() {
    string s,s2;
    char ch;
    cout<<"Enter a santence 1 : \n";
    getline(cin, s);
    cout<<"Enter a santence 2 : \n";
    getline(cin, s2);

    cout<<s<<endl;
    deletefrom1st(s,s2);
    cout<<s<<endl;
    
    return 0;
}