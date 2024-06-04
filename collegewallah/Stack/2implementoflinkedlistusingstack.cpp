#include <iostream>
#include <algorithm>
#include <limits.h>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node(int d)
    {
        this->data = d;
        this->next = NULL;
    }
};
class stack
{
    node *head;
    int capacity;
    int currsize;

public:
    stack(int c)
    {
        this->capacity = c;
        this->currsize = 0;
        head = NULL;
    }
    bool isempty()
    {
        return this->head == NULL;
    }
    bool isfull()
    {
        return this->currsize == this->capacity;
    }
    void push(int data)
    {
        if (this->currsize == this->capacity)
        {
            cout << "overflow\n";
            return;
        }
        node *new_node = new node(data);
        new_node->next = this->head;
        this->head = new_node;
        this->currsize++;
    }
    int pop()
    {
        if (this->head == NULL)
        {
            cout << "underflow\n";
            return INT_MIN;
        }
        node *new_head = this->head->next;
        this->head->next = NULL;
        node *toberemoved = this->head;
        int result = toberemoved->data;
        delete toberemoved;
        this->head = new_head;
        return result;
    }
    int getTop()
    {
        if (this->head == NULL)
        {
            cout << "underflow\n";
            return INT_MIN;
        }
        return this->head->data;
    }

    int size()
    {
        return this->currsize;
    }
};
int main()
{
    stack st(5);
    st.push(1);
    st.push(2);
    st.push(3);
    cout << st.getTop() << "\n";
    st.push(4);
    st.push(5);
    cout << st.getTop() << "\n";
    st.push(8);
    st.pop();
    st.pop();
    cout << st.getTop() << "\n";
    return 0;
}