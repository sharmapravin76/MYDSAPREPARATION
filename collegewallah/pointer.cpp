// #include<iostream>
// using namespace std;
// void swap(int *x,int *y)
// {
//     int temp=*x;
//     *x=*y;
//     *y=temp;

// }
// int main(){

//     int x=10;
//     int y=20;
//     int *p1=&x;
//     int *p2=&y;
//     swap(p1,p2);
//     cout<<x<<" "<<y;
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main(){
//     int x,y;
//     cin>>x>>y;
//     int *ptrx=&x;
//     int *ptry=&y;
//     int result;
//     int *ptr_result=&result;
//     *ptr_result=*ptrx+*ptry;
//     cout<<result;

//     return 0;
// }

// #include <iostream>
// using namespace std;
// void swap(int *x, int *y)
// {
//     int temp = *x;
//     *x = *y;
//     *y = temp;
// }
// int main()
// {
//     int x = 2;
//     int y = 4;

//     int *p1 = &x;
//     int *p2 = &y;
//     swap(x, y);
//     cout << x << " " << y;
//     return 0;
// }

#include<iostream>
using namespace std;
void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;

}

int main(){
    int a=1;
    int b=2;
    int *p1=&a;
    int *p2=&b;
    swap(p1,p2);
    cout<<a<<" "<<b;
    return 0;
}