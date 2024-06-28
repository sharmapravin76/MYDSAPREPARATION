#include <iostream>
#include <vector>
#include <queue>
using namespace std;
vector<pair<int, int>> kthclosestpoints(vector<pair<int, int>> pts, int n, int k)
{
    priority_queue<pair<int, pair<int, int>>> pq; // maxheap
    for (auto &pt : pts)
    {
        int distance = pt.first + pt.second;
        pq.push(make_pair(distance, pt));
        if (pq.size() > k)

        {
            pq.pop(); // largest distance pt in k+1 pts
        }
    }
    vector<pair<int, int>> ans(k);
    while (!pq.empty())
    {
        ans[pq.size() - 1] = pq.top().second;
        pq.pop();
    }
    return ans;
}

int main()
{
    int n, k;
    cin >> n >> k;
    vector<pair<int, int>> pts(n);
    for (auto &pt : pts)
    {
        cin >> pt.first >> pt.second;
    }
    //here creating a vector anspoints and printing the answer vector which will be printed in the output(isko iss liyea bana rhe kuki yeh output hai jo heap meh left pair hoga distance aur points ka) 
    vector<pair<int, int>> anspts;
    anspts = kthclosestpoints(pts, n, k);
    for (auto &pt : anspts)
    { 
        cout << pt.first << ' ' << pt.second << "\n";
    }
    return 0;
}

// write the output
// first n=6
// k=3
// then all these points
// 5 3
// 1 2
// 3 4 
// 5 6
// 7 8
// 9 10
// you will receive the final output as 
// 1 2
// 3 4
// 5 3