#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;
class Solution {

public:
vector<int>dp;
    int f(int n) {
        if (n == 0 or n == 1)
            return 1;
        if (n == 2)
            return 2;
            if(dp[n]!=-1) return dp[n];
            int sum=0;
            for(int k=1;k<=n;k++)
            {
                //k ->potential root
                sum+=f(k-1)*f(n-k);
            }         
            return dp[n]=sum;
    }
    int numTrees(int n) {
        dp.clear();
        dp.resize(30,-1);
        return f(n);
    }
};
