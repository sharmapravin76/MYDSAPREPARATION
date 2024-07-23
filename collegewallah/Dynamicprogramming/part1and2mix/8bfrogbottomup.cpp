#include<iostream>
#include<vector>
#include<limits.h>
#include<algorithm>
using namespace std;
vector<int>dp;
int f(vector<int>&heights,int i,int k)
{
  if(i==heights.size()-1) return 0;
  if(dp[i]!=-1)return dp[i];
    int ans=INT_MAX;
  for(int j=1;j<=k;j++)
  {
    if(i+j>=heights.size())
    break;
    ans=min(ans,abs(heights[i]-heights[i+j])+f(heights,i+j,k));
  }
  return dp[i]=ans;
}
int fbu(vector<int>&heights,int k)
{
  int n=heights.size();
  dp[n-1]=0;
  for(int i=n-2;i>=0;i--)//order
  {
    for(int j=1;j<=k;j++)
    {
      if(i+j>=n)
      break;
      dp[i]=min(dp[i],abs(heights[i]-heights[i+j])+dp[i+j]);
    }
  }
  return dp[0];
}
int main()
{ 
  int n;
  cin>>n;
  dp.clear();
  dp.resize(100005,INT_MAX);
  int k;
  cin>>k;
  vector<int>v(n,0);
  for(int i=0;i<n;i++)
  cin>>v[i];
  cout<<fbu(v,k); 
  return 0;
}