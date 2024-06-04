#include <iostream>
#include <stack>
using namespace std;
stack<int> copystack(stack<int> &input)

{
    stack<int> temp;
    while (not input.empty())
    {
        // do the process till the time input stack doesn't become empty
        int curr = input.top(); //[1,2,3],curr=3
        input.pop();
        temp.push(curr);
    }
    stack<int> result;
    while (not temp.empty())
    {
        int curr = temp.top();
        temp.pop();
        result.push(curr);
    }
    return result;
}
int main()
{
    stack<int> st;
    st.push(1);
    st.push(2);

    st.push(3);

    st.push(4);
    stack<int> res = copystack(st);
    while(not res.empty()){
    int curr=res.top();
    res.pop();
    cout<<curr<<"\n";
    }
    return 0;
}