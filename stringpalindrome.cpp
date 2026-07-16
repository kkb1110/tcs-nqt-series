#include<bits/stdc++.h>
using namespace std;

bool palindrome(string& s){
    for(int i=0,j=s.length()-1;i<s.length()/2;i++,j--){
        if(s[i]!=s[j])
            return false;
    }
    return true;
}
int main(){
    string s="hello";
    if(palindrome(s)){
        cout<<"Palindrome !\n";
    }
    else{
        cout<<"Not a Palindrome !!!\n";

    }
}