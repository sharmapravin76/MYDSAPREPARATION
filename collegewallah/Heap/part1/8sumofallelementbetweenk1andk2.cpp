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
int remove(int arr[], int &size)
{
    int removedValue = arr[0];
    arr[0] = arr[size - 1];
    size--;
    heapify(arr, size, 0);
    return removedValue;
}
int sumofsmallest(int arr[], int size, int k1, int k2)
{
    for (int i = size / 2 - 1; i >= 0; i--)
    {
        heapify(arr, size, i);
    }
    int sum = 0;
    int elements = k2 - k1 - 1;
    // 2 remove k1 elements
    while (k1--)
    {
        remove(arr, size);
    }
    // 3 calculate sum by removing elements
   while (elements--) //(iska matlab k2-k-1)time loop chal rha aur k2-k1-1 uska value 2 ho gaya toh 2-- ho rha aur wo value minus hua fir 2 baar
    {
        sum += remove(arr, size);
    }
    return sum;
}
int main()
{
    int arr[7] = {20, 8, 22, 4, 12, 10, 14};
    int size = 7;
    int k1 = 3;
    int k2 = 6;
    cout << sumofsmallest(arr, size, k1, k2) << endl;
    return 0;
}
