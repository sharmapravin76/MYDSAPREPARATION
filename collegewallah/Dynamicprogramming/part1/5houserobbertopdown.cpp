#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> dp;
    
    int f(int i, vector<int>& arr) {
        if (i >= arr.size())
            return 0;
        if (dp[i] != -1)
            return dp[i];
        return dp[i] = max(arr[i] + f(i + 2, arr), f(i + 1, arr));
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
