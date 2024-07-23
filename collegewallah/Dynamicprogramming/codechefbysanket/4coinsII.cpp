// #include <iostream>
// #include <vector>
// using namespace std;

// int main(int argc, char const *argv[])
// {
//     int mod = 100000007;
//     int n, x;
//     cin >> n >> x;
//     vector<long long> dp(x + 1, 0);
//     dp[0] = 1;
//     vector<long long> coins(n);
//     for (int i = 0; i <= n - 1; i++)
//         cin >> coins[i];
//     {
//         for (int i = 1; i <= x; i++)
//         {
//             for (int j = 0; j <= n - 1; j++)
//             {
//                 if (coins[j] > i)
//                     continue;

//                 dp[i] = (dp[i] + dp[i - coins[j]]) % mod;
//             }
//         }
//     }
//     cout << dp[x] % mod;
//     return 0;
// }

// #include <iostream>
// #include <vector>
// using namespace std;

// int main()
// {
//     int mod = 10000007;
//     int n, x;
//     cin >> n >> x;
//     vector<long long int> dp(x + 1, 0);
//     dp[0] = 1;
//     vector<long long int> coins(n);
//     for (int i = 0; i <n; i++)
//     {
//         cin >> coins[i];
//         for (int j = 0; j <=n; j++)
//         {
//             for (int i = 1; i <= x; i++)
//             {
//                 if (i - coins[j] < 0)
//                     continue;
//                 dp[i] = (dp[i] % mod + dp[i - coins[j]] % mod) % mod;
//             }
//         }
//     }
//     cout << dp[x] % mod;
//     return 0;
// }


// #include <iostream>
// #include <vector>
// using namespace std;

// int main()
// {
//     int mod = 10000007;
//     int n, x;
//     cin >> n >> x;
//     vector<long long> dp(x + 1, 0);
//     dp[0] = 1;
//     vector<long long> coins(n);
//     for (int i = 0; i < n; i++)
//     {
//         cin >> coins[i];
//     }
//     for (int i = 1; i <= x; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             if (i - coins[j] >= 0)
//             {
//                 dp[i] = (dp[i] + dp[i - coins[j]]) % mod;
//             }
//         }
//     }
//     cout << dp[x] % mod;
//     return 0;
// }
#include <iostream>
#include <vector>
using namespace std;

int fbu(vector<int> &coins, int x, int n)
{
    vector<int> dp(x + 1, 0); // Use x+1 to avoid wasteful memory allocation
    int MOD = 100000007;
    dp[0] = 1;
    
    for (int j = 0; j < n; j++)
    {
        // Go to each coin
        for (int i = 1; i <= x; i++)
        {
            if (i - coins[j] < 0)
                continue; // Skip this coin if it's larger than the current sum
            dp[i] = (dp[i] + dp[i - coins[j]]) % MOD;
        }
    }

    return dp[x];
}

int main()
{
    int n;
    cin >> n;
    int x;
    cin >> x;
    vector<int> coins(n);
    for (int i = 0; i < n; i++)
    cin >> coins[i];
    cout << fbu(coins, x, n);
    return 0;
}
