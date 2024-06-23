#include <iostream>
#include <vector>
#include <algorithm> // For sort

using namespace std;

class Solution {
public:
    vector<vector<int>> result;

    void f(vector<int>& c, int idx, int t, vector<int>& v) {
        if (t == 0) {
            result.push_back(v);
            return;
        }
        if (idx == c.size()) return;
        if (c[idx] <= t) {
            // we can pick
            v.push_back(c[idx]);
            f(c, idx, t - c[idx], v);
            v.pop_back();
        }
        int j = idx + 1;
        // not pick
        f(c, j, t, v);
    }

    vector<vector<int>> combinationSum(vector<int>& c, int target) {
        result.clear();
        sort(c.begin(), c.end());
        vector<int> v;
        f(c, 0, target, v);
        return result;
    }
};

int main() {
    Solution solution;
    vector<int> candidates = {2, 3, 6, 7};
    int target = 7;
    
    vector<vector<int>> result = solution.combinationSum(candidates, target);

    for (const auto& combination : result) {
        for (int num : combination) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}
