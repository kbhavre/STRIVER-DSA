#include <bits/stdc++.h>
using namespace std;


// Using a hashSet
// int removeDuplicates(int arr[], int n){
//     // Declaring a set;
//     set<int> set;   

//     // copying all the elements of the array to the set
//     for(int i=0; i<n; i++){
//         set.insert(arr[i]);
//     }

//     // storing the size of the set in k so that our array will be of same size;
//     int k= set.size();

//     // Now copying the elements of the set in our array
//     int j=0;
//     for(int x: set){
//         arr[j++] =x;
//     }
//     return k;
// }


// Using two pointers 
int removeDuplicates(int arr[], int n){
    int i=0; 
    for(int j=1; j<n; j++){
        if(arr[j] != arr[i]){
            i++;
            arr[i] == arr[j];
        }
    }
    return i+1;
}

int main(){

    int arr[7] = {1,1,2,2,2,3,3};
    int n= 7;

    cout<<removeDuplicates(arr, 7);
    

    
    return 0;
}