#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int maxprofit(vector<int> &prices)
    {
        int min_price = INT_MAX;
        int profit = 0;
        for (int i = 0; i < prices.size(); i++)
        {
            min_price = min(prices[i], min_price);
            profit = max(profit, prices[i] - min_price);
        }
        return profit;
    }
};
int main()
{
    Solution solution;
    vector<int> prices = {7, 1, 5, 3, 6, 4};
    int result = solution.maxprofit(prices);
    cout << "Maximum profit: " << result << endl;
    return 0;
}
