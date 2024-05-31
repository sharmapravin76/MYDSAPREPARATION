#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 5, 6, 67};
    int key = 15;
    int ans = -1;
    int size = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i <5; i++)
    {
        if (arr[i] == key)
        {
            ans = i;
            break;
        }
    }
    cout<<ans<<endl;;
    cout<<size;
    return 0;
}