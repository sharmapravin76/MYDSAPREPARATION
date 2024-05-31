// #include<iostream>
// using namespace std;

// int main(){
//     int arr[]={1,3,2,4,5,6};
//     bool sortedflag=true;
//     for(int i=1;i<6;i++)
//     {
//         if(arr[i]<=arr[i-1])
//         {
//             sortedflag=false;
//         }
//     }
//     cout<<sortedflag<<endl;

//     return 0;
// }

#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 3, 2, 4, 5, 6};
       bool sortedflag = true;
    for (int i = 0; i < 6; i++)
     
    {
        if (arr[i] <= arr[i - 1])
        {
            sortedflag = false;
        }
    }
    cout<<sortedflag;

    return 0;
}