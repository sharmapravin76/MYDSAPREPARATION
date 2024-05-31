#include <iostream>
#include<algorithm>
using namespace std;
int reverse(int arr[], int n)
{
    int i = 0;
    int j = n - 1;
    while (i < j)

    {
        swap(arr[i], arr[j]);

        i++;
        j--;
    }
}
int main()
{
    int arr[] = {4, 5, 1, 2};
    reverse(arr, 4);
    for (int i = 0; i < 4; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
