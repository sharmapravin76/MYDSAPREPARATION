#include <iostream>
#include <vector>
#include <queue>
using namespace std;
int kthlargestelement(vector<int> a, int n, int k)
{
    priority_queue<int, vector<int>, greater<int>> pq; // minheap
    for (int i = 0; i < n; i++)
    {
        pq.push(a[i]);
        if (pq.size() > k)
        {
            pq.pop(); // remove the smallest element out of k+1 element
        }
    }
    return pq.top();
}
int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << kthlargestelement(a, n, k) << endl;
    return 0;
}