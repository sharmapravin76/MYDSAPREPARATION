#include <iostream>
#include <limits.h>
using namespace std;
int rotate(int arr3[3][3], int m, int n)
{

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < i; j++)
        {
            swap(arr3[i][j], arr3[j][i]);
        }
    }

    int i = 0;
    int j = n - 1;
      for (i = 0; i < m; i++)
    {
        for ( j = 0; j < n; j++)
    // while (i < j)
    {
        swap(arr3[i][i], arr3[i][j]);
        // i++;
        // j--;
    }

    }
}
int main()
{
    int arr3[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    rotate(arr3, 3, 3);
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr3[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
