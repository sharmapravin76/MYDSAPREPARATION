#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> dp;

    int f(int i, vector<int>& arr) {
        int n = arr.size();
        if (n == 1) return arr[n - 1];
        dp[n - 1] = arr[n - 1];
        dp[n - 2] = max(arr[n - 1], arr[n - 2]);
        for (int i = n - 3; i >= 0; i--) {
            dp[i] = max(arr[i] + dp[i + 2], dp[i + 1]);
        }
        return dp[0];
    }

    int rob(vector<int>& nums) {
        dp.resize(nums.size() + 10, -1);
        return f(0, nums);
    }
};

int main() {
    Solution sol;
    vector<int> nums = {2, 7, 9, 3, 1};
    cout << "Maximum amount that can be robbed: " << sol.rob(nums) << endl;
    return 0;
}
