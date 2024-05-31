#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int binarysearch(int arr[], int n, int target)
{
    int start = 0;
    int end = n - 1;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        int midelement = arr[mid];
        // element found
        if (midelement == target)
        {
            return mid;
        }
        // check in right part and neglect left part
        if (midelement<target)
        {
            start= mid + 1;
        }
        else
        {
            // check in left part and neglect right part
           end = mid -1;
        }
        mid = start + (end - start) / 2;
    }

    return -1;
}



int main()
{
    int arr[] = {2, 4, 6, 8, 9, 11, 23};
    int n = 7;
    int target = 23;

    // calling function using stl;

    cout << binary_search(arr, arr + n, target) << endl;
    
    cout << (binarysearch(arr, n, target)) << endl;

    return 0;
}






// total number of occurencelast-first+1;