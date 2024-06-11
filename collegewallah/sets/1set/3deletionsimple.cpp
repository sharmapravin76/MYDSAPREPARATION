#include<iostream>
#include<set>
using namespace std;

int main(){
     set<int>set1;
    set1.insert(1);
    set1.insert(2);
    set1.insert(3);
     set1.insert(4); 
    set<int>::iterator itr;
   
    for(auto value:set1)
    {
        cout<<value<<" ";
    }
    cout<<endl;

    //deletion of elements
    set1.erase(2);

     for(auto value:set1)
    {
        cout<<value<<" ";
    }
    cout<<endl;
    return 0;
}