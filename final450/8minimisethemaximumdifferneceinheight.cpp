// #include <iostream>
// #include <algorithm>
// #include <limits.h>
// using namespace std;
// int minimise(int arr[], int n, int k)
// {
//     sort(arr, arr + n);
//     // int ans = 0;
//     int maxh = arr[n - 1];
//     int minh = arr[0];
//     int ans = maxh - minh;
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] - k < 0)
//         {

//             maxh = max(arr[i - 1] + k, arr[n - 1] - k);
//             minh = min(arr[0] + k, arr[i] - k);
//             ans = min(ans, maxh - minh);
//         }
//     }
//     return ans;
// }
// int main()
// {
//     // int arr[] = {1, 10, 5, 8};
//     // int arr[] = {1, 15, 10};
//     int arr[] = {1, 15, 10};
//    cout<<minimise(arr, 3, 6);

// //     // }
// // cout<<ans;
//     return 0;
// }

// C++ Code for the Approach

// #include <bits/stdc++.h>
// using namespace std;

// // User function Template
// int getMinDiff(int arr[], int n, int k)
// {
// 	sort(arr, arr + n);

// 	// Maximum possible height difference
// 	int ans = arr[n - 1] - arr[0];

// 	int tempmin, tempmax;
// 	tempmin = arr[0];
// 	tempmax = arr[n - 1];

// 	for (int i = 1; i < n; i++) {

// 		// If on subtracting k we got
// 		// negative then continue
// 		if (arr[i] - k < 0)
// 			continue;

// 		// Minimum element when we
// 		// add k to whole array
// 		tempmin = min(arr[0] + k, arr[i] - k);

// 		// Maximum element when we
// 		// subtract k from whole array
// 		tempmax = max(arr[i - 1] + k, arr[n - 1] - k);

// 		ans = min(ans, tempmax - tempmin);
// 	}
// 	return ans;
// }

// // Driver Code Starts
// int main()
// {

// 	int k = 6, n = 6;
// 	int arr[n] =  {1, 15, 10};

// 	// Function Call
// 	getMinDiff(arr, n, k);
// 	cout << ans;
// }

// #include <iostream>
// #include<algorithm>
// using namespace std;

// int minimise(int arr[], int n, int k)
// {
// 	for (int i = 0; i < n; i++)
// 	{

// 		if (i < k)
// 			arr[i] = arr[i] + k;

// 		else
// 			arr[i]= arr[i] - k;
// 	}
// 	sort(arr,arr+n);
// 	return (arr[n-1]-arr[0]);
// }
// int main()
// {
// 	int arr[] = {3, 9, 12, 16, 20};
// 	cout << minimise(arr, 5, 6);

// 	return 0;
// }

#include <iostream>
#include <algorithm>
#include <limits.h>
using namespace std;
int maximumtheheight(int arr[], int n, int k)
{
	sort(arr, arr + n);
	int ans = arr[n - 1] - arr[0];
	for (int i = 1; i < n; i++)
	{
		// x=arr[i-1];
		// y=arr[i];
		if (arr[i] >= k)
		{
			int maxl = max(arr[n - 1] - k, arr[i - 1] + k);
			int minl = min(arr[0] + k, arr[i] - k);

			int diff = maxl - minl;
			ans = min(ans, diff);
		}
	}
	return ans;
}
int main()
{
	int arr[] = {1, 5, 8, 10};
	cout << maximumtheheight(arr, 4, 2);
	return 0;
}
