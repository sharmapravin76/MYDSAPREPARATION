// #include<iostream>
// #include<algorithm>
// #include<vector>
// using namespace std;
// void sortzeroandones(vector<int>&v)
// {
//     int zero_count=0;
//     for(int ele:v)
//     {
//         if(ele==0)
//         {
//             zero_count++;
//         }
//     }
//     for(int i=0;i<v.size();i++)
//     {
//         if(i<zero_count){
//             v[i]=0;
//         }
//         else{
//             v[i]=1;
//         }
//     }
// }

// int main(){
//     int n;
//     cin>>n;
//     vector<int>v;
//     for(int i=0;i<n;i++)
//     {
//         int ele;
//         cin>>ele;
//         v.push_back(ele);


//     }

// sortzeroandones(v);
// for(int i=0;i<n;i++)
// {
//     cout<<v[i]<<" ";
    
// }
//     return 0;
// }


// SOLVING USING POINTERS
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
void sortzeroandones(vector<int>&v)
{
    int leftpointer=0;
    int rightpointer=v.size()-1;
    while(leftpointer<rightpointer)
    {
        if(v[leftpointer]==1&&v[rightpointer]==0)
        {
            v[leftpointer++]=0;
            v[rightpointer--]=1;

        }
        if(v[leftpointer]==0)
        {
            leftpointer++;

        }
        if(v[rightpointer]==1)
        {
            rightpointer--;
        }
    }
    return;
}

int main(){
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        int ele;
        cin>>ele;
        v.push_back(ele);


    }

sortzeroandones(v);
for(int i=0;i<n;i++)
{
    cout<<v[i]<<" ";
    
}
    return 0;
}