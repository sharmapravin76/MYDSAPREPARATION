#include <bits/stdc++.h>
using namespace std;
vector<list<int>> graph;
int v; // no of vertices
void add_edge(int a, int b, bool bidir = true)
{
    graph[a].push_back(b);
    if (bidir)
    {
        graph[b].push_back(a);
    }
}
void topobfs()
{
    // kahn algo
    vector<int> indegre(v, 0);
    for (int i = 0; i < v; i++)
    {
        for (auto neighbour : graph[i])
        {
            // i------->neighbour
            indegre[neighbour]++;
        }
    }
    queue<int> qu;
    unordered_set<int> vis;
    for (int i = 0; i < v; i++)
    {
        if (indegre[i] == 0)
        {
            qu.push(i);
            vis.insert(i);
        }
    }
    while (not qu.empty())
    {
        int node = qu.front();
        cout<<node<<" ";
        qu.pop();
        for (auto neighbour:graph[node])
        {
            if(not vis.count(neighbour))
            {
                indegre[neighbour]--;
                if(indegre[neighbour]==0)
                {
                    qu.push(neighbour);
                    vis.insert(neighbour);
                }
            }
        }
    }
}

int main()
{
    cin >> v;
    int e;
    cin >> e;
    graph.resize(v, list<int>());
    while (e--)
    {
        int x, y;
        cin >> x >> y;
        add_edge(x, y, false);
    }
topobfs();
    return 0;
}

//input
// 8
// 11 
// 0 2
// 1 2
// 1  
// 3  
// 2 3
// 2 4
// 2 6
// 2 5
// 3 5
// 4 6
// 5 6
// 6 7 
//output
// 0 1 2 3 4 5 6 7 
