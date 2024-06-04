#include<iostream>
#include<stack>
using namespace std;
void reversestack(stack<int> &st)
{
    stack<int> t1,t2;
    while(not st.empty())
    {
        int curr=st.top();
        st.pop();
        t1.push(curr);
    }
    while (not t1.empty())
    {
       int curr=t1.top();
       t1.pop();
       t2.push(curr);

    }
    while(not t2.empty())
    {
        int curr=t2.top();
        t2.pop();
        st.push(curr);
    }
    
}

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
void f(stack<int>&st)
{
    if(st.empty())
   return;
   int curr=st.top();
   st.pop();
   f(st);
   insertAtbottom(st,curr);


}
int main(){
  stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    f(st);
    while (not st.empty())
    {
        int curr = st.top();
        st.pop();
        cout << curr << "\n";
    }
    return 0;
}