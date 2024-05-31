#include <iostream>
#include <string>
#include <limits.h>

using namespace std;


int selection(int arr[], int n)
{
  
    for (int i = 0; i < n; i++)
    {

        int minindex = i;
        // find minimum element
        for (int j = i + 1; j < n; j++)
        {
            if (arr[minindex] > arr[j])
            {
                minindex = j;
            }
        }
        swap(arr[minindex], arr[i]);
    }
}

int main()
{
    int arr[] = {6, 2, 3, 8};

    // int n = sizeof(arr) / sizeof(arr[0]);
    selection(arr, 4);
    for (int i = 0; i < 4; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}