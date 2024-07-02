#include<iostream>
#include<queue>
#include<vector>
using namespace std;
int largestpoint(vector<int>a,int n,int k)
{
    priority_queue<int,vector<int>,greater<int>>pq; //min heap
    for(auto i:a)
    {
        pq.push(i);
    }
    while(k--)
    {
        int firstelement=pq.top();
        pq.pop();
        int secondelement=pq.top();
        pq.pop();
        int product=firstelement*secondelement;
        pq.push(product);
    }
    //fin largest element in pq
    while ((pq.size()>1))
    {
        pq.pop();
    }
    return pq.top();
}

int main(){
    int n,k;
    cin>>n>>k;
    vector<int>a(n);
    for(auto &x:a)
    cin>>x;
    cout<<largestpoint(a,n,k)<<endl;
    return 0;
}