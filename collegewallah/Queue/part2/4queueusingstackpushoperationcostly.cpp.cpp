// using pop 0(1)

#include <iostream>
#include <stack>
#include <limits.h>
using namespace std;
class queue
{
    stack<int> st;

public:
    queue() {}
    void push(int x)
    { // queue.enqueue
        stack<int> temp;
        while (not this->st.empty())
        {
            temp.push(this->st.top());
            this->st.pop();
        }
        this->st.push(x);
        while (not temp.empty())
        {
            this->st.push(temp.top());
            temp.pop();
        }
    }
    void pop()
    { // queue.dequeue
        if (this->st.empty())
            return;
        this->st.pop();
    }
    bool empty()
    {
        return this->st.empty();
    }
    int front()
    {
        if (this->st.empty())
            return INT_MIN;
        return this->st.top();
    }
};

int main()
{
    queue qu;
    qu.push(10);
    qu.push(20);
    qu.push(30);
    qu.push(40);
    qu.pop();
    while (not qu.empty())
    {
        cout << qu.front() << " ";
        qu.pop();
    }

    return 0;
}