#include <iostream>
using namespace std;
int const N = 1e3;
void heapify(int arr[], int size, int curr)
{
    while (2 * curr + 1 < size)
    {
        int leftchild = 2 * curr + 1;
        int rightchild = 2 * curr + 2;
        int minchild = leftchild;
        if (rightchild < size && arr[rightchild] < arr[leftchild])
        {
            minchild = rightchild;
        }
        if (arr[minchild] >= arr[curr])
        {
            return;
        }
        swap(arr[curr], arr[minchild]);
        curr = minchild;
    }
}
void remove(int arr[], int &size)
{
    arr[0] = arr[size - 1];
    heapify(arr, size, 0);
}
int kthsmallestelement(int arr[], int size, int k)
{
    // create min heap
    for (int i  = size / 2 - 1; i >= 0; i--)
    {
        heapify(arr, size, i);
    }
    // 2 remove k-1 elements
    k -= 1;
    while (k--)
    {
        remove(arr, size);
    }
    return arr[0];
}
int main()
{
    int arr[N] = {60, 10, 80, 50, 5, 20, 70};
    int size = 7;
    cout << kthsmallestelement(arr, size, 3) << endl;
    return 0;
}
// 3rd smallest element is 20