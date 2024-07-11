#include<iostream>
#include<vector>
using namespace std;
vector<int>dp;//dp array->it will store ans for states which are computed for the first  


int f(int n)
{
    if(n==0 or n==1)return n;

    if(dp[n]=!-1)
    return dp[n];
    return dp[n]=f(n-1)+f(n-2);
}
int main(){
    int n;
    cin>>n;
    dp.resize(n+1,-1);
    cout<<f(n)<<"\n";
    return 0;
}
// dp[i]->-1;
// that the ith states is not yet computed
// dp[i]=!-1
// that the ith state is already precomputed