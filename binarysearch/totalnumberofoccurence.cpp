#include <iostream>
using namespace std;

int firstoccurence(int arr[], int n, int target)
{
    int start = 0;
    int end = n - 1;

    int ans = -1;
    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        int midelement = arr[mid];
        // element found
        if (midelement == target)
        {
            ans = mid;
            end = mid - 1;
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
int lastoccurence(int arr[], int n, int target)
{
    int start = 0;
    int end = n - 1;

    int ans = -1;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        int midelement = arr[mid];
        // element found
        if (midelement == target)
        {
            ans = mid;
            start = mid + 1;
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
    int arr[] = {2, 3, 4, 5, 5, 5, 6, 7, 8};
    int n = 9;
    int target = 5;
    int z = ((lastoccurence(arr, n, target))) - (firstoccurence(arr, n, target)) + 1;

    cout << (firstoccurence(arr, n, target)) << endl;
    cout << (lastoccurence(arr, n, target)) << endl;
    cout << z;

    return 0;
}