#include <iostream>
using namespace std;

bool binarysearch(int arr[], int n, int target)
{
    int start = 0;
    int end = n - 1;

    // int mid = (start + end) / 2;

    int mid=start+(end-start)/2;
    while (start <=end)
    {
        int midelement = arr[mid];
        // element found
        if (midelement == target)
        {
            return true;
        }

        // check in left part and neglect right part

        else if ( midelement<target)
        {
            start = mid + 1;
        }
        else
        {

            // check in right part and neglect left part

            end = mid - 1;
        }
        mid = start+(end-start)/2;
    }

    return false;
}

int main()
{
    int arr[] = {2,4, 6, 8, 9, 11, 23};
    int n = 7;
    int target = 23;
    if (binarysearch(arr, n, target))
    {
        cout << "element found" << endl;
    }
    else
    {
        cout << "element not found" << endl;
    }
    return 0;
}