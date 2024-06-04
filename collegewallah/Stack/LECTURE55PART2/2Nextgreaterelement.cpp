#include <iostream>
#include <stack>
#include <vector>
using namespace std;
vector<int> nge(vector<int> &arr)
{
    int n = arr.size();
    vector<int> output(n, -1);
    stack<int> st;
    st.push(0);
    for (int i = 1; i < n; i++)
    {
        while (!st.empty() and arr[i] > arr[st.top()])
        {
            output[st.top()] = arr[i];
            st.pop();
        }
        st.push(i);
    }
    while (not st.empty())

    {
        output[st.top()] = -1;
        st.pop();
    }
    return output;
}

int main()
{
    // int n;
    // cin >> n;
    // vector<int> v;
    // while (n--)
    // {
    //     int x;
    //     cin >> x;
    //     v.push_back(x);
    // }
    //    vector<int> v = {4, 6, 3, 1, 0, 9, 5, 6, 7};
    vector<int> v = {4, 3, 9, 1, 6, 8, 2};
    // vector<int> v = {3, 10, 4, 2, 1, 2, 6, 1, 7, 2, 9};
    vector<int> res = nge(v);
    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i] << " ";
    }
    return 0;
}