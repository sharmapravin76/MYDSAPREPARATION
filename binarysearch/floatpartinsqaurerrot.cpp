#include <iostream>
using namespace std;
long long int squarrootintezer(int n)
{
    int s = 0;
    int e = n;
    long long int mid = s + (e - s) / 2;
    long long int ans = -1;
    while (s <=e)

    {
        long long int square = mid * mid;
        if (square == n)
        {
            return mid;
        }
        else if (square > n)
        {
            e = mid - 1;
        }
        else
        {
            ans = mid;
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}
double moreprecesion(int n, int precesion, int tempsoln)
{
    double factor = 1;
    double ans = tempsoln;
    for (int i = 0; i <precesion; i++)
    {
        factor = factor / 10;
        for (double j = ans; j * j < n; j = j + factor)
        {
            ans = j;
        }
    }
    
        return ans;
    }

int main()
{
    int n;
    cout << "enter the number" << endl;
    cin >> n;
    int tempsoln = squarrootintezer(n);
    cout << "answer is " << moreprecesion(n, 3, tempsoln);
    return 0;
}