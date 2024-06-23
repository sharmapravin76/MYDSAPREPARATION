#include <iostream>
#include <unordered_map>
#include <vector> 
using namespace std;
int maxlengthzerosumsubarray(vector<int> &v)
{
    unordered_map<int, int> m;
    int prefixsum = 0;
    int maxlen = 0;
    for (int i = 0; i < v.size(); i++)
    {
        prefixsum += v[i];
        if (prefixsum == 0)
        {
            maxlen++;
        }
        if (m.find(prefixsum) != m.end())
        {
            maxlen = max(maxlen, i - m[prefixsum]);
        }
        else
        {
            m[prefixsum] = i;
        }
    }
    return maxlen;
}
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    cout << maxlengthzerosumsubarray(v) << endl;

    return 0;
}