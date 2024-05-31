#include <iostream>
#include<limits.h>
#include<algorithm>
using namespace std;

void negativenumber(int arr[], int n)
{
  sort(arr,arr+n);
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