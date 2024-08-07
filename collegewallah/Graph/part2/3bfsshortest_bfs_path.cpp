#include <iostream>
#include <vector>
#include <list>
#include <limits.h>
#include <queue>
#include <unordered_set>
using namespace std;
vector<list<int>> graph;
vector<vector<int>> result;
unordered_set<int> visited;
int v;
void add_edge(int src, int dest, bool bi_dir = true)
{
    graph[src].push_back(dest);
    if (bi_dir)
    {
        graph[dest].push_back(src);
    }
}
void bfs(int src, int dest, vector<int> &dist)
{
    queue<int> qu;
    visited.clear();
    dist.resize(v, INT_MAX);
    dist[src] = 0;
    visited.insert(src);
    qu.push(src);
    while (not qu.empty())
    {
        int curr = qu.front();     
        cout<<curr<<" ";
        qu.pop();
        for (auto neighbour : graph[curr])
        {
            if (not visited.count(neighbour))
            {
                qu.push(neighbour);
                visited.insert(neighbour);
                dist[neighbour] = dist[curr] + 1;
            }
        }
    }
    cout<<"\n";
}
int main()
{
    cin >> v;
    graph.resize(v, list<int>());
    int e;
    cin >> e;
    visited.clear();
    while (e--)
    {
        int s, d;
        cin >> s >> d;
        add_edge(s, d);
    }
    int x, y;
    cin >> x >> y;
    vector<int>dist;
    bfs(x,y,dist);
for(int i=0;i<dist.size();i++)
{
    cout<<dist[i]<<" ";
}
    return 0;
}

// input
// 7
// 8  
// 0 1
// 0 4
// 1 3
// 1 5
// 4 3
// 5 6
// 6 2
// 5 2
// 0 6 this is the path from 0 to 6

// output
// 0 1 4 3 5 6 2 this the path way of the distance
// 0 1 3 2 1 2 3 this is the shortest path
