
// #include <bits/stdc++.h>
// using namespace std;
// int stock(int arr[],int prices)
// {

//     int n = prices.size();
//         int maxRight = prices[n-1];
//         int maxProfit = 0;
//         for(int i = n - 2; i >= 0; i--){
//             maxRight = max(prices[i], maxRight);
//             maxProfit = max(maxProfit, maxRight - prices[i]);
//         }

//         return maxProfit;
// }
// int main(){
//     int arr[]={7,1,5,3,6,4};
//     cout<<stock(arr,6);
//     return 0;
// }
#include <iostream>
using namespace std;
int stock(int arr[], int n)
{
    int Max = arr[0];
    int Min = arr[0];
    for (int i = 1; i < n; i++)
{
        if (arr[i] < Min)
        {
            Min = arr[i];
            Max=arr[i];
        }
        else if (arr[i] > Max)
        {
            Max = arr[i];
        }
}
    return Max - Min;
}

int main()
{
    int arr[] = {7, 1, 5, 3, 6, 4};
    cout << stock(arr, 6);
    return 0;
}
