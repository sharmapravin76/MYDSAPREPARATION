#include <iostream>
#include <deque>
#include <vector>
using namespace std;
void max_window(vector<int> &arr, int k)
{
    deque<int> dq;
    for (int i = 0; i < k; i++)
    {
        while (not dq.empty() and arr[dq.back()] < arr[i])
        {
            dq.pop_back();
        }

        dq.push_back(i);
    }
    for (int i = k; i < arr.size(); i++)
    {
        cout << arr[dq.front()] << " ";
        int curr = arr[i];
        if (dq.front() == (i - k))
            dq.pop_front();
        while (not dq.empty() and arr[dq.back()] < arr[i])
        {
            dq.pop_back();
        }

        dq.push_back(i);
    }
        cout << arr[dq.front()] << endl;
} 

int main()
{
    vector<int> arr = {1,3,-1,-3,5,3,6,7};
    int k = 3;
    
    max_window(arr, k);
    
    return 0;
}