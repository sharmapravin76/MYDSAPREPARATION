#include<iostream>
using namespace std;

int main(){
    int arr[]={1,2,3,4,6};
    int x=7;
    int n=5;
    int i=0;
    int j=n-1;
    int ans=0;
    while(i<j)
    {
        if(arr[i]+arr[j]==x)
        {
            ans=ans+1;
            i++;
            j--;

        }
        else if(arr[i]+arr[j]<x)
        {
            i++;

        }
        else{
            j--;

        }

    }
    cout<<ans;

    return 0;
}