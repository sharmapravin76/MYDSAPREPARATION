#include <iostream>
#include <vector>

using namespace std;
class queue
{
    int front;
    int back;
    vector<int> v;

public:
    queue()
    {
        this->back = -1;
        this->front = -1;
    }
    void enqueue(int data)
    {
        v.push_back(data);
        this->back++;
        if (this->back == 0)
            this->front = 0;
    }
    void dequeue()
    {
        if (this->front == this->back)
        {
            this->front = -1;
            this->back = -1;
            this->v.clear();
        }
        else
            this->front++;
    }
    int getfront()
    {
        if (this->front == -1)
            return -1;
        return v[this->front];
    }
    bool isempty()
    {
        return this->front == -1;
    }
};
int main()
{
    queue qu;
    qu.enqueue(10);
    qu.enqueue(20);
    qu.enqueue(30);
    qu.dequeue();
    qu.enqueue(400);
    qu.enqueue(500);
    while (not qu.isempty())
    {
        cout << qu.getfront() << " ";
        qu.dequeue();
    }

    return 0;
}