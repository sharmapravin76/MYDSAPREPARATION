#include <iostream>
#include <vector>

using namespace std;
bool f(vector<vector<int>> &grid, int i, int j, int n, int count)
{
    if (i < 0 || j < 0 || i >= n || j >= n || grid[i][j] >= 0)
        return false;
    if (count == n * n - 1)
    {
        grid[i][j] = count;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << grid[i][j] << "\t ";
            }

            cout << "\n";
        }
        return true;
    }

    grid[i][j] = count;
    if (f(grid, i - 1, j - 2, n, count + 1))
        return true;
    if (f(grid, i - 2, j - 1, n, count + 1))
        return true;
    if (f(grid, i + 1, j - 2, n, count + 1))
        return true;
    if (f(grid, i + 2, j - 1, n, count + 1))
        return true;
    if (f(grid, i + 1, j + 2, n, count + 1))
        return true;
    if (f(grid, i + 2, j +1, n, count + 1))
        return true;
    if (f(grid, i - 1, j + 2, n, count + 1))
        return true;
    if (f(grid, i - 2, j + 1, n, count + 1))
        return true;
    grid[i][j] = -1;
    return false;
}
int main()
{
    int n = 6;
    vector<vector<int>> grid(n, vector<int>(n, -1));
    f(grid, 0, 0, n, 0);
    return 0;
}