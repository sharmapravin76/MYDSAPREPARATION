#include <iostream>
#include <vector>
using namespace std;
int binarysearch(vector<int> &input, int target)

{
    int low = 0;
    int high = input.size() - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (input[mid] == target)
            return mid;
        else if (input[mid] < target)
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
int binarysearchrecursive(vector<int> &input, int target, int low, int high)
{
    if (low > high)
        return -1;
    int mid = (low + high) / 2;
    if (input[mid] == target)
        return mid;
    if (input[mid] < target)
    {
        return binarysearchrecursive(input, target, mid + 1, high);
    }
    else
    {
        return binarysearchrecursive(input, target, low, mid - 1);
    }
}

int main()
{
    int n;
    cin >> n;
    vector<int> input;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        input.push_back(x);
    }
    int target;
    cin >> target;
    // cout << binarysearch(input, target) << "\n";
    cout << binarysearchrecursive(input, target, 0, n - 1) << "\n";

    return 0;
}