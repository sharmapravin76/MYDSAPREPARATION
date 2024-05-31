#include <iostream>
#include <string>
#include <limits.h>

using namespace std;
int insertion(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int temp = arr[i];
        int j = i - 1;
        for (; j >=0; j--)
        {
            if (arr[j] > temp)
                arr[j + 1] = arr[j];
                else
                break;
        }
        arr[j+1]=temp;
    }
}

int main()
{
    int arr[] = {6, 2, 3, 8};

    // int n = sizeof(arr) / sizeof(arr[0]);
    insertion(arr, 4);
    for (int i = 0; i < 4; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}