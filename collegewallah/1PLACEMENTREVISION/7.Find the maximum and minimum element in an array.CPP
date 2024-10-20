#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    pair<long long, long long> getMinMax(vector<long long int> arr)
    {
        // code here
        long long int mine = 1000000000001;
        long long int maxe = 0;
        for (int i = 0; i < arr.size(); i++)
        {
            if (arr[i] > maxe)
            {
                maxe = arr[i];
            }
        }
        for (int i = 0; i < arr.size(); i++)
        {
            if (arr[i] < mine)
            {
                mine = arr[i];
            }
        }
        pair<long long, long long> ans;
        ans.first = mine;
        ans.second = maxe;
        return ans;
    }
};
