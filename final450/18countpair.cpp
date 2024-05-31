#include <iostream>
using namespace std;
int paircount(int arr[], int n, int k)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            int sum = arr[i] + arr[j];

            if (sum == k)
            {
                count++;
            }
        }
    }
    return count;
}

int main()
{
    int arr[] = {1, 5, 7, 1};
//    int arr[]={ 1, 1, 1, 1};
    cout<<paircount(arr, 4, 2);
    return 0;
}