#include <iostream>
using namespace std;
bool triplet(int arr[], int n, int sum)

{

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                if (arr[i] + arr[j] + arr[k] == sum)
                {
                    cout << "Triplet is " << arr[i] << ", " << arr[j] << ", " << arr[k] << endl;
                
                    return true;
                }
            
        }
    }
    }
    return false;
}
int main()
{
    int arr[] = {12, 3, 4, 1, 6, 9};

    int sum = 24;
    cout << triplet(arr, 6, 24) << endl;

    // for (int i = 0; i <=5; i++)
    // {
    //     cout << arr[i] << " ";
    // }
    return 0;
}

