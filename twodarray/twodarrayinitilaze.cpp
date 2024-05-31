// 2d array is stored in memory
// it is stored in one D array 
// formula is=c*i+j
// int arr[1][2];

//   0  1  2
// 0 3  4  5
// 1 6  7  8
// 2 9 10 11
// c=total number of column;(2)
// i=row number;(1)
// j=column number;(2)
// // c*i+j
// 3*1+2=5


#include<iostream>
using namespace std;

int main(){
    int arr1[3][3]={0};
    int arr2[3][3]={1};
    int arr3[3][3]={1,2,3,4,5,6,7,8,9};

    int arr4[4][2]={{1,2},{2,3},{3,4},{4,5}};
    int n=3;

//   for(int i=0;i<n;i++)
//     {
//         for(int j=0;j<n;j++)
//         {
//             cin>>arr[i][j];
//         }
        
//     }
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<2;j++)
        {
            cout<<arr3[i][j]<<" ";
        }
        cout<<endl;
            }
    cout<<"sab sahi chal rha";
    return 0;
}