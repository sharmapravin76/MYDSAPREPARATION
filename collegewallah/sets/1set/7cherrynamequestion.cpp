//in lexicographically also
#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<string> invitelist;
    int n;
    cin >> n;
    while (n--)
    {
        /* code */
        string name;
        cin >> name;
        invitelist.insert(name);
    }
    cout << "print invite list:" << endl;
    for (auto name : invitelist)
    {
        cout << name << endl;
    }

    return 0;
}