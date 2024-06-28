#include <iostream>
#include <queue>
using namespace std;
int main()
{
    priority_queue<int> pq1;
    pq1.push(4);
    pq1.push(7);
    pq1.push(2);
    pq1.push(10);
    // printing the top most element

    cout << pq1.top() << endl;
    // printing all elements

    cout << "MAX HEAP" << endl;
    while (!pq1.empty())
    {
        cout << pq1.top() << endl;
        pq1.pop();
    }

    // this create a min heap syntax change
    cout << "MIN HEAP" << endl;
    
        priority_queue<int, vector<int>, greater<int>> pq2;
        pq2.push(4);
        pq2.push(7);
        pq2.push(2);
        pq2.push(10);
        // printing all elements
        while (!pq2.empty())
        {
            cout << pq2.top() << endl;
            pq2.pop();
        }
        return 0;
    }