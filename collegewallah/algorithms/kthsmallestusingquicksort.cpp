
#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

int partition(int arr[], int l, int r)
{
    int pivot = arr[r];
    int i = l;
    // int j = r;
    for (int j = l; j < r; j++)
    {
        if (arr[j] < pivot)
        {
            swap(arr[i], arr[j]);
            i++;
        }
    }

    swap(arr[i], arr[r]);
    return i;
}

int kthsmallest(int arr[], int l, int r, int k)
{
    if (k > 0 && k <= r - l + 1)
    {
        int pos = partition(arr, l, r);
        cout << pos << endl;

        if (pos - l == k - 1)
        {
            return arr[pos];
        }
        else if (pos - l > k - 1)
        {
            return kthsmallest(arr, l, pos - 1, k);
        }
        return kthsmallest(arr, pos + 1, r, k - pos + l - 1);
    }

    return INT_MAX;
}

int main()
{
    int arr[] = {3, 5, 4, 1, 9, 7, 8, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 2;

    int kthSmallestValue = kthsmallest(arr, 0, n - 1, k);
    cout << "Kth smallest element: " << kthSmallestValue << endl;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    return 0;
}
