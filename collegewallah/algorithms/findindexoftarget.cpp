#include <iostream>
#include <vector>

using namespace std;
int binarysearchsortedarray(vector<int> &input, int target)
{
    int low = 0;
    int high = input.size() - 1;
    while (low <= high)
    {
        /* code */
        int mid = low + (high - low) / 2;
        if (input[mid] == target)
            return mid;
        if (input[mid] >= input[low])
        {
            if (target >=input[low] and target <= input[mid])
            {
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
        else
        {
            if (target >= input[mid] and target <= input[high])
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
    }
    return -1;
}

int main()
{
    int n;
    cin >> n;
    std::vector<int> input;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        input.push_back(x);
    }
    int target;
    cin >> target;
    cout << binarysearchsortedarray(input, target) << "\n";
    return 0;
}