#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void countFreq(int arr[], int n)
{
    unordered_map<int, int> mp;

    // Traverse through array elements and
    // count frequencies
    for (int i = 0; i < n; i++)
        mp[arr[i]]++;

    // Traverse through map and print frequencies
    for (auto x : mp)
        cout << x.first << " " << x.second << endl;
}
int main()
{
    int arr[] = {1, 2, 2, 1, 1, 3};
    countFreq(arr, 6);
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}