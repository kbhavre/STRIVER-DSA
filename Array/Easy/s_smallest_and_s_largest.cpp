#include <bits/stdc++.h>
using namespace std;

void getElements(int arr[], int n){

    // Edge cases
    if(n==0 || n==1)
        cout<<"-1"<<endl;
    
    int smallest = INT_MAX, second_smallest = INT_MAX;
    int largest = INT_MIN, second_largest = INT_MIN;

    // First find smallest and largest values
    for(int i=0; i<n; i++){
        smallest = min(smallest, arr[i]);
        largest = max(largest, arr[i]);
    }

    // Now find second_smallest and second_largest
    for(int i=0; i<n; i++){
        if(arr[i]<second_smallest && arr[i]!= smallest)
            second_smallest = arr[i];
        
        if(arr[i]>second_largest && arr[i]!= largest)
            second_largest = arr[i];
    }

    cout<<"second smallest : "<<second_smallest<<endl;
    cout<<"second largest : " <<second_largest<<endl;
}

int main(){

    int arr[6] = {1,2,3,4,5,6};
    int n = 6;

    getElements(arr, 6);
    
    return 0;
}