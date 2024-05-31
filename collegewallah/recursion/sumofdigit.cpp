#include<iostream>
using namespace std;
int sum(int n)
{
if(n<=9 && n >=0)
return n;
return sum(n/10)+(n%10);
}

int main(){
    int result =sum(653);
    cout<<result;

    return 0;
}