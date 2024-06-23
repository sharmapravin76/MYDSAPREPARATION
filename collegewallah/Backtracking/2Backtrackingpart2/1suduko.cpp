
#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    bool canWePlace(vector<vector<char>> &board, int row, int col, char num)
    {
        for (int j = 0; j < 9; j++)
        {
            if (board[row][j] == num)
                return false;
        }

        for (int i = 0; i < 9; i++)
        {
            if (board[i][col] == num)
                return false;
        }
        int r = (row / 3) * 3;
        int c = (col / 3) * 3;
        for (int i = r; i < (r + 3); i++)
        {
            for (int j = c; j < (c + 3); j++)
            {
                if (board[i][j] == num)
                    return false;
            }
        }
        return true;
    }
    bool sudoku(vector<vector<char>> &board, int row, int col)
    {
        if (col == 9)
            return sudoku(board, row + 1, 0);
        if (row == 9)
            return true;
        if (board[row][col] == '.')
        {
            for (int num = 1; num <= 9; num++)
            {
                if (canWePlace(board, row, col, '0' + num))
                {
                    board[row][col] = '0' + num;
                    bool res = sudoku(board, row, col + 1);
                    if (res)
                        return true;
                    board[row][col] = '.';
                }
            }
            return false;
        }
        else
        {
            return sudoku(board, row, col + 1);
        }
    }
    void solveSudoku(vector<vector<char>> &board)
    {
        sudoku(board, 0, 0);
    }
};
void printBoard(const vector<vector<char>> &board)
{
    for (const auto &row : board)
    {
        for (const auto &cell : row)
        {
            cout << cell << " ";
        }
        cout << endl;
    }
}

int main()
{
    vector<vector<char>> board = {
        {'5', '3', '.', '.', '7', '.', '.', '.', '.'},
        {'6', '.', '.', '1', '9', '5', '.', '.', '.'},
        {'.', '9', '8', '.', '.', '.', '.', '6', '.'},
        {'8', '.', '.', '.', '6', '.', '.', '.', '3'},
        {'4', '.', '.', '8', '.', '3', '.', '.', '1'},
        {'7', '.', '.', '.', '2', '.', '.', '.', '6'},
        {'.', '6', '.', '.', '.', '.', '2', '8', '.'},
        {'.', '.', '.', '4', '1', '9', '.', '.', '5'},
        {'.', '.', '.', '.', '8', '.', '.', '7', '9'}};

    Solution().solveSudoku(board);
    printBoard(board);

    return 0;
}