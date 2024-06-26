#include <iostream>
#include <stack>
#include <vector>
using namespace std;
vector<int> nse(vector<int> &arr)
{
    int n = arr.size();
    vector<int> output(n, -1);
    stack<int> st;
    st.push(0);
    for (int i = 1; i < n; i++)
    {
        while (!st.empty() and arr[i] <arr[st.top()])
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
    vector<int>v={2,1,4,3};
    vector<int> res = nse(v);
    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i] << " ";
    }
    return 0;
}