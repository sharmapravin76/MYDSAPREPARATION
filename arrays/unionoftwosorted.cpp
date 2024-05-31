// // C++ program to find union of
// // two sorted arrays
// #include <bits/stdc++.h>
// using namespace std;

// /* Function prints union of arr1[] and arr2[]
// m is the number of elements in arr1[]
// n is the number of elements in arr2[] */
// void printUnion(int arr1[], int arr2[], int m, int n)
// {
// 	int i = 0, j = 0;
// 	while (i < m && j < n) {
// 		if (arr1[i] < arr2[j])
// 			cout << arr1[i++] << " ";

// 		else if (arr2[j] < arr1[i])
// 			cout << arr2[j++] << " ";

// 		else {
// 			cout << arr2[j++] << " ";
// 			i++;
// 		}
// 	}

// 	/* Print remaining elements of the larger array */
// 	while (i < m)
// 		cout << arr1[i++] << " ";

// 	while (j < n)
// 		cout << arr2[j++] << " ";
// }

// /* Driver program to test above function */
// int main()
// {
// 	int arr1[] = { 1, 2, 4, 5, 6 };
// 	int arr2[] = { 2, 3, 5, 7 };

// int m = sizeof(arr1) / sizeof(arr1[0]);
// int n = sizeof(arr2) / sizeof(arr2[0]);

// 	// Function calling
// 	printUnion(arr1, arr2, m, n);

// 	return 0;
// }

// #include <iostream>
// using namespace std;

// void unionn(int arr1[], int arr2[])
// {
//     int n = sizeof(arr2);
//     int m = sizeof(arr1);
//     // int k=sizeof(arr3);
//     int arr3[n + m];

//     int n = 5;
//     int m = 3;
//     int arr3[n + m];

//     int *arr3 = new int[n + m];

//     for (int k = 0; k < n; k++)
//     {
//         arr3[k] = arr1[k];
//     }
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i + 1; j < m; j++)
//         {
//             if (arr1[i] == arr2[j])

//             {
//             }
//         }
//     }
// }
// int main()
// {
//     int arr1[] = {1, 2, 3, 4, 5, 6};
//     int arr2[] = {2, 3, 4, 5, 6};

//     unionn(arr1, arr2);

//     return 0;
// }

// {

// a=    {1, 2, 3, 4, 5, 6};
// b=    {2, 3, 4, 5, 6};

//   c=  1, 2, 3, 4, 5, 6, 2, 3, 4, 5, 6;
// }

// #include <iostream>
// using namespace std;

// void unionn(int arr1[], int arr2[])
// {
//     int n = sizeof(arr1);
//     int m = sizeof(arr2);
//     // int arr3[n + m];

//     // int n = 5;
//     // int m = 3;
//     int arr3[n + m];
//     // for(int  )

//     // int *arr3 = new int[n + m];
//     int k = 0;
//     for (k = 0; k<=n; k++)
//     {
//         arr3[k] = arr1[k];
//     }
//     for (int h = 0; h<=m; h++)
//     {
//         arr3[k] = arr2[h];
//         k++;
//     }
//     cout << arr3 << ", ";
//      for(int i=0;i<(n+m);i++)
//     {
//         cout<<arr3[i]<<" ,";
//     }
//     // for (int i = 0; i < n; i++)
//     // {
//     //     for (int j = i + 1; j < m; j++)
//     //     {
//     //         if (arr1[i] == arr2[j])

//     //     }
//     //     }
//     // }
// }
// int main()
// {
//     int arr1[] = {1, 2, 3, 4, 5, 6};
//     int arr2[] = {2, 3, 4, 5, 6};

//     unionn(arr1, arr2);

//     return 0;
// }

// #include <iostream>
// using namespace std;
// void unionn(int arr1[], int arr2[], int m, int n)
// {
//     int i = 0, j = 0;

//     while (i < m && j < n)
//     {
//         if (arr1[i] < arr2[j]){
//             cout << arr1[i] << " ";
//         i++;
//         }

//             else if (arr2[j] < arr1[i])
//             {
//                 cout << arr2[j] << " ";

//         j++;
//             }
//         else
//         {
//             cout << arr2[j] << " ";
//             j++;
//             i++;
//         }
//     }

//     while (i < m)

//         cout << arr1[i++] << " ";
//     while (j < n)
//         cout << arr2[j++] << " ";
// }

// int main()
// {
//     int arr1[] = {1, 2, 3, 4, 5, 6};
//     int arr2[] = {2, 3, 4, 5, 8};

//     int m = sizeof(arr1) / sizeof(arr1[0]);
//     int n = sizeof(arr2) / sizeof(arr2[0]);

//     unionn(arr1, arr2, m, n);

//     return 0;
// }

// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// void unionn(int arr1[], int arr2[])
// {

//     int i = 0, j = 0;
//     int m = sizeof(arr1) / sizeof(arr1[0]);
//     int n = sizeof(arr2) / sizeof(arr2[0]);

//     while (i < m && j < n)
//     {
//         if (arr1[i] < arr2[j])
//             cout << arr1[i++] << " ";

//         else if (arr2[j] < arr1[i])
//             cout << arr2[j++] << " ";

//         else
//         {
//             cout << arr2[j++] << " ";
//             i++;
//         }
//     }

//     while (i < m)

//         cout << arr1[i++] << " ";
//     while (j < n)
//         cout << arr2[j++] << " ";
// }

// int main()
// {
//     int arr1[] = {1, 2, 3, 4, 5, 6};
//     int arr2[] = {2, 3, 4, 5, 8};
//     unionn(arr1, arr2);

//     return 0;
// }
#include <iostream>
#include <vector>
using namespace std;

void unionn(int arr1[], int m, int arr2[], int n)
{
    int i = 0, j = 0;

    while (i < m && j < n)
    {
        if (arr1[i] < arr2[j])
            cout << arr1[i++] << " ";
        else if (arr2[j] < arr1[i])
            cout << arr2[j++] << " ";
        else
        {
            cout << arr2[j++] << " ";
            i++;
        }
    }

    while (i < m)
        cout << arr1[i++] << " ";

    while (j < n)
        cout << arr2[j++] << " ";
}

int main()
{
    int arr1[] = {1, 2, 3, 4, 5, 6};
    int arr2[] = {2, 3, 4, 5, 8};

    int m = sizeof(arr1) / sizeof(arr1[0]);
    int n = sizeof(arr2) / sizeof(arr2[0]);

    unionn(arr1, m, arr2, n);

    return 0;
}