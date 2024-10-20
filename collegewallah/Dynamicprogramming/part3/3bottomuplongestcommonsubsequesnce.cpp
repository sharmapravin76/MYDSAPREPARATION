#include <iostream>
#include <vector>
#include <algorithm>
#include <limits.h>
using namespace std;

class Solution
{
public:
    vector<vector<int>> dp;
    int f(string &a, string &b, int i, int j)
    {
        if (i == a.size() || j == b.size())
            return 0;
        if (dp[i][j] != INT_MAX)
            return dp[i][j];
        if (a[i] != b[j])
        {
            return dp[i][j] = max(f(a, b, i + 1, j), f(a, b, i, j + 1));
        }
        else
        {
            return dp[i][j] = 1 + f(a, b, i + 1, j + 1);
        }
    }
    int longestCommonSubsequence(string a, string b)
    {
        dp.resize(1005, vector<int>(1005, 0));
        int n = a.size();
        int m = b.size();
        for (int i = n - 1; i >= 0; i--)
        {
            for (int j = m - 1; j >= 0; j--)
            {
                if (a[i] != b[j])
                {
                    dp[i][j] = max(dp[i + 1][j], dp[i][j + 1]);
                }
                else
                {
                    dp[i][j] = 1 + dp[i + 1][j + 1];
                }
            }
        }
        // return f(text1,text2,0,0);
        return dp[0][0];
    }
};