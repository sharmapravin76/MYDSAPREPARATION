#include<iostream>
#include<set>
using namespace std;

int main(){
     set<int>set1;
    // set<int,greater<int>>set1;
    set1.insert(1);
    set1.insert(2);
    set1.insert(3);
    set<int>::iterator itr;
    // for(itr=set1.begin();itr!=set1.end();itr++)
    // cout<<*itr<<endl;
    for(auto value:set1)
    {
        cout<<value<<" ";
    }
    return 0;
}