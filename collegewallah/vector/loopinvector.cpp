#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>v;
    for(int i=0;i<5;i++)
    {
        int element;
        cin>>element;
        v.push_back(element);

    }
    
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
cout<<endl;
// inserting in between
v.insert(v.begin()+2,6);

// for each loop



for(int ele:v)
{
    cout<<ele<<" ";
}
cout<<endl;



// While loop
int idx=0;
while (idx<v.size())
{
  cout<<v[idx++]<<" ";
}
cout<<endl;
    return 0;
}