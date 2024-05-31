#include <iostream>
using namespace std;

int main()
{
    int arr[] = {5, 10, 15, 20, 26};
    int n = 5;
    int x = 10;
    int j = 1;
    int i = 0;
    bool found = false;
    while (i < n and j < n)
    {
        if (abs(arr[i] - arr[j]) == x)
        {
            found = true;
            break;
        }
        else if (abs(arr[i] - arr[j]) < x)
        {
            j++;
        }
        else
        {
            i++;
        }
    }
    if (found == true)
        cout << "yes";
    else
        cout << "no";
    return 0;
}