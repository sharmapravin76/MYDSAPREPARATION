#include <iostream>
using namespace std;
int pow_recursive(int p, int q)
{
    if (q == 0)
        return 1;
    if (q % 2 == 0)
    {
        int result = pow_recursive(p, q / 2);
        return result * result;
    }
    else
    {
        int result = pow_recursive(p, (q - 1) / 2);
        return p * result * result;
    }
}

int f(int n, int d)
{
    if (n == 0)
        return 0;
    return pow_recursive(n % 10, d) + f(n / 10, d);
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
        cout << "yes";
    }
    else
    {
        cout << "no";
    }

    return 0;
}

// #include <iostream>
// using namespace std;
// int pow_recursive(int p, int q)
// {
//     if (q == 0)
//         return 1;
//     if (q % 2 == 0)
//     {
//         int result = pow_recursive(p, q / 2);
//         return result * result;
//     }
//     else
//     {
//         int result = pow_recursive(p, (q - 1) / 2);
//         return p * result * result;
//     }
// }
// int f(int n, int d)
// {
//     if (n == 0)
//         return 0;
//     return pow_recursive(n % 10, d) + f(n / 10, d);
// }

// int main()
// {
//     int n;
//     cin >> n;
//     // for example=153 is armstrong number;
//     int no_digits = 0;
//     int temp = n;
//     while (temp > 0)
//     {
//         temp = temp / 10;
//         no_digits++;
//     }
//     int result = f(n, no_digits);
//     if (result == n)
//     {
//         cout << "yes";
//     }

//     else
//     {
//         cout << "no";
//     }

//     return 0;
// }