#include <iostream>
#include <limits.h>
#include <algorithm>
using namespace std;
int kthmaximum(int arr[], int n, int k)

{
    sort(arr, arr + n);
    return arr[n-k];
}

int main()
{
    int arr[] = {12, 3, 5, 7, 19};
    int k;
    cin >> k;
    cout << kthmaximum(arr, 5, k);
   
    return 0;
}

