#include<iostream>
#include<set>
using namespace std;

int main(){
     set<int>set1;
    set1.insert(1);
    set1.insert(2);
    set1.insert(3);
     set1.insert(4); 
      for(auto value:set1)
    {
        cout<<value<<" ";
    }
    cout<<endl;
    auto itr=set1.begin();
advance(itr,3);
set1.erase(itr);

     for(auto value:set1)
    {
        cout<<value<<" ";
    }
    cout<<endl;
    return 0;
}