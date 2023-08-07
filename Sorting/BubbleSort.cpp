#include <bits/stdc++.h>
using namespace std;

int BubbleSort(vector<int> &arr, int n){
    
    //from round 1 to n-1;
    for (int i=1; i<n; i++){

        // First set the flag to false , agar ye last tak false raha toh loop break ho jayega or time save hoga
        bool swapped= false;
        
        for(int j=0; j<n-i; j++){        //ab yaha par n-i isliye kiya he kyuki ek ek element sort hokar array end me add hoga;
            if (arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);
                swapped= true;                   //Agar ek baar bhi swaping nahi hui toh time save hoga ;
            }
        }
        if (swapped==false){
            break;
        }
    }
    return 0;
}


void printArray(vector<int> arr, int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<' ';
    }
    cout<<endl;
}

int main(){

    vector<int> arr = {5,4,23,2,1};
    int n= 5;

    cout<<"Before sorting the array "<<endl;
    printArray(arr, n);

    BubbleSort(arr,n);

    cout<<"After sorting the array"<<endl;
    printArray(arr, n);


    return 0;
}