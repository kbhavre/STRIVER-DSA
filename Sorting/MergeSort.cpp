#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &arr, int low, int mid, int high)
{

    // First create an temproray array
    vector<int> temp;

    int left = low;      // Starting index of left half of array
    int right = mid + 1; // Starting index of right half of array

    // Storing elements in temp array in sorted manner

    while (left <= mid && right <= high)
    {
        if (arr[left] <= arr[right])
        {
            temp.push_back(arr[left]);
            left++;
        }
        else
        {
            temp.push_back(arr[right]);
            right++;
        }
    }

    // If the elements in the left half array are still left ;
    while (left <= mid)
    {
        temp.push_back(arr[left]);
        left++;
    }

    // If the elements in the right half array are still left ;
    while (right <= high)
    {
        temp.push_back(arr[right]);
        right++;
    }

    // Transfering all the elements from temp array to the arr
    for (int i = low; i <= high; i++)
    {
        arr[i] = temp[i - low];
    }
}

void mergeSort(vector<int> &arr, int low, int high)
{

    // Base case
    if (low >= high)
        return;

    // Divide the array in two parts
    int mid = (low + high) / 2;

    // For left half
    mergeSort(arr, low, mid);

    // For right half
    mergeSort(arr, mid + 1, high);

    // Merging both the sorted half arrays
    merge(arr, low, mid, high);
}

int main()
{
    vector<int> arr = {9, 4, 7, 6, 3, 1, 5};
    int n = 7;

    cout << "Before sorting array " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    mergeSort(arr, 0, n - 1);

    cout << "After sorting array" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}