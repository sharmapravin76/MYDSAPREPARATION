#include <iostream>
using namespace std;
int duplicate(int arr[], int n)
{
    int sumone = 0;
    for (int i = 0; i < n; i++)
    {
        sumone = sumone + arr[i];
    }
    // int sumtwo = n *(n + 1) / 2;

   int sumtwo= ((n*(n-1))/2);

    // int sumtwo = (n / 2) * (arr[0] + arr[n - 2]);
    int ans = sumone - sumtwo;
    // cout << sumone << endl;

    // cout << sumtwo << endl;
    return ans;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5,6,7,7,8,9};
    
    cout << duplicate(arr, 10);


    return 0;
}

// #include<iostream>
// using namespace std;
// int duplicate(int arr[],int n)
// {
//     int sumone=0;
//     for(int i=0;i<n;i++)
//     {
//         sumone=sumone+arr[i];
//     }
//     int sumtwo=(n*(n+1)/2);
//     int ans=sumone-sumtwo;
//     return ans;
// }
// int main(){
//     int arr[]={1,2,3,4,4,6};
//    cout<< duplicate(arr,6)<<" ";
//     // for(int i=0;i<6;i++)
//     // {
//     //     cout<<arr[i]<<" ";
//     //         }
//     return 0;
// }