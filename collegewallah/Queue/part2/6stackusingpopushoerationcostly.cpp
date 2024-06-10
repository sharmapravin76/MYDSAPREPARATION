
// #include <iostream>
// #include <queue>
// #include <limits.h>
// using namespace std;
// class mystack
// {

//     queue<int> q1;
//     queue<int> q2;

// public:
//     mystack() {}

// void push(int x)
// {
//     q2.push(x);
//     while (not q1.empty())
//     {
//         q2.push(q1.front());
//         q1.pop();
//     }
//     queue<int> q = q1;
//     q1=q2;
//     q2=q;
// }
// int pop()
// {
//     if(q1.empty())
//     return 0;
//     q1.pop();
//     return q1.front();

// }
// int front()
// {
//     return q1.front();
// }
// int main()
// {
//     mystack st;
//     st.push(1);
//     st.push(2);
//     st.push(3);
//     st.push(4);
//     st.push(5);

//     // st.pop();

//     while (!st.empty())
//     {
//         cout << st.front() << endl; // Print the top element
//         st.pop();                   // Pop the top element
//     }

//     return 0;
// }

#include <iostream>
#include<limits.h>
#include <queue>


using namespace std;

class mystack
{
    queue<int> q1;
    queue<int> q2;

public:
    mystack() {}

    void push(int x)
    {
        q2.push(x);
        while (!q1.empty())
        {
            q2.push(q1.front());
            q1.pop();
        }
        swap(q1, q2);
    }

    int pop()
    {
        if (q1.empty())
            return INT_MIN;
        int popped_value = q1.front();
        q1.pop();
        return popped_value;
    }

    bool empty()
    {
        return q1.empty();
    }

    int front()
    {
        if (q1.empty())
            return INT_MIN;
        return q1.front();
    }
};

int main()
{
    mystack st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st.pop();

    while (!st.empty())
    {
        cout << st.front() << endl; // Print the top element
        st.pop();                   // Pop the top element
    }

    return 0;
}
