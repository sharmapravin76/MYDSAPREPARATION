#include <iostream>
#include <limits.h>
using namespace std;
int maximum(int arr[], int n)
{
    int ans = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        ans = max(ans, arr[i]);
    }
    return ans;
    
}
int minimum(int arr[], int n)
{
    int ans = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        ans = min(ans, arr[i]);
    }
    return ans;
}

int main()
{
    int arr[] = {22, 14, 8, 17, 35, 3};
    cout << maximum(arr, 6) << endl;
    cout << minimum(arr, 6)<<endl;
int sum=0;
   sum = (maximum(arr, 6) + minimum(arr, 6));
   cout<<sum;

    return 0;
}
