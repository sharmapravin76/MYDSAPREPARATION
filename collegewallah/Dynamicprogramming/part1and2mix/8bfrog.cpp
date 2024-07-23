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
int main()
{ 
  int n;
  cin>>n;
  dp.clear();
  dp.resize(100005,-1);
  int k;
  cin>>k;
  vector<int>v(n,0);
  for(int i=0;i<n;i++)
  cin>>v[i];
  cout<<f(v,0,k);
  return 0;
}