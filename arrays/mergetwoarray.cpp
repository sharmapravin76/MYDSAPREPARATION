#include <bits/stdc++.h>
using namespace std;

void mergeArrays(int arr1[], int arr2[], int m,
                 int n, int arr3[])
{
    int i = 0, j = 0, k = 0;

    while (i < m)
    {
        //  int arr1[] = {1, 3, 5, 7};
        arr3[k] = arr1[i];
        k++;
        i++;
    }
    

    while (j < n)
    {
        // int arr2[] = {2, 4, 6, 8};../
        arr3[k] = arr2[j];
        k++;
        j++;
    }
}

// Driver code
int main()
{
    int arr1[] = {1, 3, 5, 7};
    int m = sizeof(arr1) / sizeof(arr1[0]);

    int arr2[] = {2, 4, 6, 8};
    int n = sizeof(arr2) / sizeof(arr2[0]);

    int arr3[]={m + n};
    mergeArrays(arr1, arr2, m, n, arr3);

    for (int i = 0; i < m + n; i++)
        cout << arr3[i] << " ";

    return 0;
}