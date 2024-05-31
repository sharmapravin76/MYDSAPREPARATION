#include <iostream>
using namespace std;
bool inarysearch(int arr[][3], int n, int m, int row, int target)
{
    int s = 0;
    int e = m - 1;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (arr[row][mid] == target)
        {
            cout << row << " " << mid << endl;
            return true;
        }
        if (arr[row][mid] < target)
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return false;
}
bool search(int arr[][3], int n, int m, int target)
{
    // find row;
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        // check starting element of row;
        if (arr[mid][0]==target)
        {
            cout<<mid<<" "<<0<<endl;
            return true;
        }

        // check ending element of row
        if (arr[mid][m - 1] == target)
        {
            cout<<mid<<" "<<m-1<<endl;
            return true;
        }
        // check element is present in between starting and  ending element
        if (target > arr[mid][0] && target < arr[mid][m - 1])
        {
            // apply binary search on col
            bool ans = inarysearch(arr, n, m, mid, target);
            return ans;
        }
        // check upar part
        if (target < arr[mid][0])
            e = mid - 1;
        // chek lower part
        if (target > arr[mid][mid - 1])
            s = mid + 1;
            mid = s + (e - s) / 2;
    }
    return false;
}
int main()
{
    int arr[3][3] = {1, 5, 9, 14, 20, 23,30, 34, 43};
    int n = 3;
    int m = 3;

    int target = 14;
    cout << search(arr, n, m, target)<<endl;
    return 0;  
}