 #include<iostream>
using namespace std;
int f(int n)
{
    if(n<=9 and n>=0)
    return n;
    return f(n/10)+(n%1);
}
int main(){
    int sum=f(123);
    cout<<sum;

    return 0;
}