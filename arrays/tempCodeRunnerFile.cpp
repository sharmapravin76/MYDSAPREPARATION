// commonelement in three sorted arrays

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





