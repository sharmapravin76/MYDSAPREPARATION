#include <iostream>
using namespace std;

void sorting(int arr[], int n)
{
    int one = 0, zero = 0, two = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
            zero++;
        else if (arr[i] == 1)
            one++;
        else

            two++;
    }
    int i = 0;
    while (zero--)
    {
        arr[i] = 0;
        i++;
    }
    while (one--)
    {
        arr[i] = 1;
        i++;
    }
    while (two--)
    {
        arr[i] = 2;
        i++;
    }
}
int main()
{
    int arr[] = {0, 2, 1, 2, 0, 1};
    sorting(arr, 6);
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
