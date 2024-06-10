#include <iostream>
#include <vector>
using namespace std;
class queue
{
    int front;
    int back;
    vector<int> v;
    int cs;
    int ts;

public:
    queue(int n)
    {
        v.resize(n);
        this->ts = n;
        this->back = n - 1;
        this->front = 0;
        this->cs = 0;
    }
    void enqueue(int data)
    {
        if (isfull())
            return;
        this->back = (this->back + 1) % this->ts;
        this->v[this->back] = data;
        this->cs++;
    }
    void dequeue()
    {
        if (isempty())
            return;
        this->front = (this->front + 1) % this->ts;
        this->cs--;
    }
    int getfront()
    {
        if (this->front == -1)
            return -1;
        return v[this->front];
    }
    bool isempty()
    {
        return this->cs == 0;
    }
    bool isfull()
    {
        return this->cs == this->ts;
    }
};
int main()
{
    queue qu(4);
    qu.enqueue(10);
    qu.enqueue(20);
    qu.enqueue(30);
    qu.dequeue();
    qu.enqueue(400);
    qu.dequeue();
    while (not qu.isempty())
    {
        cout << qu.getfront() << " ";
        qu.dequeue();
    }

    return 0;
}