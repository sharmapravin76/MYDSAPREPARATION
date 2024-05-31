// // 1) Use two index variables i and j, initial values i = 0, j = 0 
// // 2) If arr1[i] is smaller than arr2[j] then print arr1[i] and increment i. 
// // 3) If arr1[i] is greater than arr2[j] then print arr2[j] and increment j. 
// // 4) If both are same then print any of them and increment both i and j. 
// // 5) Print remaining elements of the larger array









// 1) Use two index variables i and j, initial values i = 0, j = 0 
// 2) If arr1[i] is smaller than arr2[j] then increment i. 
// 3) If arr1[i] is greater than arr2[j] then increment j. 
// 4) If both are same then print any of them and increment both i and j.
// // C++ program to find intersection of
// // two sorted arrays
// #include <bits/stdc++.h>
// using namespace std;

// /* Function prints Intersection of arr1[] and arr2[]
// m is the number of elements in arr1[]
// n is the number of elements in arr2[] */
// void printIntersection(int arr1[], int arr2[], int m, int n)
// {
// 	int i = 0, j = 0;
// 	while (i < m && j < n) {
// 		if (arr1[i] < arr2[j])
// 			i++;
// 		else if (arr2[j] < arr1[i])
// 			j++;
// 		else /* if arr1[i] == arr2[j] */
// 		{
// 			cout << arr2[j] << " ";
// 			i++;
// 			j++;
// 		}
// 	}
// }

// /* Driver program to test above function */
// int main()
// {
// 	int arr1[] = { 1, 2, 4, 5, 6 };
// 	int arr2[] = { 2, 3, 5, 7 };

// 	int m = sizeof(arr1) / sizeof(arr1[0]);
// 	int n = sizeof(arr2) / sizeof(arr2[0]);

// 	// Function calling
// 	printIntersection(arr1, arr2, m, n);

// 	return 0;
// }


// // 1) Use two index variables i and j, initial values i = 0, j = 0 
// // 2) If arr1[i] is smaller than arr2[j] then print arr1[i] and increment i. 
// // 3) If arr1[i] is greater than arr2[j] then print arr2[j] and increment j. 
// // 4) If both are same then print any of them and increment both i and j. 
// // 5) Print remaining elements of the larger array


#include<iostream>
using namespace std;
void intersection(int arr1[],int arr2[],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if (arr1[i]==arr2[j])
            {
                cout<<arr1[i]<<", ";
            }
        }
    }
}

int main(){
    int arr1[]={1,2,3,4,5};
    int arr2[]={2,3,4,6,7};
    intersection(arr1,arr2,5);
    return 0;
}