#include<iostream>
using namespace std;
void columnsum(int arr[4][2],int m,int n)
{
    for(int i=0;i<n;i++)
    {
        int sum=0;
        for(int j=0;j<m;j++)
        {
            
            sum=sum+arr[j][i];
        }
        cout<<sum<<" ";
    }
    cout<<endl;
}
int main(){
  
    int arr4[4][2] = {{1, 2}, {2, 3}, {3, 4}, {4, 5}};
    columnsum(arr4,4,2);

    return 0;
}