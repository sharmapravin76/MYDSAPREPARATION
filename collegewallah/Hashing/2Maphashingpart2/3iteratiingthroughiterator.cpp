#include <iostream>
#include <map>
using namespace std;

int main()
{
    // map<string,int,greater<string>>directory;
    map<string, int> directory;
    directory["pravin"] = 3876;
    directory["nishant"] = 74529;
    directory["satyam"] = 265289;
    directory["swarno"] = 265289;

    for (auto element : directory)
    {
        cout << "Name- " << element.first << endl;
        cout << "phone no -" << element.second << endl;
    }
    cout << endl;

    // next line is for inserting a new value,it will not insert for exiting pair
    directory.insert(make_pair("swarno", 268));

    //iterating in reverse order
    map<string, int>::reverse_iterator itr;

    for (itr = directory.rbegin(); itr != directory.rend(); itr++)
    {
        cout << itr->first << "-" << itr->second << endl;
    }

    return 0;
} 