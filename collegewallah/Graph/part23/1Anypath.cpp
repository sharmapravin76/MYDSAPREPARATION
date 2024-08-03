#include <iostream>
#include <vector>
#include <list>
#include <unordered_set>
using namespace std;
vector<list<int>> graph;
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
bool dfs(int curr, int end)
{
    if (curr == end)
        return true;
    visited.insert(curr); // maked visited
    for (auto neighbour : graph[curr])
    {
        if (not visited.count(neighbour))
        {
            bool result = dfs(neighbour, end);
            if (result)
                return true;
        }
    }
    return false;
}
bool anypath(int src, int dest)
{
    return dfs(src, dest);
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
        add_edge(s, d, false);
    }
    int x, y;
    cin >> x >> y;
    cout << anypath(x, y) << " \n";

    return 0;
}

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
// check for 0 to 6 path exist or not


