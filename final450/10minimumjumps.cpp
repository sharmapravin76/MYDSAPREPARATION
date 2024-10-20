// #include <iostream>
// using namespace std;

// int minJumps(int arr[], int n)
// {
//     if (n <= 1)
//         return 0;

//     if (arr[0] == 0)
//         return -1;

//     int maxReach = arr[0];
//     int step = arr[0];
//     int jump = 1;

//     for (int i = 1; i < n; i++)
//     {
//         if (i == n - 1)
//             return jump;

//         maxReach = max(maxReach, i + arr[i]);
//         step--;
//         if (step == 0)
//         {
//             jump++;
//             if (i >= maxReach)
//                 return -1;
//             step = maxReach - i;
//         }
//     }

//     return -1;
// }

// int main()
// {
//     int arr[] = {1, 3, 5, 8, 9, 2, 6, 7, 6, 8, 9};
//     cout << minJumps(arr, 11);
//     return 0;
// }

#include <iostream>
#include<algorithm>
#include<limits.h>
using namespace std;
int minJumps(int arr[], int n)
{
    if (n <= 1)
        return 0;
    if (arr[0] == 0)
        return -1;
    int step = arr[0];
    int maxi = arr[0];
    int jump = 1;
    for(int i=1;i<n;i++)
    {
        if(i==n-1)
        return jump;
        maxi=max(arr[i]+i,maxi);
        step--;
        if(step==0)
        {
        jump++;
        if(i>=maxi)
        return -1;
        step=maxi-i;
        }

    }
    return -1;
}

int main()
{
    int arr[] = {1, 3, 5, 8, 9, 2, 6, 7, 6, 8, 9};
    cout << minJumps(arr, 11);

    return 0;
}