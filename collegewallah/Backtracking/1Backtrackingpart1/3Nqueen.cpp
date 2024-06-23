#include <iostream>
#include <vector>
using namespace std;
bool canplacequeen(int row, int col, vector<vector<char>> &grid)
{
    // is someone attacking from vertical up
    for (int i = row - 1; i >= 0; i--)
    {
        if (grid[i][col] == 'q')
        {
            return false;
        }
    }

    for (int i = row - 1, j = col - 1; i >= 0 and j >= 0; i--,j--)
    {
        if (grid[i][j] == 'q')
        {
            return false;
        }
    }

    for (int i = row - 1, j = col + 1; i >= 0 and j < grid.size(); i--, j++)
    {
        if (grid[i][j] == 'q')
        {
            return false;
        }
    } 
    return true;
}
void nqueen(int currRow, int n, vector<vector<char>> &grid)
{
    if (currRow == n)
    {
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    cout << grid[i][j] << " ";
                }
                cout << "\n";
            }
            cout<<"**\n";
            return;
        }
        for (int col = 0; col < n; col++)
        {
            // we will go to all cols
            // lets check if we can place a queen at currRow and col
            if (canplacequeen(currRow, col, grid))
            {
                grid[currRow][col] = 'q';
                nqueen(currRow + 1, n, grid);
                grid[currRow][col] = '.';
            }
        }
    
}

int main()
{
int n=4;
vector<vector<char>>grid(n,vector<char>(n,'.'));
nqueen(0,n,grid);
    return 0;
}