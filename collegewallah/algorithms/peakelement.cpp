#include <iostream>
#include <vector>
using namespace std;
int peakelement(vector<int> &input)
{
    int low = 1;
    int high = input.size() - 1;
    int ans=-1;
    while (low <= high)

    {
        /* code */
        int mid = low + (high - low) / 2;
        if(input[mid]>input[mid-1])
        {
            ans=max(ans,mid);
            low=mid+1;

        }
        else{
            high=mid-1;
        }
    }
    return ans;
}
int main()

{
    vector<int>input;
    int n;
    cin>>n;
    while(n--)
    {
        int x;
        cin>>x;
        input.push_back(x);
    }
cout<<peakelement(input)<<"\n";
    return 0;
}