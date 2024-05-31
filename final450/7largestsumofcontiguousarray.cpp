#include <iostream>
using namespace std;
int largestsum(int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    return sum;
}
int main()
{
    int arr[] = {1, 2, 3, -2, 5};
    cout << largestsum(arr, 5);
    
    return 0;
}