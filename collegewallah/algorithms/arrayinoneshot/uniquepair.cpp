#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 3, 3, 5};
    int x = 4;
    int count = 0;
    int n = 4;
    int i = 0;
    int j = n - 1;
    while (i < j)
    {
        if (arr[i] + arr[j] == x)
        {
            count = count + 1;
            i++;
            j--;
        }
        else if (arr[i] + arr[j] < x)
        {
            i++;
        }
        else
        {
            j--;
        }
    }
    cout << count;
    return 0;
}