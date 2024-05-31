// #include<iostream>
// #include<algorithm>
// #include<limits.h>
// using namespace std;

// int  duplicate(int arr[],int N)
// {
// //   int N=arr.size();
//     int sum=0;
//     for(int i=0;i<arr.size();i++)
//     {
//         sum+=arr[i];
//     }
//     int ans=sum-((N*(N-1))/2);
//     return ans;

// int main(){

//     int arr[] = {1, 2, 3, 4, 5,6,7,7,8,9};
    
//     cout << duplicate(arr, 10);


//     return 0;
// }


// #include <iostream>
// #include <algorithm>
// #include <limits.h>
// using namespace std;

// int duplicate(int arr[], int N)
// {
//     int sum = 0;
//     for (int i = 0; i < N; i++)
//     {
//         sum += arr[i];
//     }
//     int ans = sum - ((N * (N + 1)) / 2);
//     return ans;
// }

// int main()
// {
//     int arr[] = {1, 2, 3, 4, 5, 6, 7, 7, 8, 9};
//     int N = sizeof(arr) / sizeof(arr[0]);

//     cout << duplicate(arr, N);

//     return 0;
// }

