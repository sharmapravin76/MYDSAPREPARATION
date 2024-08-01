#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int> l1 = {1, 2, 3, 4};

    // using iterator traversal
    for (auto itr = l1.begin(); itr != l1.end(); itr++)
    {
        cout << *itr << " ";
    }
    cout << endl;
    auto itr = l1.begin();
    auto l = l1.begin();
    auto r = l1.begin();
    advance(r, 2); // now r is pointing to 3
    l1.insert(itr, l, r);
    for (auto itr = l1.begin(); itr != l1.end(); itr++)
    {
        cout << *itr << " ";
    }
    cout << endl;
    // 1 2 1 2 3 4
    auto s_itr = l1.begin();
    advance(s_itr, 2); // s_itr pointing to 3rd element
    auto e_itr = l1.begin();
    advance(e_itr, 4); // e_itr pointing to 5th element
    l1.erase(s_itr, e_itr);
     for (auto itr = l1.begin(); itr != l1.end(); itr++)
    {
        cout << *itr << " ";
    }
    cout << endl;
    return 0;
}