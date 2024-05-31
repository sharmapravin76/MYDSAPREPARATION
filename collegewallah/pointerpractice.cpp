#include<iostream>
using namespace std;

int main(){
    int x=18;
    float y=7.5;
    int *ptr=&x;
    cout<<"address store in ptr" <<ptr<<"\n";
    cout<<"value present at the address of the ptr is "<<*ptr<<"\n";
float *ptrf=&y;
    cout<<"address store in ptr" <<ptrf<<"\n";
    cout<<"value present at the address of the ptr is "<<*ptrf<<"\n";

    x=23;
    cout<<"new updated value of x is "<<x<<"\n";
    cout<<"value present at the address of the ptr is"<<*ptr<<"\n";


    *ptr=50;
     cout<<"new updated value of x is "<<x<<"\n";
    cout<<"value present at the address of the ptr is"<<*ptr<<"\n";

    int valueofx=*ptr;
    cout<<valueofx<<"\n";

        return 0;
}