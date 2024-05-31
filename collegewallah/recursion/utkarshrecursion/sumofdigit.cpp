#include<iostream>
using namespace std;


int sum_digit(int n){
    if(n==0)
    {
        return 0;
    }
    int last_digit=n%10;
    int remaining_part=n/10;
    cout<<remaining_part<<" "<<last_digit<<"\n";
    return sum_digit(remaining_part)+last_digit;
}

int main(){
    cout<<sum_digit(12143);
    return 0;
}