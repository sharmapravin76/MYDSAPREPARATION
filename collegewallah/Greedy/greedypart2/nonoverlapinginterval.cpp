#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

static bool cmp(vector<int> i1, vector<int> i2) {
    return i1[1] < i2[1];
}

class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        // Sort intervals based on the end time
        sort(intervals.begin(), intervals.end(), cmp);

        int lastpicked = 0;
        int count = 0;

        // Print sorted intervals
        for (int i = 0; i < intervals.size(); i++) {
            cout << intervals[i][0] << " " << intervals[i][1] << "\n";
        }

        for (int i = 1; i < intervals.size(); i++) {
            if (intervals[lastpicked][1] > intervals[i][0]) {
                // Overlap detected, remove the current one
                count++;
            } else {
                // No overlap, pick the current one
                lastpicked = i;
            }
        }
        return count;
    }
};

int main() {
    Solution sol;

    vector<vector<int>> intervals = {{1, 2}, {2, 3}, {3, 4}, {1, 3}};
    cout << "Number of intervals to remove: " << sol.eraseOverlapIntervals(intervals) << endl;

    return 0;
}
