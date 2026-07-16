#include<bits/stdc++.h>
using namespace std;

int gcd(int a ,int b){
    if(b==0)
        return a;
    return(b,a%b);
}
int lcm(int a,int b){
    return (a/gcd(a,b))*b;
}

class Fraction{
    public:
    int n;
    int d;
};

Fraction add(Fraction a,Fraction b){
    Fraction temp;
    int l=lcm(a.d,b.d);
    temp.d=l;
    temp.n=((l/a.d)*a.n)+((l/b.d)*b.n);
    int common =gcd(temp.n,temp.d);
    temp.n/=common;
    temp.d/=common;
    return temp;

}

int main(){
    cout<<"Enter fraction in format a/b and c/d\n";
    Fraction a,b;
    cout<<"Enter a : ";
    cin>>a.n;
    cout<<"Enter b : ";
    cin>>a.d;
    cout<<"Enter c : ";
    cin>>b.n;
    cout<<"Enter d : ";
    cin>>b.d;
    cout<<"Numbers are : "<<a.n<<"/"<<a.d<<" & "<<b.n<<"/"<<b.d<<endl;
    Fraction c=add(a,b);
    cout<<"Addition : "<<c.n<<"/"<<c.d;

}