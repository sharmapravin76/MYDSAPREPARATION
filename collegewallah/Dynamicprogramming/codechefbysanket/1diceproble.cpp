// #include<iostream>
// #include<vector>
// using namespace std;
// vector<int>dp;//dp array->it will store ans for states which are computed for the first
//     int mod = 100000007;
// int f(int n)
// {
//   dp[0]=dp[1]=1;
//   for(int i=2;i<=n;i++)
//   {
//     for(int j=1;j<=6;j++)
//     {
//         if(j>i)
//         break;
//         dp[i]=(dp[i]+dp[i-j]%mod)%mod;

//     }
//   }
//   return dp[n];

// }
// int main(){
//     int n;
//     cin>>n;
//     dp.resize(n+1,0);
//     cout<<f(n)<<"\n";
//     return 0;
// }

// #include<iostream>
// #include<vector>
// using namespace std;
// vector<int>dp;
// int mod=10000007;
// int f(int n)
// {
//   dp[0]=dp[1]=1;
//   for(int i=2;i<=n;i++)
//   {
//     for(int j=1;j<=6;j++)
//     {
//       if(j>i)
//       break;
//        dp[i]=(dp[i]%mod+dp[i-j]%mod)%mod;
//     }
//   }
//   return dp[n];
// }

// int main(){
//   int n;
//   cin>>n;
//   dp.resize(n+1,0);
//   cout<<f(n)<<"\n";
//   return 0;
// }


// first question of this video -https://www.youtube.com/live/sSdnSS0piIM?si=cob3smdtCBt9VNfq
#include <iostream>
#include <vector>
using namespace std;

int main()
{
  int n;
  cin >> n;
  vector<long long int> dp(n + 1, 0);
  // base case
  int mod=100000007;
  dp[0] = dp[1] = 1;
  for (int i = 2; i <= n; i++)
  {
    for (int j = 1; i <= 6; j++)//dice throw
    {
      if (j > i)
        break;
        dp[i]=(dp[i]%mod+dp[i-j]%mod)%mod;
    }
  }
  cout << dp[n];
  return 0;
}