#include <iostream>
using namespace std;

void negativenumber(int arr[], int size)
{
    int j = 0;
    for (int i = 0; i < size; i++)

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
    int arr[] = {9, -5, -3, 1, -6, -8, 9};
    negativenumber(arr, 7);
    for (int i = 0; i < 7; i++)
    {
        cout << arr[i]<<" ";
    }
    return 0;
}