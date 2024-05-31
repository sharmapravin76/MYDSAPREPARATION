#include <iostream>
using namespace std;

int main()
{
    int array[] = {1, 2, 3, 4};
    //size of the whole array
    cout << sizeof(array)<<endl;
       cout << sizeof(array[0])<<endl;
       //length of array
    cout << sizeof(array) / sizeof(array[0]) << endl;
    return 0;
}