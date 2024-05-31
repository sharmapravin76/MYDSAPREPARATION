#include <iostream>
#include <algorithm>
#include <limits.h>
#include <vector>
using namespace std;

void printvec(vector<int> v)
{
    cout << "size " << v.size() << endl;
    for (int i = 0; i < v.size(); ++i)
    {
        // v.size()-->0(1)
        cout << v[i] << " ";
    }
    cout << endl;
}
int main()
{
    // vector<int> v(10,3);
    vector<int> v;
    v.push_back(7);
    v.push_back(6);

    // printvec(v);
    // v.pop_back();
    //   printvec(v);//0(1)
    //   vector<int>v2=v;

    vector<int>v2=v;//0(n)
    v2.push_back(5);
    printvec(v);
    printvec(v2);
}