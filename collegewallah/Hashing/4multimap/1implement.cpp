#include <iostream>
#include <map>
using namespace std;

int main()
{
    multimap<string, int> directory;
    directory.insert(make_pair("urvi", 6292002));
    directory.insert(make_pair("saghvi", 653982));
    directory.insert(make_pair("saghvi", 900000));
    for (auto pair : directory)
    {
        cout << "name- " << pair.first << endl;
        cout << "phone no- " << pair.second << endl;
    }
    return 0;
}