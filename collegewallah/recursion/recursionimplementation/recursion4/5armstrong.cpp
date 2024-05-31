#include <iostream>
using namespace std;

int Pow_recursive(int p, int q)
{
    if (q == 0)
        return 1;
    if (q % 2 == 0)
    {
        // if q is even
        int result = Pow_recursive(p, q / 2);
        return result * result;
    }
    else
    {
        int result = Pow_recursive(p, (q - 1) / 2);
        return p * result * result;
    }
}
int f(int n, int d)
 
{
    if (n == 0)
        return 0;
    return Pow_recursive(n % 10, d) + f(n / 10, d);
}

int main()
{

    int n;
    cin >> n;
    int no_of_digit = 0;
    int temp = n;
    while (temp > 0)
    {
        temp = temp / 10;
        no_of_digit++;
    }
    int result = f(n, no_of_digit);
    if (result == n)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}