#include <iostream>
using namespace std;
#include <limits.h>
#include <string>
void swapAlternate(int arr[], int n)
{
    int i = 0;
    while (i < n)
    {
// i+1 issliyea hai kuki array i+1 ke andar  lie hona chiyea na tab na i+! se swap ho ga

        if (i + 1 < n)
        {
            swap(arr[i], arr[i + 1]);
        }
        i = i + 2;
    }
}
int main()
{
    int arr[] = {2, 7, 5, 4, 9, 8, 1};

    swapAlternate(arr, 7);
     for(int i=0;i<7;i++)
     cout<<arr[i]<<" ";
    return 0;
}

// SOMETHING WORNG WITH THIS CODE DONT USE
// #include <iostream>
// using namespace std;
// int swappalternate(int arr[], int n)
// {
//       int i = 0;
//     while (i < n){
    
//         if (i + 1 < n)
//         {
//             swap(arr[i], arr[i + 1]);
//         }
//         i = i + 2;
//     }
// }

// int main()
// {
//     int arr[] = {2, 7, 5, 4, 9, 8};

//     cout << swappalternate(arr, 6);
//     return 0;
// }