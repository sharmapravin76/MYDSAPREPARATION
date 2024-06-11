// input 1 n=4
// 1 2 2 -4
// Output1:1

// input2:n=5
// 1 2 3 1 1
// output 2:2
#include <iostream>
#include <set>
#include <vector>
using namespace std;

// multiset<int> secondsmallest;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
set<int>s;
for(auto val:v)
{
    s.insert(val);
}
auto itr=s.begin();
itr++;
cout<<"second smallest number:"<<*itr<<endl;
    return 0;
}