#include <iostream>
#include <algorithm>
#include <limits.h>
#include <vector>
using namespace std;

void printvec(vector<int> v)
{
    cout<<"size "<<v.size()<<endl;
    for (int i = 0; i < v.size(); ++i)
    {
        // v.size()-->0(1)
        cout << v[i] << " ";
    }
    cout << endl;
}
int main()
{
    vector<int> v;
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        int x;
        cin >> x;

         printvec(v);
        v.push_back(x); // 0(1)
    }
    printvec(v);
    // return 0;
}