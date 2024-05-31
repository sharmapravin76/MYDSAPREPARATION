#include <iostream>
using namespace std;
void reversearray(int arr[], int size)
{
    int i = 0;
    int j = size - 1;
    while (i < j)
    {
        swap(arr[i], arr[j]);
        i++;
        j--;
    }
}
int main()
{
    int arr[] = {1, 2, 3, 5, 7, 8, 9};
    reversearray(arr, 7);
    for (int i = 0; i < 7; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}