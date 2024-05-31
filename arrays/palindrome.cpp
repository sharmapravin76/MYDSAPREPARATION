#include <iostream>
using namespace std;
bool checkpalindrome(int arr[], int size)
{
    // starting index
    int i = 0;
    // ending index
    int j = size - 1;
    // compare left half with right half
    while (i < j)
    {
        if (arr[i] == arr[j])
        {
            // if match then check the remaining array
            i++;
            j--;
        }
        else
        {
            // if no match return false
            return false;
        }
    }
    // entire array is traversed so it is palindrome
    return true;
}
int main()
{
    int arr[] = {1, 2,1,4};
    cout << checkpalindrome(arr, 4) << endl;
    for (int i = 0; i < 4; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}