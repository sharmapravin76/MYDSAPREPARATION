#include <iostream>
using namespace std;
bool f(int *arr, int n, int i, int x)
{
    if (i == n)
    {
        return false;
    }
    return (arr[i] == x) or f(arr, n, i + 1, x);
}

int main()
{
    int arr[] = {5, 4, 1, 8, -9, 8, 2, 3, 5};
    int n = 10;
    int x = 4;
    bool result = f(arr, n, 0, x);
    if (result)
        cout << "yes";
    else
        cout << "No";

    return 0;
}