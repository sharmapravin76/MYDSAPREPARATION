#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
using namespace std;
class hashing
{
    vector<list<int>> hashtable;
    int buckets;
    public:
    hashing(int size)
    {
        buckets = size;
        hashtable.resize(size);
    }
    int hashvalue(int key)
    {
        return key % buckets; // division method
    }
    void addkey(int key)
    {
        int idx = hashvalue(key);
        hashtable[idx].push_back(key);
    }
    list<int>::iterator searchkey(int key)
    {
        int idx = hashvalue(key);
        return find(hashtable[idx].begin(), hashtable[idx].end(),key);
    }
    void deletekey(int key)
    {
        int idx = hashvalue(key);
        if(searchkey(key)!=hashtable[idx].end())
        {
        hashtable[idx].erase(searchkey(key));
        cout<<key <<" is deleted"<<endl;
        }
        else{
            cout<<"key is not present in the hashtable " <<endl;
        }
    }

};
int main()
{
    hashing h(10);
    h.addkey(5);
    h.addkey(9);
    h.addkey(3);
    h.deletekey(3);
    return 0;
}