// #include<iostream>
// using namespace std;
// int power(int n)
// {
//     if(n==0)
//     return 1;
    // int smallerproblem=power(n-1);
    // int biiggerproblem=2*smallerproblem;
    // return biiggerproblem;
//     return 2*power(n-1);
// }


// int main(){
//     int n;
//     cin>>n;
//     int ans= power(n);
//     cout<<ans<<endl;
//     return 0;
// }


// #include<iostream>
// using namespace std;
// int f(int p,int q)
// {
//     if(q==0)
//     return 1;
//     return p*f(p,q-1);
// }
// int main(){
//     int result=f(6,2);
//     cout<<result;
//     return 0;
// }


// another method
#include<iostream>
using namespace std;
int f(int p,int q)
{
    if(q==0)
    return 1;
    if(q%2==0){
        // if q is even
        int result=f(p,q/2);
        return result*result;
            }
            else {
                int result=f(p,(q-1)/2);
                return p*result*result;
            }
}

int main(){
    int result=f(2,3);
    cout<<result;
    return 0;
}