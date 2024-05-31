#include<iostream>
#include<limits.h>
using namespace std;
int getminimum(int arr[],int n)
{
    int ans=INT_MAX;
    for(int i=0;i<n;i++)
    {
       ans= min(ans,arr[i]);
    }
    return ans;
}

int main(){
    int arr[]={8,3,4,1,6,7};
    cout<<getminimum(arr,6)<<endl;
    return 0;
}