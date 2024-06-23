// Key found: m.find(key) != m.end()
// if i try to find the key and it  does not return me m.end() then the key is found
// Key not found: m.find(key) == m.end()
// if i try to find the key and it  return me m.end() then the key is not found


#include <iostream>
#include <unordered_map>
#include <algorithm>
#include <vector>

using namespace std;
bool checkNooneToManyMapping(string s1, string s2)
{
    unordered_map<char, char> m;
    for (int i = 0; i < s1.length(); i++)
    {
        
        if (m.find(s1[i]) != m.end())
        {
            if (m [s1[i]] != s2[i])
            {
                return false;
            }
        }
        else
        {
            m[s1[i]] = s2[i];
        }
    }
    return true;
} 
bool checkisomorphic(string s1, string s2)
{
    if (s1.length() != s2.length())
    {
        return false;
    }

    // check one to many mapping from s1->s2
    bool s1s2 = checkNooneToManyMapping(s1, s2);

    /// check one to many mapping from s2->s1
    bool s2s1 = checkNooneToManyMapping(s2, s1);
    return s1s2 && s2s1;
}
int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    cout << (checkisomorphic(s1, s2) ? "is isomorphic" : "is not isomorphic") << endl;

    return 0;
}