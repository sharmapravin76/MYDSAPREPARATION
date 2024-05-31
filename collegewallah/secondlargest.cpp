#include <bits/stdc++.h>
#include <iostream>
using namespace std;
 int lar(int arr[],int size)
 {
     int max=INT_MIN;
     int maxindex=-1;
     for(int i=0;i<size;i++)
     {
         if(arr[i]>max)
         {
             max=arr[i];
             maxindex=i;
             
         }
     }
     return maxindex;
 }

int main()
{
    int arr[]={2,3,9,9,5,9};
    int n=6;
    int largeindex=lar(arr,n);
   
    cout<<arr[largeindex]<<endl;

    int largestelement=arr[largeindex];
    for(int i=0;i<n;i++)
    {
        if(arr[i]==largestelement)
        {
            arr[i]=-1;
        }
    }
    
  int secondlargest=lar(arr,n);
    cout<<arr[secondlargest]<<endl;
      cout<<secondlargest;
   

    return 0;
}
