#include <iostream>
using namespace std;
bool isprime(int n, int i)
{
    if (n <= 2)
    {
        return (n == 2) ? true : false;
        if (n % i == 0)
            return false;
        if (i * i > n)
            return true;
        return isprime(n, i + 1);
    }
}

int main()
{
    int n;
    cout << "enter the number";
    cin >> n;
    if (isprime(n, 2))
    {
        cout << "yes";
    }
    else
    {
        cout << "no";
    }
}