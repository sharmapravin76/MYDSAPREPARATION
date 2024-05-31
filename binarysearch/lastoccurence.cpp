#include <iostream>
using namespace std;

int lastoccurence(int arr[], int n, int target)
{
    int start = 0;
    int end = n - 1;

    int ans=-1;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        int midelement = arr[mid];
        // element found
        if (midelement == target)
        {
            ans=mid;
            start=mid+1;
          
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

    return ans;
}

int main()
{
    int arr[] = {2, 3, 3, 4, 7, 9, 11};
    int n = 7;
    int target = 3;
    cout << (lastoccurence(arr, n, target)) << endl;

    return 0;
}