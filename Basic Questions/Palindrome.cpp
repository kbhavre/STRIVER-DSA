#include <bits/stdc++.h>
using namespace std;

bool palindrome(int n){
    int x = n;
    int reversed = 0;
    while (x!=0)
    {
        int digit = x%10;
        x = x/10;
        reversed = reversed*10 + digit;
    }

    if(reversed == n) return true;

    else return false;
    
}

int main(){

    cout<<palindrome(121)<<endl;

    return 0;
}