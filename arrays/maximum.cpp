#include <iostream>
#include <limits.h>
using namespace std;

int getmaximum(int arr[], int n)
{
    int ans = INT_MIN;
    for (int i = 0; i < n; i++)
    {                                                           
        ans = max(ans, arr[i]);
    }
    return ans;
}

int main()
{
    int arr[] = {3,2, 5, 2, 7, 56, 9};

    cout << getmaximum(arr, 7) << endl;
    return 0;
}