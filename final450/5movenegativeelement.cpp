#include <iostream>
#include <limits.h>
#include <algorithm>
using namespace std;

int negative(int arr[], int n)
{
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            swap(arr[i], arr[j]);
            j++;
        }
    }
}
int main()
{
    int arr[] = {-12, 11, -13, -5, 6, -7, 5, -3, -6};
    negative(arr, 9);
    for (int i = 0; i < 9; i++)
    {
        cout << arr[i];
    }
    return 0;
}