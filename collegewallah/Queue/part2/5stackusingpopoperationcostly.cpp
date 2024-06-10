// push approach
#include <iostream>
#include <queue>

using namespace std;
class stack
{
    queue<int> q1;
    queue<int> q2;

public:
    stack() {}
    void push(int x)
    {
        this->q1.push(x);
    }
    void pop()
    {
        if (this->q1.empty())
            return;

        while (this->q1.size() > 1)
        {
            q2.push(q1.front());
            q2.pop();
        }
        this->q1.pop();
        while (not q2.empty())
        {
            this->q1.push(q2.front());
            q2.pop();
        }
    }
    bool empty()
    {
        return this->q1.empty();
    }
    int front()
    {
        if (this->q1.empty())
            return -1;

        while (this->q1.size() > 1)
        {
            q2.push(q1.front());
            q1.pop();
        }
        int result = this->q1.front();
        while (not q2.empty())
        {
            this->q1.push(q2.front());
            q2.pop();
        }
        return result;
    }
};

int main()
{
    stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);

    // st.pop();

    while (!st.empty())
    {
        cout << st.front() << endl; // Print the top element
        st.pop();                   // Pop the top element
    }

    return 0;
}

// #include <iostream>
// #include <queue>
// using namespace std;

// class stack
// {
//     queue<int> q1;
//     queue<int> q2;

// public:
//     stack() {}

//     void push(int x)
//     {
//         this->q1.push(x);
//     }

//     void pop()
//     {
//         if (this->q1.empty())
//             return;

//         while (this->q1.size() > 1)
//         {
//             q2.push(q1.front());
//             q1.pop();
//         }
//         this->q1.pop();

//         while (!this->q2.empty())
//         {
//             this->q1.push(q2.front());
//             q2.pop();
//         }
//     }

//     bool empty()
//     {
//         return this->q1.empty();
//     }

//     int top()
//     {
//         if (this->q1.empty())
//             return -1;

//         while (this->q1.size() > 1)
//         {
//             q2.push(q1.front());
//             q1.pop();
//         }

//         int result = this->q1.front();
//         q2.push(result);
//         q1.pop();

//         while (!this->q2.empty())
//         {
//             this->q1.push(q2.front());
//             q2.pop();
//         }

//         return result;
//     }
// };

// int main()
// {
//     stack st;
//     st.push(1);
//     st.push(2);
//     st.push(3);

//     st.push(4);
//     st.pop();

//     stack res = st;
//     while (!res.empty())
//     {
//         int curr = res.top();
//         res.pop();
//         cout << curr << "\n";
//     }

//     return 0;
// }
