#include <iostream>
using namespace std;
// 1+2+3+4+5.....+(n-1)+n
int sum_n(int n)
{
    if (n == 0)
    {
        return 0;
    }

    int left_part = sum_n(n - 1);
    return left_part + n;
}
int main()
{
    cout<<sum_n(3);
    // return 0;
}