#include<iostream>
using namespace std;
int find(int decimal_number)
{
    if(decimal_number==0)
    return 0;
    else
    return (decimal_number%2+10*find(decimal_number/2));
}
int main(){
    int n;
    cout<<"enter the number";

    cin>>n;

cout<<find(n);
    return 0;
}