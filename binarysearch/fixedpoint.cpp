// // value and index dono same hai
// #include <iostream>
// using namespace std;
// int fixedpoint(int arr[], int n, int target)
// {

//     int start = 0;
//     int end = n - 1;
//     int ans;
//     int mid = start + (end - start) / 2;
//     while (start <= end)
//     {
//         int x = arr[mid];
//         if (x== mid)
//         {
//             return mid;
//         }
//         else if (x < mid)
//         {
//             start = mid + 1;
//         }
//         else
//         {
//             end = mid - 1;
//         }
//         mid = start + (end - start) / 2;
//     }
//     return -1;
// }
// int main()
// {
//     int arr[] = {-10, -5, 2, 3,4, 5};
//     int target = 4;
//     int n = 6;
//     cout << fixedpoint(arr, n, target);

//     return 0;
// }

// import java.util.*;
// public class Main
// {
// 	public static void main(String[] args) {
// 		Scanner in=new Scanner (System.in);

// 		int arr[]=new int [5];
// 		for(int i=0;i<5;i++)
// 		{
// 		    arr[i]=in.nextInt();
// 		}

// 		for(int i=0;i<5;i++)
// 		{
// 		    if(arr[i]==i)
// 		    System.out.println(i);
// 		}
// 	}
// }

// #include <iostream>
// using namespace std;
// int fixedpoint(int arr[], int n)
// {
//     int start = 0;
//     int end = n - 1;
    
//     int mid = start + (end - start) / 2;
//     while (start <= end)
//     {
//         if (arr[mid] == mid)
//         {
//             return mid;
//         }
//         else if (arr[mid] <mid)
        
//         {
//             start = mid + 1;
//             // cout<<start<<endl;
//         }
//         else
//         {
//             end= mid +1;
//             // cout<<end<<endl;
//         }
//         mid = start + (end - start) / 2;
//     }
    
//     return -1;
// }

// int main()
// {
//     int arr[] = {-10,-5,1,2,3,5};
//     int n = 6;
//     cout << fixedpoint(arr, n);
//     return 0;
// }




#include <iostream>
using namespace std;
int fixedpoint(int arr[], int n)
{
    int start = 0;
    int end = n - 1;
    
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (arr[mid] == mid)
        {
            return mid;
        }
        else if (arr[mid] >mid)
        
        {
            end = mid - 1;
            // cout<<start<<endl;
        }
        else
        {
            start= mid +1;
            // cout<<end<<endl;
        }
        mid = start + (end - start) / 2;
    }
    
    return -1;
}

int main()
{
    int arr[] = {0, 2, 5, 8, 17};
    int n = 5;
    cout << fixedpoint(arr, n);
    return 0;
}