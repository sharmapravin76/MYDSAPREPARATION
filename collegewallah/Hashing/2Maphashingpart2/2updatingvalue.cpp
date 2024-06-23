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

    //next line is for inserting a new value,it will not insert for exiting pair 
    // directory.insert(make_pair("swarno",2568));
    directory["swarno"] = 45670;//(it will update the existing pair)
    for (auto element : directory)
    {
        cout << "Name- " << element.first << endl;
        cout << "phone no.- " << element.second << endl;
    }

    return 0;
}