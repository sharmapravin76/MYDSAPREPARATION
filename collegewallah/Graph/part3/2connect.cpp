#include <iostream>
#include <list>
#include <unordered_set>
#include <vector>
using namespace std;
int v;
vector<list<int>> graph;
void add_edge(int src, int dest, bool bi_dir = true)
{
    graph[src].push_back(dest);
    if (bi_dir)
    {
        graph[dest].push_back(src);
    }
}
void dfs(int node, unordered_set<int> &visited)
{
    visited.insert(node);
    for (auto neighbour : graph[node])
    {
        if (not visited.count(neighbour))
        {
            dfs(neighbour, visited);
        }
    }
}
int connected_component()
{
    int result = 0;
    unordered_set<int> visited;
    for (int i = 0; i < v; i++)
    {
        // go to every vertex
        // if from a vertex we can initalize a dfs,we got one more cc
        if (visited.count(i) == 0)
        {
            result++;
            dfs(i, visited);
        }
    }
      return result;
}
int main()
{
    cin >> v;
    graph.resize(v, list<int>());
    int e;
    cin >> e;
    while (e--)
    {
        int s, d;
        cin >> s >> d;
        add_edge(s, d, false);
    }
    cout << connected_component() << " ";
    return 0;
}

// 7
// 9
// 0 1
// 0 3
// 1 3
// 3 4
// 1 4
// 2 5
// 5 6
// 2 6
// 1 2
// 1