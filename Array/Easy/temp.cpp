// Print name n times using recursion 

#include <iostream>
using namespace std;

void printName(int i, int n){

    // Base condition 
    if(i>n) return ;
    cout<<i<<" Kunal"<<endl;

    // Function call to print till i increments
    printName(i+1, n);
}

int main(){

    printName(0,5);

    return 0;
}