#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<int> set1;
    set1.insert(1);
    set1.insert(2);
    set1.insert(3);
    set1.insert(4);
    set1.insert(5);
    for (auto value : set1)
    {
        cout << value << " ";
    }
    cout << endl;
    auto start_itr = set1.begin();
    start_itr++;
    auto end_itr = set1.begin();
    advance(end_itr, 3);
    // set1.erase(start_itr, end_itr);

    // for (auto value : set1)
    // {
    //     cout << value << " ";
    // }
    // cout << endl;

    //search operation
    return 0;
}