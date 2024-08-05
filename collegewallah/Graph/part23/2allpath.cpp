#include <iostream>
#include <list>
#include <unordered_set>
#include <vector>
using namespace std;
vector<list<int>> graph;
unordered_set<int> visited;
vector<vector<int>> result;
int v;
void add_edge(int src, int dest, bool bi_dir = true)
{
    graph[src].push_back(dest);

    if (bi_dir)
    {
        graph[dest].push_back(src);
    }
}
void dfs(int curr, int end, vector<int> &path)
{
    if (curr == end)
    {
        path.push_back(curr);
        result.push_back(path);
        path.pop_back();
        return;
    }

    visited.insert(curr);
    path.push_back(curr);
    for (auto neighbour : graph[curr])
    {
        if (not visited.count(neighbour))
        {
         dfs(neighbour, end, path);
        
        }
    }
    path.pop_back();
    visited.erase(curr);
    return ;
}
void allpath(int src, int dest)
{
    vector<int>v;
    return dfs(src, dest, v);
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
     allpath(x, y);
     for(auto path:result)
     {
        for(auto el:path)
        {
        cout<<el<<" ";
     }
     cout<<"\n";
     }
    return 0;
}

// 7
// 8
// 0 1
// 0 4
// 1 3
// 4 3
// 1 5
// 5 6
// 6 2
// 5 2
// -->this input is for path from 0 to 6 ---?0 6
//output
// 0 1 5 6       
// 0 1 5 2 6     
// 0 4 3 1 5 6   
// 0 4 3 1 5 2 6 