#include <iostream>
using namespace std;

int main()
{
    int arr[] = {3, 4, 6, 7, 1};
    int targetsum = 5;
    // int size = 5;
    int pair = 0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            if (arr[i] + arr[j] == targetsum)
            {
                pair++;
            }
        }
    }
    cout << pair;

    return 0;
}