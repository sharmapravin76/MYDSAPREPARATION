#include <iostream>
using namespace std;
int binary(int arr[], int n, int target)
{
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;
    while (s <=e)
    {
        int midelement = arr[mid];
        if (midelement == target)
        {
            return mid;
        }
        if (midelement < target)
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid=s + (e - s) / 2;
    }
    return -1;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = 6;
    int target = 5;
    cout << binary(arr, n, target);

    return 0;
}