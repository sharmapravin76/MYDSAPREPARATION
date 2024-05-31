#include <iostream>
using namespace std;
int reverse(int arr[], int n, int target)

{
    int start = 0;
    int end = n - 1;
    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        int midelement = arr[mid];
        if (midelement == target)
        {
            return mid;
        }
        else if (target < midelement)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return -1;
}
int main()
{
    int arr[] = {20, 17, 15, 14, 13, 12, 10, 9, 8, 4};
    int target = 4;
    int n = 10;
    cout << reverse(arr, n, target) << endl;

    return 0;
}