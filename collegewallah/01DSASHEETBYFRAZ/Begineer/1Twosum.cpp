// http://bit.ly/3eD8REK
#include <bits/stdc++.h>
using namespace std;
vector<pair<int, int>> twosum(vector<int> &arr, int target, int n)
{
    sort(arr.begin(), arr.end());
    vector<pair<int, int>> ans;
    int s = 0;
    int e = n - 1;
    while (s < e)
    {
        int sum = arr[s] + arr[e];
        if (sum == target)
        {
            ans.push_back(make_pair(arr[s], arr[e]));
            s++;
            e--;
        }
        else if (sum > target)
        {
            e--;
        }
        else
        {
            s++;
        }
    }
    if (ans.empty())
    {
        ans.push_back(make_pair(-1, -1));
    }
    return ans;
}
int main()
{
    vector<int> arr = {2, 7, 11, 15, -1, 8};

    int target = 9;
    int n = arr.size();
    vector<pair<int, int>> result = twosum(arr, target, n);
    for (auto p : result)
    {
        cout << "(" << p.first << ", " << p.second << ")" << endl;
    }

    return 0;
}