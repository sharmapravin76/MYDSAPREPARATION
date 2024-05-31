#include <iostream>
using namespace std;
int pivotarray(int arr[], int n)
{
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;
    while (s < e)
    {
        int midelement = arr[mid];
        if (arr[mid] >= arr[0])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
        mid = s + (e - s) / 2;
    }
    return s;
}
int binarysearch(int arr[], int s, int e, int target)
{
    int start = s;
    int end = e;
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
        if (midelement < target)
        {
            start = mid + 1;
        }
        else
        {
            // check in left part and neglect right part
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }

    return -1;
}
int findposition(int arr[], int n, int target)
{
    int pivot = pivotarray(arr, n);
    if (target >= arr[pivot] && target <= arr[n - 1])
    {
        return binarysearch(arr, pivot, n - 1, target);
    }
    else
    {
        return binarysearch(arr, 0, pivot - 1, target);
    }
}

int main()
{
    int arr[] = {8, 10, 17, 1, 2, 3};
    int n = 6;
    int target = 2;
    cout << findposition(arr, n, target);

    return 0;
}