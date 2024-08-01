#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
vector<unordered_map<int, int>>graph;
int v; // no of vertices
void add_edge(int src, int dest, int wt, bool bi_dir = true)

{
    graph[src][dest]= wt;
    if (bi_dir)
    {
        graph[dest][src] =wt;
    }
}

void display()
{
    for (int i = 0; i < graph.size(); i++)
    {
        cout << i << "->";
        for (auto el : graph[i])
        {
            cout << "(" << el.first << " " << el.second << " ), ";
        }
        cout << "\n";
    }
}
int main()
{
    cin >> v;
    graph.resize(v,unordered_map<int, int>());
    int e;
    cin >> e;
    while (e--)
    {
        int s, d, wt;
        cin >> s >> d >> wt;
        add_edge(s, d, wt);
    }
    display();

    return 0;
}

// input
// 7
// 7    
// 0 2 2
// 0 1 1
// 1 5 3
// 2 5 2
// 2 3 6
// 3 6 2
// 6 4 4


// output
// 0->(1 1 ), (2 2 ), 
// 1->(5 3 ), (0 1 ),
// 2->(3 6 ), (5 2 ), (0 2 ),
// 3->(6 2 ), (2 6 ),
// 4->(6 4 ),
// 5->(2 2 ), (1 3 ),