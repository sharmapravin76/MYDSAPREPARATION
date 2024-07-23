#include <iostream>
#include <vector>
#include <algorithm>
#include <limits.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int mod = 100000007;
    int n, x;
    cin >> n >> x;
    vector<long long> dp(x + 1, INT_MAX);
    dp[0] = 0;
    vector<long long> coins(n);
    for (int i = 0; i <= n - 1; i++)
        cin >> coins[i];
    {
        for (int i = 1; i <= x; i++)
        {
            for (int j = 0; j <= n - 1; j++)
            {
                if (coins[j] > i)
                    continue;

                dp[i] = min(dp[i], 1 + dp[i - coins[j]]);
            }
        }
    }
    if (dp[x] == INT_MAX)
        cout << -1;
    else
        cout << dp[x] % mod;
    return 0;
}