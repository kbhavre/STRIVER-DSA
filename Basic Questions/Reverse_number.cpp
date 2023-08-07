#include <bits/stdc++.h>
using namespace std;

int reverseNumber(int n)
{
    int x = n;
    int reverse = 0;
    while (x != 0)
    {
        int digit = x % 10;
        x = x / 10;
        reverse = reverse * 10 + digit;
    }
    return reverse;
}

int main(){
    cout<<reverseNumber(1234)<<endl;
    cout<<reverseNumber(1836)<<endl;
    return 0;
}