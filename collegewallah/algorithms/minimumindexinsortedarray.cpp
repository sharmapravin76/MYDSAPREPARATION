#include <iostream>
#include<vector>
using namespace std;

int findminimumsortedarray(vector<int> &input)
{
    if (input.size() == 1)
        return input[0];
    int low = 0;
    int high = input.size() - 1;
    if (input[low] < input[high])
    {
        return low;
    }
    while (low <= high)

    {
        /* code */
        int mid = low + (high - low) / 2;
        if (input[mid] > input[mid + 1])
            return mid + 1;
            if(input[mid]<input[mid-1])
            return mid;
        if (input[mid] > input[low])
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1;

}
int main()
{

int n;
cin>>n;
vector<int>input;
for(int i=0;i<n;i++)
{
    int x;
    cin>>x;
    input.push_back(x);

}
cout<<findminimumsortedarray(input)<<"\n";
    return 0;
}