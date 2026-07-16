#include <iostream>
using namespace std;

bool palindrome(int n)
{
    int dup = n;
    int rev = 0;
    while (n > 0)
    {
        int digit = n % 10;
        n = n / 10;
        rev = (rev * 10) + digit;
    }
    if (rev == dup)
        return true;
    else
        return false;
}

int main(){
    int start=5,end=189;
    for(int i=start;i<end;i++){
        palindrome(i)?cout<<i<<" is palindrome\n":cout<<"";
    }
    
}