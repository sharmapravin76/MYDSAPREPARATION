#include <iostream>
using namespace std;
bool search(int arr1[4][2], int x, int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr1[i][j] == x)
            {
                return true;
            }
        }
    }
    return false;
}
int main()
{
    int arr4[4][2] = {{1, 2}, {2, 3}, {3, 4}, {4, 5}};
    
    cout<<"searching element " << search(arr4, 3, 4, 2) << endl;
    return 0;
}