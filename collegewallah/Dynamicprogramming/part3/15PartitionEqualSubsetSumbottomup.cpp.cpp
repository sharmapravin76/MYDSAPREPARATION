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
        int n = nums.size();
        for (int i = 0; i < nums.size(); i++)
            s += nums[i];
        if (s % 2 != 0)
            return false;
        dp.clear();
        dp.resize(205, vector<int>(20005, false));
        int k = s / 2;
        for (int i = 0; i < n; i++)
            dp[i][0] = true;

        for (int i = n - 1; i >= 0; i--)
        {
            for (int j = 1; j <= k; j++)
            {

                if (nums[i] <= j)
                    dp[i][j] = dp[i + 1][j - nums[i]] or dp[i + 1][j];
                else
                {
                    dp[i][j] = dp[i + 1][j];
                }
            }
        }

        return dp[0][k];
    }
};

// disscusion
// Let's break down the process of filling the dynamic programming table (dp) step-by-step, focusing specifically on the case when j = 5.

// Initialization
// Calculate total sum s:
// 𝑠
// =
// 1
// +
// 5
// +
// 11
// +
// 5
// =
// 22
// s=1+5+11+5=22
// Check if s is even:
// 𝑠
// %
// 2
// =
// =
// 0
// (true, so we continue)
// s%2==0(true, so we continue)
// Set target sum k:
// 𝑘
// =
// 𝑠
// /
// 2
// =
// 11
// k=s/2=11
// Initialize DP table dp:
// dp.resize(205, vector<int>(20005, false))
// dp.resize(205, vector<int>(20005, false))
// Set base case for dp[i][0]:
// for (int i = 0; i < n; i++) dp[i][0] = true;
// for (int i = 0; i < n; i++) dp[i][0] = true;
// Dynamic Programming Table Filling
// Loop Over Elements and Possible Sums
// We will iterate over the elements from the last to the first, and for each element, iterate over possible sums from 1 to k.

// Iteration for i = 3 (nums[3] = 5)
// Goal: Update dp[3][j] for all j from 1 to 11.

// For each j, check if nums[3] (which is 5) can be part of a subset that sums to j:

// If nums[3] <= j, we can include it or exclude it:

// dp[3][j] = dp[4][j - nums[3]] || dp[4][j]
// dp[3][j] = dp[4][j - nums[3]] || dp[4][j]
// If nums[3] > j, we cannot include it:

// dp[3][j] = dp[4][j]
// dp[3][j] = dp[4][j]
// Since dp[4][...] is out of bounds, we'll treat these as false (except for dp[4][0] which is true by base case).

// Updates for j from 1 to 11:

// j = 1: nums[3] = 5 > 1: 
// dp[3][1] = dp[4][1] = false
// dp[3][1] = dp[4][1] = false
// j = 2: nums[3] = 5 > 2: 
// dp[3][2] = dp[4][2] = false
// dp[3][2] = dp[4][2] = false
// j = 3: nums[3] = 5 > 3: 
// dp[3][3] = dp[4][3] = false
// dp[3][3] = dp[4][3] = false
// j = 4: nums[3] = 5 > 4: 
// dp[3][4] = dp[4][4] = false
// dp[3][4] = dp[4][4] = false
// j = 5: nums[3] = 5 <= 5: 
// dp[3][5] = dp[4][0] || dp[4][5] = true || false = true
// dp[3][5] = dp[4][0] || dp[4][5] = true || false = true
// j = 6: nums[3] = 5 <= 6: 
// dp[3][6] = dp[4][1] || dp[4][6] = false || false = false
// dp[3][6] = dp[4][1] || dp[4][6] = false || false = false
// j = 7: nums[3] = 5 <= 7: 
// dp[3][7] = dp[4][2] || dp[4][7] = false || false = false
// dp[3][7] = dp[4][2] || dp[4][7] = false || false = false
// j = 8: nums[3] = 5 <= 8: 
// dp[3][8] = dp[4][3] || dp[4][8] = false || false = false
// dp[3][8] = dp[4][3] || dp[4][8] = false || false = false
// j = 9: nums[3] = 5 <= 9: 
// dp[3][9] = dp[4][4] || dp[4][9] = false || false = false
// dp[3][9] = dp[4][4] || dp[4][9] = false || false = false
// j = 10: nums[3] = 5 <= 10: 
// dp[3][10] = dp[4][5] || dp[4][10] = false || false = false
// dp[3][10] = dp[4][5] || dp[4][10] = false || false = false
// j = 11: nums[3] = 5 <= 11: 
// dp[3][11] = dp[4][6] || dp[4][11] = false || false = false
// dp[3][11] = dp[4][6] || dp[4][11] = false || false = false
// After this iteration, the DP table is updated as follows:

// i \ k	0	1	2	3	4	5	6	7	8	9	10	11
// 0	true	false	false	false	false	false	false	false	false	false	false	false
// 1	true	false	false	false	false	false	false	false	false	false	false	false
// 2	true	false	false	false	false	false	false	false	false	false	false	false
// 3	true	false	false	false	false	true	false	false	false	false	false	false
// Iteration for i = 2 (nums[2] = 11)
// Goal: Update dp[2][j] for all j from 1 to 11.

// For each j, check if nums[2] (which is 11) can be part of a subset that sums to j:

// If nums[2] <= j, we can include it or exclude it:

// dp[2][j] = dp[3][j - nums[2]] || dp[3][j]
// dp[2][j] = dp[3][j - nums[2]] || dp[3][j]
// If nums[2] > j, we cannot include it:

// dp[2][j] = dp[3][j]
// dp[2][j] = dp[3][j]
// Updates for j from 1 to 11:

// j = 1: nums[2] = 11 > 1: 
// dp[2][1] = dp[3][1] = false
// dp[2][1] = dp[3][1] = false
// j = 2: nums[2] = 11 > 2: 
// dp[2][2] = dp[3][2] = false
// dp[2][2] = dp[3][2] = false
// j = 3: nums[2] = 11 > 3: 
// dp[2][3] = dp[3][3] = false
// dp[2][3] = dp[3][3] = false
// j = 4: nums[2] = 11 > 4: 
// dp[2][4] = dp[3][4] = false
// dp[2][4] = dp[3][4] = false
// j = 5: nums[2] = 11 > 5: 
// dp[2][5] = dp[3][5] = true
// dp[2][5] = dp[3][5] = true
// j = 6: nums[2] = 11 > 6: 
// dp[2][6] = dp[3][6] = false
// dp[2][6] = dp[3][6] = false
// j = 7: nums[2] = 11 > 7: 
// dp[2][7] = dp[3][7] = false
// dp[2][7] = dp[3][7] = false
// j = 8: nums[2] = 11 > 8: 
// dp[2][8] = dp[3][8] = false
// dp[2][8] = dp[3][8] = false
// j = 9: nums[2] = 11 > 9: 
// dp[2][9] = dp[3][9] = false
// dp[2][9] = dp[3][9] = false
// j = 10: nums[2] = 11 > 10: 
// dp[2][10] = dp[3][10] = false
// dp[2][10] = dp[3][10] = false
// j = 11: nums[2] = 11 <= 11: 
// dp[2][11] = dp[3][0] || dp[3][11] = true || false = true
// dp[2][11] = dp[3][0] || dp[3][11] = true || false = true
// After this iteration, the DP table is updated as follows:

// i \ k	0	1	2	3	4	5	6	7	8	9	10	11
// 0	true	false	false	false	false	false	false	false	false	false	false	false
// 1	true	false	false	false	false	false	false	false	false	false	false	false
// 2	true	false	false	false	false	true	false	false	false	false	false	true
// 3	true	false	false	false	false	true	false	false	false	false	false	false
// Iteration for i = 1 (nums[1] = 5)
// Goal: Update dp[1][j] for all j from 1 to 11.

// For each j, check if nums[1] (which is 5) can be part of a subset that sums to j:

// If nums[1] <= j, we can include it or exclude it:

// dp[1][j] = dp[2][j - nums[1]] || dp[2][j]
// dp[1][j] = dp[2][j - nums[1]] || dp[2][j]
// If nums[1] > j, we cannot include it:

// dp[1][j] = dp[2][j]
// dp[1][j] = dp[2][j]
// Updates for j from 1 to 11:

// j = 1: nums[1] = 5 > 1: 
// dp[1][1] = dp[2][1] = false
// dp[1][1] = dp[2][1] = false
// j = 2: nums[1] = 5 > 2: 
// dp[1][2] = dp[2][2] = false
// dp[1][2] = dp[2][2] = false
// j = 3: nums[1] = 5 > 3: 
// dp[1][3] = dp[2][3] = false
// dp[1][3] = dp[2][3] = false
// j = 4: nums[1] = 5 > 4: 
// dp[1][4] = dp[2][4] = false
// dp[1][4] = dp[2][4] = false
// j = 5: nums[1] = 5 <= 5: 
// dp[1][5] = dp[2][0] || dp[2][5] = true || true = true
// dp[1][5] = dp[2][0] || dp[2][5] = true || true = true
// j = 6: nums[1] = 5 <= 6: 
// dp[1][6] = dp[2][1] || dp[2][6] = false || false = false
// dp[1][6] = dp[2][1] || dp[2][6] = false || false = false
// j = 7: nums[1] = 5 <= 7: 
// dp[1][7] = dp[2][2] || dp[2][7] = false || false = false
// dp[1][7] = dp[2][2] || dp[2][7] = false || false = false
// j = 8: nums[1] = 5 <= 8: 
// dp[1][8] = dp[2][3] || dp[2][8] = false || false = false
// dp[1][8] = dp[2][3] || dp[2][8] = false || false = false
// j = 9: nums[1] = 5 <= 9: 
// dp[1][9] = dp[2][4] || dp[2][9] = false || false = false
// dp[1][9] = dp[2][4] || dp[2][9] = false || false = false
// j = 10: nums[1] = 5 <= 10: 
// dp[1][10] = dp[2][5] || dp[2][10] = true || false = true
// dp[1][10] = dp[2][5] || dp[2][10] = true || false = true
// j = 11: nums[1] = 5 <= 11: 
// dp[1][11] = dp[2][6] || dp[2][11] = false || true = true
// dp[1][11] = dp[2][6] || dp[2][11] = false || true = true
// After this iteration, the DP table is updated as follows:

// i \ k	0	1	2	3	4	5	6	7	8	9	10	11
// 0	true	false	false	false	false	false	false	false	false	false	false	false
// 1	true	false	false	false	false	true	false	false	false	false	true	true
// 2	true	false	false	false	false	true	false	false	false	false	false	true
// 3	true	false	false	false	false	true	false	false	false	false	false	false
// Iteration for i = 0 (nums[0] = 1)
// Goal: Update dp[0][j] for all j from 1 to 11.

// For each j, check if nums[0] (which is 1) can be part of a subset that sums to j:

// If nums[0] <= j, we can include it or exclude it:

// dp[0][j] = dp[1][j - nums[0]] || dp[1][j]
// dp[0][j] = dp[1][j - nums[0]] || dp[1][j]
// If nums[0] > j, we cannot include it:

// dp[0][j] = dp[1][j]
// dp[0][j] = dp[1][j]
// Updates for j from 1 to 11:

// j = 1: nums[0] = 1 <= 1: 
// dp[0][1] = dp[1][0] || dp[1][1] = true || false = true
// dp[0][1] = dp[1][0] || dp[1][1] = true || false = true
// j = 2: nums[0] = 1 <= 2: 
// dp[0][2] = dp[1][1] || dp[1][2] = false || false = false
// dp[0][2] = dp[1][1] || dp[1][2] = false || false = false
// j = 3: nums[0] = 1 <= 3: 
// dp[0][3] = dp[1][2] || dp[1][3] = false || false = false
// dp[0][3] = dp[1][2] || dp[1][3] = false || false = false
// j = 4: nums[0] = 1 <= 4: 
// dp[0][4] = dp[1][3] || dp[1][4] = false || false = false
// dp[0][4] = dp[1][3] || dp[1][4] = false || false = false
// j = 5: nums[0] = 1 <= 5: 
// dp[0][5] = dp[1][4] || dp[1][5] = false || true = true
// dp[0][5] = dp[1][4] || dp[1][5] = false || true = true
// j = 6: nums[0] = 1 <= 6: 
// dp[0][6] = dp[1][5] || dp[1][6] = true || false = true
// dp[0][6] = dp[1][5] || dp[1][6] = true || false = true
// j = 7: nums[0] = 1 <= 7: 
// dp[0][7] = dp[1][6] || dp[1][7] = false || false = false
// dp[0][7] = dp[1][6] || dp[1][7] = false || false = false
// j = 8: nums[0] = 1 <= 8: 
// dp[0][8] = dp[1][7] || dp[1][8] = false || false = false
// dp[0][8] = dp[1][7] || dp[1][8] = false || false = false
// j = 9: nums[0] = 1 <= 9: 
// dp[0][9] = dp[1][8] || dp[1][9] = false || false = false
// dp[0][9] = dp[1][8] || dp[1][9] = false || false = false
// j = 10: nums[0] = 1 <= 10: 
// dp[0][10] = dp[1][9] || dp[1][10] = false || true = true
// dp[0][10] = dp[1][9] || dp[1][10] = false || true = true
// j = 11: nums[0] = 1 <= 11: 
// dp[0][11] = dp[1][10] || dp[1][11] = true || true = true
// dp[0][11] = dp[1][10] || dp[1][11] = true || true = true
// After this iteration, the final DP table is:

// i \ k	0	1	2	3	4	5	6	7	8	9	10	11
// 0	true	true	false	false	false	true	true	false	false	false	true	true
// 1	true	false	false	false	false	true	false	false	false	false	true	true
// 2	true	false	false	false	false	true	false	false	false	false	false	true
// 3	true	false	false	false	false	true	false	false				

// nums[3] <= j but here what is the value of j
// ChatGPT
// Let's clarify the scenario where nums[3] <= j by focusing on a specific value of j. In this case, nums[3] is 5. We need to check the value of j for which the condition nums[3] <= j holds true.

// We previously discussed updating the DP table for i = 3 (where nums[3] = 5). Here’s how the value of j affects the table:

// Iteration for i = 3 (nums[3] = 5)
// The Case for j = 5:
// Condition Check: nums[3] (5) <= j (5) is true.

// Update Formula:

// dp[3][5] = dp[4][5 - 5] || dp[4][5]
// dp[3][5] = dp[4][5 - 5] || dp[4][5]

// dp[3][5] = dp[4][0] || dp[4][5]
// dp[3][5] = dp[4][0] || dp[4][5]
// Since dp[4][0] is true (initial condition) and dp[4][5] is false (out of bounds), we get:

// dp[3][5] = true
// dp[3][5] = true
// The Case for j Values Greater Than 5 (6 to 11):
// Condition Check: nums[3] (5) <= j is still true for these values.

// Update Formula:

// dp[3][j] = dp[4][j - 5] || dp[4][j]
// dp[3][j] = dp[4][j - 5] || dp[4][j]
// Since dp[4][j - 5] is false for j - 5 values being out of bounds and dp[4][j] is false for j greater than 5, we get:

// dp[3][6] = dp[4][1] || dp[4][6] = false || false = false
// dp[3][6] = dp[4][1] || dp[4][6] = false || false = false
// Similarly for other values of j from 7 to 11.

// The Case for j Less Than 5 (1 to 4):
// Condition Check: nums[3] (5) > j is true for these values.
// Update Formula:
// dp[3][j] = dp[4][j]
// dp[3][j] = dp[4][j]

// Since dp[4][j] is false for j less than 5, we get:
// dp[3][1] = dp[4][1] = false
// dp[3][1] = dp[4][1] = false

// Similarly for other values of j from 2 to 4.
// Summary for j Values
// j = 5: The table is updated to true.
// j > 5: The table remains false.
// j < 5: The table remains false.
// This approach helps us ensure that nums[3] (5) can only contribute to sums greater than or equal to its value.






