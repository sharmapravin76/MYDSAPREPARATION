#include<iostream>
using namespace std;
int f(int n){
if(n==1)
return 1;
return n*f(n-1);

}
int main(){
    int result=f(5);
    cout<<result;
    return 0;
}

// love babbar method
// #include<iostream>
// using namespace std;
// int factoriall(int n)
// {
//     if(n==0)
//     return 1;
//     return n*factoriall(n-1);
// }

// int main(){
//     int n;
//     cin>>n;
//     int ans=factoriall(n);
//     cout<<ans<<endl;

//     return 0;
// }