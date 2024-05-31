#include<iostream>
using namespace std;
bool f(int *arr,int n,int i,int x)
{
    if(i==n){
        return false;

    }
    return (arr[i]==x)||f(arr,n,i+1,x);
}

int main(){
    int arr[]={1,2,3,4,5};
    int n=5;
    int x=5;
    bool result=f(arr,n,0,x); 
    if(result)
    cout<<"yes";
    else cout<<"no";
    return 0;
}