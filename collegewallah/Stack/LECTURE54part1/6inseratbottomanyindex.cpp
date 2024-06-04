#include <iostream>
#include <stack>
using namespace std;
void insertAtbottom(stack<int> &st, int x)
{
    // tc-0(n)
    //  sc-0(n)
    stack<int> temp;
    while (not st.empty())
    {
        int curr = st.top();
        st.pop();
        temp.push(curr);
    }
    st.push(x);
    while (not temp.empty())
    {
        int curr = temp.top();
        temp.pop();
        st.push(curr);
    }
}
int main()
{
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    insertAtbottom(st, 100);
    while (not st.empty())
    {
        int curr = st.top();
        st.pop();
        cout << curr << "\n";
    }
    return 0;
}