#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int> l1 = {1, 2, 3, 4};

    // using iterator traversal
    for (auto itr = l1.begin(); itr != l1.end(); itr++)
    {
        cout<<*itr<<" ";
     }
    cout<<endl;
        return 0;
}