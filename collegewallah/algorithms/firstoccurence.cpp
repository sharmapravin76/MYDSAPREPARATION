#include <iostream>
#include <vector>
using namespace std;
int firstoccurence(vector<int> &input, int target)
{
    int low = 0;
    int high = input.size() - 1;
    int ans = -1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (input[mid] == target)
        {
            ans = mid;
            high = mid - 1;
        }
        else if (input[mid] > target)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return ans;
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr.push_back(x);
    }

    int target;
    cin >> target;
    cout << firstoccurence(arr, target) << "\n";

    return 0;
}