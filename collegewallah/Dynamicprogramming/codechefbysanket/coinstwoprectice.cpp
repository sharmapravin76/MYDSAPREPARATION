#include <iostream>
#include <vector>
using namespace std;
int fbu(vector<int> &coins, int x, int n)
{
    vector<int> dp(100000005, 0);
    int mod = 100000007;
    dp[0] = 1;
    for (int j = 0; j < n; j++)
    // go to each coin
    {
        for (int i = 1; i <= x; i++)
        {
            if (i - coins[j] < 0)
                continue;
            dp[i] = (dp[i] % mod + dp[i - coins[j]] % mod) % mod;
        }
    }
    return dp[x];
}

int main()
{
    int n;
    int x;
    cin >> n >> x;
    vector<int> coins(n);
    for (int i = 0; i < n; i++)
        cin >> coins[i];
    cout << fbu(coins, x, n);
    return 0;
}