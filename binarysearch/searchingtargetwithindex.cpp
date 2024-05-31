#include <iostream>
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
        // check in left part and neglect right part
        else if (target < midelement)
        {
            end = mid - 1;
        }
        else
        {
            // check in right part and neglect left part
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }

    return -1;
}

int main()
{
    int arr[] = {-3,-1,0,1,2, 4, 6, 8, 9, 11, 23};
    int n =11;
    int target = 2;
    cout << (binarysearch(arr, n, target)) << endl;

    return 0;
}