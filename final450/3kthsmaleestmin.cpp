#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int kthminelement(int arr[], int n, int k)
{
    sort(arr, arr + n);
// minimum kth smallest
    return arr[k-1];
}
int main()
{
    int arr[] = {7, 10, 4, 3, 20, 15};
    int k;
    cin >> k;
    cout << kthminelement(arr, 6, k);
    return 0;
}