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
    

    return 0;
}