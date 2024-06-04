#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>
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
void reverseVector(vector<int> &v)
{
    reverse(v.begin(), v.end());
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
       vector<int> v = {4, 6, 3, 1, 0, 9, 5, 6, 7};
    reverseVector(v);//1->reverse the given array
    vector<int> res = nge(v);//2-next greater element then again ->reverse the element then we will get previousgreaterelement
  
    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i] << " ";
    }
    cout << endl;
     reverseVector(res);
      for (int i = 0; i < res.size(); i++)
    {
        cout << res[i] << " ";
    }
    cout << endl;

    return 0;
}
// logic of the code is
// first->reverse the array 
// second->find the next greater element
// third->reverse the array again
