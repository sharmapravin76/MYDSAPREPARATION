#include<iostream>
using namespace std;

int main(){
    int arr[]={1,2,3,4};
    int size=sizeof(arr)/sizeof(arr[0]);
    // for(int i=0;i<size;i++)
    // {
    //     cout<<arr[i]<<endl;
    // }

    // for (int ele:arr){
    //     cout<<ele<<endl;
    // }

    // //while loop
    // int index=0;
    // while (index<size)

    // {
    //     /* code */
    //     cout<<arr[index]<<" ";
    //     index++;
    // }
    

char vowels[5];
// for(int i=0;i<5;i++)
// {
//     cin>>vowels[i];
// }
// for(int i=0;i<5;i++)
// {
//     cout<<vowels[i]<<" ";
// }


for(char &element:vowels)

{
    cin>>element;
}
for(int i=0;i<5;i++)
{
    cout<<vowels[i]<<" ";
}
    return 0;
}