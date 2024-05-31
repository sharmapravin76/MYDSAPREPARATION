// #include <iostream>
// using namespace std;
// void unioon(int arr1[], int arr2[], int m, int n)
// {
//     int i = 0, j = 0;
//     while (i < m && j < n)
//     {
//         if (arr1[i] < arr2[j])
//         {
//             cout << arr1[i] << " ";
//             i++;
//         }
//         else if (arr1[i] > arr2[j])
//         {
//             cout << arr2[j] << " ";
//             j++;
//         }
//         else
//         {
//             cout << arr2[j] << " ";
//             i++;
//             j++;
//         }
//     }
//     while (i < m){
//         cout << arr1[i] << " ";
//     i++;
//     }
//     while (j < n){
//         cout << arr2[j] << " ";
//         j++;
//     }
// }
// int main()
// {
//     int arr1[] = {1, 2, 3, 4, 5, 6, 7, 8};
//     int arr2[] = {2, 3, 4, 5, 6};
//     int m = sizeof(arr1) / sizeof(arr1[0]);
//     int n = sizeof(arr2) / sizeof(arr2[0]);
//     unioon(arr1, arr2, m, n);

//     return 0;
// }

// C++ program to merge two sorted arrays/
#include <bits/stdc++.h>
using namespace std;

void mergeArrays(int arr1[], int arr2[], int m,
                 int n, int arr3[])
{
    int i = 0, j = 0, k = 0;

    while (i < m)
    {
        arr3[k] = arr1[i];
        k++;
        i++;
    }

    while (j < n)
    {
        arr3[k] = arr2[j];
        k++;
        j++;
    }
}


int main()
{
    int arr1[] = {1, 3, 5, 7};
    int m = sizeof(arr1) / sizeof(arr1[0]);

    int arr2[] = {2, 3, 6, 8};
    int n = sizeof(arr2) / sizeof(arr2[0]);

    int arr3[m + n];
    mergeArrays(arr1, arr2, m, n, arr3);

    for (int i = 0; i < m + n; i++)
        cout << arr3[i] << " ";

    return 0;
}


// using STL
// class Solution{
//     public:
//     //Function to return the count of number of elements in union of two arrays.
//     int doUnion(int a[], int n, int b[], int m)  {
//         set<int> s;
        
//         for(int i=0;i<n;i++)
//             s.insert(a[i]);
        
//         for(int i=0;i<m;i++)    
//             s.insert(b[i]);
        
  
//     return s.size();
        
//     }
// };