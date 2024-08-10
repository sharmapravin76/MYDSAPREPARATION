#include <iostream>
#include <vector>
using namespace std;
int find(vector<int> &parent, int x)
{
    // this method returns which group/clusters x belongs to
    return parent[x] = (parent[x] == x) ? x : find(parent, parent[x]);
}

void Union(vector<int> &parent, vector<int> &rank, int a, int b)
{
    a = find(parent, a);
    b = find(parent, b);
    if (rank[a] >= rank[b])
    {
        rank[a]++;
        parent[b] = a;
    }
    else
    {
        rank[b]++;
        parent[a] = b;
    }
}

int main()
{
    int n, m;
    cin >> n >> m;
    // n->no of elements, m->no of queries
    vector<int> parent(n + 1);
    vector<int> rank(n + 1, 0);
    for (int i = 0; i <= n; i++)
    {
        parent[i] = i;
    }
    while (m--)
    {
        string str;
        cin >> str;
        if (str == "union")
        {
            int x, y;
            cin >> x >> y;
            Union(parent, rank, x, y);
        }
        else
        {
            int x;
            cin>>x;
            cout<<find(parent,x)<<"\n";
        }
    }

    return 0;
}

//input
// 5
// 8
// union
// 1 2
// union  
// 2 3
// union
// 1 4
// after this write this queries to find
// find 
// 1
// 1
// find
// 2
// 1
// find  
// 5
// 5
// find 
// 4
// 1
// find
// 3
// 1