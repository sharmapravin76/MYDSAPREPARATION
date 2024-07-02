#include <iostream>
#include <queue>
#include <vector>
#include <unordered_map>
using namespace std;
int leastinterval(vector<char> tasks, int n)
{
    // 1.count freq of tasks
    unordered_map<char, int> taskfreq;
    for (auto t : tasks)
    {
        taskfreq[t]++;
    }
    // 2.insert freq into max heap
    priority_queue<int> pq;
    for (auto e : taskfreq)
    {
        pq.push(e.second);
    }
    // 3.finding time until pq is empty
    int totaltime = 0;
    while (!pq.empty())
    {
        vector<int> temp;
        // looping one time frame =n+1 units of time
        for (int i = 0; i <= n; i++)
        {
            if (!pq.empty())
            {
                int freq = pq.top();
                pq.pop();
                if (freq > 1)
                {
                    temp.push_back(freq - 1); // adding remaining tasks in temp vector
                }
            }
            totaltime++;
            if (pq.empty() && temp.empty())
            {
                return totaltime; // all task have been executed
            }
        }
        for (auto t : temp)
        {
            pq.push(t); // adding back remaining task from temp vector to pq
        }
    }
    return totaltime;
}

int main()
{
    int n,cooldown;
    cin >> n>>cooldown;
    vector<char> tasks(n);
    for (int i = 0; i < n; i++)
    {
        cin >> tasks[i];
    }
    // int cooldown = 2;
    int leasttime = leastinterval(tasks, cooldown);
    cout << "least  number of units of time" << leasttime << endl;

    // vector<char> tasks = {'A', 'A', 'A', 'B', 'B', 'B', 'B'};
    return 0;
}