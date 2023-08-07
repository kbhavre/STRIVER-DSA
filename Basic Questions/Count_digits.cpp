#include <bits/stdc++.h>
using namespace std;

int countDigits(int n){

    /* Approach 1

    int count =0;
    int x = n;
    while (x!=0)
    {
        x= x/10;
        count++;
    }
    return count;
    */

    // Approach 2 -> By converting it into a string 

   string x = to_string(n);
   return x.length();
    
}

int main(){

    cout<<countDigits(12334)<<endl;


    return 0;
}