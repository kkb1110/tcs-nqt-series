#include<bits/stdc++.h>
using namespace std;



void shift(string& s){
    for(int i=0;i<s.length();i++){
        int ascii=int(s[i]);
        if(ascii==90)
            s[i]='A';
        else if(ascii==122)
            s[i]='a';
        else if((ascii>=65 && ascii>90) || (ascii>=97 && ascii>122))
            s[i]=char(ascii+1);
        
    }
}

int main() {
    string s;
    cout<<"Enter a santence 1 : \n";
    getline(cin, s);
    

    cout<<s<<endl;
    shift(s);
    cout<<s<<endl;
    
    return 0;
}