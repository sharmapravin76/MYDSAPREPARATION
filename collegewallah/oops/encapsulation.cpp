#include <iostream>
using namespace std;
class abc
{
    int x;

public:
    void set(int n)
    {
        x = n;
    }
    int get()
    {
        return x;
    }
};

int main()
{

abc obj1;
obj1.set(3);
cout<<obj1.get()<<endl;


    return 0;
}