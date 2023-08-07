// Unordered Map -> It is a associative container where each element consist of a key value and a mapped value, it can have the same key value.  It is different from the normal map as the elements can be stored in any order

#include <bits/stdc++.h>
using namespace std;

int main()
{

    // Creating an unordered map
    unordered_map<int, int> mpp;

    // Inserting elements in mpp
    for (int i = 1; i <= 5; i++)
    {
        mpp.insert({i, i * 10});
    }

    cout << "Elements present in the map : " << endl;
    cout << "Key\tElement " << endl;

    // Printing the elements of the map
    for (auto it = mpp.begin(); it != mpp.end(); it++)
    {
        cout << it->first << "\t" << it->second << endl;
    }

    // begin() -> will return an iterator pointing to the first element in the map
    mpp.begin();

    // end() -> will return an iterator to the theoritical element after the last element
    mpp.end();

    // find() -> to search for an element in the map
    int n = 2;
    if (mpp.find(20) != mpp.end())
        cout << n << " is present in map" << endl;
    else
        cout << n << " is not present in the map " << endl;
    // erase() -> to delete a single element between a particular range
    mpp.erase(mpp.begin());
    cout << "Elements after deleting the first element :" << endl;
    cout << "Key\tElements" << endl;
    for (auto it = mpp.begin(); it != mpp.end(); it++)
    {
        cout << it->first << "\t" << it->second << endl;
    }

    // size() -> returns the size of the map
    cout << "The size of the map is " << mpp.size() << endl;

    // erase() -> to check if the map is empty or not
    if (mpp.empty() == false)
        cout << "The map is not empty" << endl;

    else
        cout << "The map is empty" << endl;

    // clear() -> clears all the elements of the map
    mpp.clear();

    cout << "The size of the map after clearing all the elements " << mpp.size() << endl;
}