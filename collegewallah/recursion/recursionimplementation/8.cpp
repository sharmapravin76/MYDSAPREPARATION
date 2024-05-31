 #include<iostream>
using namespace std;
bool ispalindrome(int n)
{
    int reverse=0;
    int temp=n;
    while(temp!=0)
    {
        reverse=(reverse*10)+(temp%10);
        temp=temp/10;

    }
    return (reverse==n);
}
int main(){
    cout<<ispalindrome(121);
    return 0;
}