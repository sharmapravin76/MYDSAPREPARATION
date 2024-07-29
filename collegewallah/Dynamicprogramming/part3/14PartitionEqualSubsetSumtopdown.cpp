#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;
class Solution
{
public:
    vector<vector<int>> dp;
    bool f(vector<int> &arr, int i, int k)
    {
        if (k == 0)
            return true;
        if (i == arr.size())
            return false;
        if (dp[i][k] != -1)
            return dp[i][k];
        if (arr[i] <= k)
        {
            // we can include or exclude
            return dp[i][k] = f(arr, i + 1, k - arr[i]) or f(arr, i + 1, k);
        }
        else
        {
            // always exclude
            return dp[i][k] = f(arr, i + 1, k);
        }
    }
    bool canPartition(vector<int> &nums)
    {

        int s = 0;
        for (int i = 0; i < nums.size(); i++)
            s += nums[i];
        if (s % 2 != 0)
            return false;
               dp.clear();
           dp.resize(205,vector<int>(20005,-1));
        return f(nums, 0, s / 2);
    }
};

// explanation
// Sure, let's dry run the provided code step by step with an example input. The code aims to solve the problem of determining whether a given array can be partitioned into two subsets with equal sums.

// Let's take the following example:

// cpp
// Copy code
// vector<int> nums = {1, 5, 11, 5};
// Initial Setup
// The canPartition function is called with nums = {1, 5, 11, 5}.
// Initialize s (sum of all elements in nums): s = 1 + 5 + 11 + 5 = 22.
// Check if s is even: 22 % 2 == 0, so proceed.
// The target for each subset is s / 2 = 22 / 2 = 11.
// Initialize the dp table with dimensions 205 x 20005, all values set to -1.
// Call the helper function f(nums, 0, 11).
// Function Call Stack and Execution
// Let's break down the recursive calls to f:

// Call: f(nums, 0, 11)
// Check if k == 0: No (k = 11).
// Check if i == arr.size(): No (i = 0 and arr.size() = 4).
// Check if dp[i][k] != -1: No (dp[0][11] = -1).
// Check if arr[i] <= k: Yes (arr[0] = 1 and k = 11).
// Include arr[0] in the subset:

// Call f(nums, 1, 11 - 1) → f(nums, 1, 10).
// Exclude arr[0] from the subset:

// Call f(nums, 1, 11).
// Call: f(nums, 1, 10)
// Check if k == 0: No (k = 10).
// Check if i == arr.size(): No (i = 1 and arr.size() = 4).
// Check if dp[i][k] != -1: No (dp[1][10] = -1).
// Check if arr[i] <= k: Yes (arr[1] = 5 and k = 10).
// Include arr[1] in the subset:

// Call f(nums, 2, 10 - 5) → f(nums, 2, 5).
// Exclude arr[1] from the subset:

// Call f(nums, 2, 10).
// Call: f(nums, 2, 5)
// Check if k == 0: No (k = 5).
// Check if i == arr.size(): No (i = 2 and arr.size() = 4).
// Check if dp[i][k] != -1: No (dp[2][5] = -1).
// Check if arr[i] <= k: No (arr[2] = 11 and k = 5).
// Exclude arr[2] from the subset:

// Call f(nums, 3, 5).
// Call: f(nums, 3, 5)
// Check if k == 0: No (k = 5).
// Check if i == arr.size(): No (i = 3 and arr.size() = 4).
// Check if dp[i][k] != -1: No (dp[3][5] = -1).
// Check if arr[i] <= k: Yes (arr[3] = 5 and k = 5).
// Include arr[3] in the subset:

// Call f(nums, 4, 5 - 5) → f(nums, 4, 0).
// Exclude arr[3] from the subset:

// Call f(nums, 4, 5).
// Call: f(nums, 4, 0)
// Check if k == 0: Yes (k = 0).
// Return true.
// Call: f(nums, 4, 5)
// Check if k == 0: No (k = 5).
// Check if i == arr.size(): Yes (i = 4 and arr.size() = 4).
// Return false.
// Now, backtrack and propagate the results:

// dp[3][5] = true (from f(nums, 4, 0)).
// dp[2][5] = true (since dp[3][5] = true).
// dp[1][10] = true (since dp[2][5] = true).
// dp[0][11] = true (since dp[1][10] = true).
// The final return value of canPartition is true, meaning the array can be partitioned into two subsets with equal sums.

// Include arr[0] in the subset:

// Call f(nums, 1, 11 - 1) → f(nums, 1, 10).
// Exclude arr[0] from the subset:

// Call f(nums, 1, 11).
// ChatGPT
// Sure, let's dry run the provided code step by step with an example input. The code aims to solve the problem of determining whether a given array can be partitioned into two subsets with equal sums.

// Let's take the following example:

// cpp
// Copy code
// vector<int> nums = {1, 5, 11, 5};
// Initial Setup
// The canPartition function is called with nums = {1, 5, 11, 5}.
// Initialize s (sum of all elements in nums): s = 1 + 5 + 11 + 5 = 22.
// Check if s is even: 22 % 2 == 0, so proceed.
// The target for each subset is s / 2 = 22 / 2 = 11.
// Initialize the dp table with dimensions 205 x 20005, all values set to -1.
// Call the helper function f(nums, 0, 11).
// Function Call Stack and Execution
// Let's break down the recursive calls to f:

// Call: f(nums, 0, 11)
// Check if k == 0: No (k = 11).
// Check if i == arr.size(): No (i = 0 and arr.size() = 4).
// Check if dp[i][k] != -1: No (dp[0][11] = -1).
// Check if arr[i] <= k: Yes (arr[0] = 1 and k = 11).
// Include arr[0] in the subset:

// Call f(nums, 1, 11 - 1) → f(nums, 1, 10).
// Exclude arr[0] from the subset:

// Call f(nums, 1, 11).
// Call: f(nums, 1, 10)
// Check if k == 0: No (k = 10).
// Check if i == arr.size(): No (i = 1 and arr.size() = 4).
// Check if dp[i][k] != -1: No (dp[1][10] = -1).
// Check if arr[i] <= k: Yes (arr[1] = 5 and k = 10).
// Include arr[1] in the subset:

// Call f(nums, 2, 10 - 5) → f(nums, 2, 5).
// Exclude arr[1] from the subset:

// Call f(nums, 2, 10).
// Call: f(nums, 2, 5)
// Check if k == 0: No (k = 5).
// Check if i == arr.size(): No (i = 2 and arr.size() = 4).
// Check if dp[i][k] != -1: No (dp[2][5] = -1).
// Check if arr[i] <= k: No (arr[2] = 11 and k = 5).
// Exclude arr[2] from the subset:

// Call f(nums, 3, 5).
// Call: f(nums, 3, 5)
// Check if k == 0: No (k = 5).
// Check if i == arr.size(): No (i = 3 and arr.size() = 4).
// Check if dp[i][k] != -1: No (dp[3][5] = -1).
// Check if arr[i] <= k: Yes (arr[3] = 5 and k = 5).
// Include arr[3] in the subset:

// Call f(nums, 4, 5 - 5) → f(nums, 4, 0).
// Exclude arr[3] from the subset:

// Call f(nums, 4, 5).
// Call: f(nums, 4, 0)
// Check if k == 0: Yes (k = 0).
// Return true.
// Call: f(nums, 4, 5)
// Check if k == 0: No (k = 5).
// Check if i == arr.size(): Yes (i = 4 and arr.size() = 4).
// Return false.
// Now, backtrack and propagate the results:

// dp[3][5] = true (from f(nums, 4, 0)).
// dp[2][5] = true (since dp[3][5] = true).
// dp[1][10] = true (since dp[2][5] = true).
// dp[0][11] = true (since dp[1][10] = true).
// The final return value of canPartition is true, meaning the array can be partitioned into two subsets with equal sums.