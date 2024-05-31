#include <iostream>
using namespace std;
class rectangle
{
public:
    int l;
    int b;
    rectangle() // default constructor
    {
        l = 0;
        b = 0;
    }
    rectangle(int x, int y) // parametrised constructor

    {
        l = x;
        b = y;
    }
    rectangle(rectangle& r) // copy constructor
    {
        l = r.l;
        b = r.b;
    }
};

int main()
{
    rectangle r1;

    cout << r1.l << " " << r1.b << endl;
    rectangle r2(3, 4);
    cout << r2.l << " " << r2.b << endl;
    rectangle r3=r2;
    cout<<r3.l<<" "<<r3.b<<endl;
    return 0;
}