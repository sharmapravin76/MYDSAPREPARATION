#include <iostream>
#include <algorithm>
#include <limits.h>
using namespace std;
int permu(int arr[], int nums)
{
    if (nums.size() == 1)
    {
        return;
    }
    int idx1;
    for (int i = nums.size() - 2; i >= 0; i++)
    {
        if (nums[i] < nums[i + 1])
        {
            idx1 = i;
            break;
        }
    }

    if (idx1 < 0)
    {
        reverse(nums.begin(), nums.end());
    }
    else
    {
        int idx2 = 0;
        for (int i = nums.size() - 1; i >= 0; i--)

        {
            if (nums[i] > nums[idx1])
            {
                idx2 = i;
                break;
            }
        }
        swap(nums[idx1], nums[idx2]);
        reverse(nums.begin() + idx1 + 1, nums.end());
    }
    int main()
    {
        int arr[] = {1, 2, 3, 6, 5, 4};

        permu(arr, 6);
        for (int i = 0; i < 6; i++)
        {
            cout << arr[i] << " ";
        }

        return 0;
    }











    class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        
        if(nums.size()==1){
            return;
        }
        
        
        int idx1;
        for(int i=nums.size()-2;i>=0;i--){
            if(nums[i]<nums[i+1]){
                idx1=i;
                break;
            }
        }
        
        if(idx1<0){
            reverse(nums.begin(),nums.end());
        }else{
            
            int idx2=0;
            for(int i=nums.size()-1;i>=0;i--){
                if(nums[i]>nums[idx1]){
                    idx2=i;
                    break;
                }
            }
        
            swap(nums[idx1],nums[idx2]);
            
            sort(nums.begin()+idx1+1,nums.end());
            
            
        }
        
        
        
    }
};