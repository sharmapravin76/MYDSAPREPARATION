#include <iostream>
using namespace std;
void rec(int n, int m, bool flag)
{
    cout << m << " ";

    if (flag == false and n == m)
        return;
    if (flag)
    {
        if (m - 5 > 0)
            rec(n, m - 5, true);
        else
            rec(n, m - 5, false);
    }
    else
    rec(n, m + 5, false);
}
int main()
{
    int n;
    cout << "enter the number";
    cin >> n;
    rec(n, n, true);
    return 0;
}