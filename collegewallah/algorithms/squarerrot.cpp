#include<iostream>
#include<vector>
using namespace std;
int squareroot(int x){
int low=1;
int high=x;
int ans=-1;
while(low<=high)
{
    int mid=low+(high-low)/2;
    if(mid*mid<=x)
    {
    ans=mid;
    low=mid+1;
    }else{
        high=mid-1;

    }

}
return ans;


}
int main(){
    cout<<squareroot(24);
    return 0;
}