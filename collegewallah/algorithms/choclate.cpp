#include <iostream>
#include <vector>

using namespace std;
bool candistchoclate(vector<int> &arr, int mid, int s)
{
    int n = arr.size();
    int studentrequired = 1;
    int currsum = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > mid)
        {
            return false;
        }
        if (currsum + arr[i] > mid)
        {
            studentrequired++;
            currsum = arr[i];
            if (studentrequired > s)
                return false;
        }
        else
        {
            currsum =currsum+ arr[i];
        }
    }
    return true;
}
int distchoclate(vector<int> &arr, int s)
{
    int n = arr.size();
    int low = arr[0];
    int high = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        high = high + arr[i];
    }
    int ans = -1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (candistchoclate(arr, mid, s))
        {
            ans = mid;
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
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    int s;
    cin >> s;
    cout << distchoclate(v, s) << "\n";

    return 0;
}