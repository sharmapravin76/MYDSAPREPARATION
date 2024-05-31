#include<iostream>
using namespace std;
void cyclerotate(int arr[],int n)
{
int x=arr[n-1];
for(int i=n-1;i>0;i--)
{
    arr[i]=arr[i-1];

}
arr[0]=x;
}

int main(){
    int arr[]={1,2,3,4,5,6};
    cyclerotate(arr,6);
    for(int i=0;i<6;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}



// // commonelement in three sorted arrays

// #include <iostream>
// using namespace std;
// void commonelement(int arr1[], int arr2[], int arr3[], int x, int y, int z)
// {
//     int i = 0, j = 0, k = 0;

//     while (i < x && j < y && k < z)
//     {
//         if (arr1[i] == arr2[j] && arr2[j] == arr3[k])
//         {
//             cout << arr1[i] << " ";
//             i++;
//             j++;
//             k++;
//         }
//         else if (arr1[i] < arr2[j])
//             i++;

//         // y < z
//         else if (arr2[j] < arr3[k])
//             j++;

//         // We reach here when x > y and z < y, i.e., z is
//         // smallest
//         else
//             k++;
//     }
// }
// int main()
// {
//     int arr1[] = {1, 5, 10, 20, 40, 80};
//     int arr2[] = {6, 7, 20, 80, 100};
//     int arr3[] = {3, 4, 15, 20, 30, 70, 80, 120};
//     int x = sizeof(arr1) / sizeof(arr1[0]);
//     int y = sizeof(arr2) / sizeof(arr2[0]);
//     int z = sizeof(arr3) / sizeof(arr3[0]);

//     commonelement(arr1, arr2, arr3, x, y, z);
//     //  return 0;
// }




























// // C++ program to print common elements in three arrays
// #include <bits/stdc++.h>
// using namespace std;

// // This function prints common elements in ar1
// void findCommon(int ar1[], int ar2[], int ar3[], int n1,
//                 int n2, int n3)
// {
//     // Initialize starting indexes for ar1[], ar2[] and
//     // ar3[]
//     int i = 0, j = 0, k = 0;

//     // Iterate through three arrays while all arrays have
//     // elements
//     while (i < n1 && j < n2 && k < n3)
//     {
//         // If x = y and y = z,  print any of them and move
//         // ahead in all arrays
//         if (ar1[i] == ar2[j] && ar2[j] == ar3[k])
//         {
//             cout << ar1[i] << " ";
//             i++;
//             j++;
//             k++;
//         }

//         // x < y
//         else if (ar1[i] < ar2[j])
//             i++;

//         // y < z
//         else if (ar2[j] < ar3[k])
//             j++;

//         // We reach here when x > y and z < y, i.e., z is
//         // smallest
//         else
//             k++;
//     }
// }

// // Driver code
// int main()
// {
//     int ar1[] = {1, 5, 10, 20, 40, 80};
//     int ar2[] = {6, 7, 20, 80, 100};
//     int ar3[] = {3, 4, 15, 20, 30, 70, 80, 120};
//     int n1 = sizeof(ar1) / sizeof(ar1[0]);
//     int n2 = sizeof(ar2) / sizeof(ar2[0]);
//     int n3 = sizeof(ar3) / sizeof(ar3[0]);

//     findCommon(ar1, ar2, ar3, n1, n2, n3);
//     return 0;
// }

// // This code is contributed by Sania Kumari Gupta (kriSania804)
