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
    auto l=l1.begin();
    auto r=l1.begin();
    advance(r,2); //now r is pointing to 3
    l1.insert(itr,l,r);
    for (auto itr = l1.begin(); itr != l1.end(); itr++)
    {
        cout << *itr << " ";
    }
    cout << endl;

    return 0;
}