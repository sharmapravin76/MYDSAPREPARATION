// #include <iostream>
// using namespace std;

// int main()
// {
//     int x = 10;
//     int *ptr = &x;
//     cout << ptr <<" "<< (ptr + 1) << "\n";
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main(){
//     int arr[2]={5,4};
//     int *ptr=&arr[0];
//     cout<<(*ptr)++<<"\n";

//     cout<<arr[0]<<" "<<arr[1]<<"\n";
//     return 0;
// }

#include<iostream>
using namespace std;

int main(){
    int arr[2]={7,5};
    int *ptr=&arr[0];
    cout<<*++ptr<<"\n";
    return 0;
}