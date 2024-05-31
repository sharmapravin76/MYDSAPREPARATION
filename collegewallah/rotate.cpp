// #include <iostream>
// using namespace std;

// int main()
// {
//     int arr[] = {1, 2, 3, 4, 5};
//     int n = 5;
//     int temp = arr[0];
//     for (int i = 1; i < n; i++)
//     {
//         arr[i - 1] = arr[i];
//     }
//     arr[n - 1] = temp;
    
//     // Printing the rotated array
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
    
//     return 0;
// }


// striver array rotate by d places

// 1,2,3,4 k=3;
// 2,3,4,1


// #include<iostream>
// using namespace std;
// void rotate(int arr[],int n,int k)

// {
//     k=k%n;
//     int temp[k];
//     for(int i=0;i<k;i++)
//     {
//         temp[i]=arr[i];

//     }
// for(int i=k;i<n;i++)
// {
//     arr[i-k]=arr[i];

// }

// }

// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++)
//     {
//         cin>>arr[i];

//     }
// int k;
// cin>>k;
// rotate(arr,n,k);
// {
//     for(int i=0;i<n;i++)
//     {
//         cout<<arr[i]<<" ";
//     }
// }
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main(){
//     int arr[]={1,2,3,4,5,6};
//     int n=6;
//     int k=3;
//     int j=0;
//     k=k%n;
//     int ansarray[6];
//     for(int i=n-k;i<n;i++)
//     {
// ansarray[j++]=arr[i];

//     }
//     for(int i=0;i<=k;i++)
//     {
//         ansarray[j++]=arr[i];
//     }
//     for(int i=0;i<n;i++)
//     {
//         cout<<ansarray[i]<<" ";
//     }
//     return 0;
// }


// by vector
#include <algorithm>
#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>v;
    v.push_back(1);
     v.push_back(2);
      v.push_back(3);
       v.push_back(4);
        v.push_back(5);
         v.push_back(6);

    int k=2;
    k=k%v.size();
    reverse(v.begin(),v.end());
    reverse(v.begin(),v.begin()+k);
    reverse(v.begin()+k,v.end());
//     for(int x:v)
//     {
// cout<<x<<" "; 
//     }
for(int i=0;i<v.size();i++)
{
cout<<v[i]<<" ";
}


    return 0;
}