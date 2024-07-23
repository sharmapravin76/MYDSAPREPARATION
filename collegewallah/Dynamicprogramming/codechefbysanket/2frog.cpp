#include <iostream>
#include <vector>
using namespace std;
vector<int> dp; // dp array->it will store ans for states which are computed for the first
int mod = 100000007;
int f(int n)
{
    dp[0] = dp[1] = 1;
    for (int i = 2; i <= n; i++)
    {
        for (int j = 1; j <= 6; j++)
        {
            if (j > i)
                break;
            dp[i] = (dp[i] + dp[i - j] % mod) % mod;
        }
    }
    return dp[n];
}
int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i <= n - 1;i++)
    {
        cin >> arr[i];
    }
    vector<int>dp(n,0);
    dp[1]=0;
    dp[2]=abs(arr[1]-arr[0]);
    cout<<dp[n];

    return 0;
}
