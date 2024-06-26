#include <iostream>
using namespace std;
int const N = 1e3;
void heapify(int arr[], int n, int curr)
{
    while (2 * curr <= n)
    {
        int leftchild = 2 * curr;
        int rightchild = 2 * curr + 1;
        int maxchild = leftchild;
        if (rightchild <= n && arr[rightchild] > arr[maxchild])
        {
            maxchild = rightchild;
        }
        if (arr[maxchild] <= arr[curr])
        {
            return;
        }
        swap(arr[maxchild], arr[curr]);
        curr = maxchild;
    }
}
void remove(int arr[], int &size)
{
    swap(arr[1], arr[size]);
    size--;
    heapify(arr, size, 1);
}
void heapsort(int arr[], int n)
{
    // 1.heapify all parent node into max heap
    for (int i = n / 2; i > 0; i--)
    {
        heapify(arr, n, i);
    }
    // 2.keep deleting elements from max heap until size becomes 0
    while (n > 0)
    {
        remove(arr, n);
    }
}

int main()
{
    int n = 7;
    int arr[N] = {-1, 60, 10, 80, 50, 5, 20, 70};
    heapsort(arr, n);
    for (int i = 1; i <= n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}