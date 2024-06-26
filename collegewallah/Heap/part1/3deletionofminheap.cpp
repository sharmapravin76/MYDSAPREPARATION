#include <iostream>
using namespace std;
int const N = 1e3;
void insertMinHeap(int minHeap[], int &size, int value)
{
    size++;
    minHeap[size] = value;
    int curr = size;
    while (curr / 2 > 0 && minHeap[curr / 2] > minHeap[curr])

    {
        swap(minHeap[curr / 2], minHeap[curr]);
        curr = curr / 2;
    }
}
void removeMinHeap(int minHeap[], int &size)
{
    minHeap[1] = minHeap[size];
    size--;
    int curr = 1;
    while (2 * curr <= size) // looping till curr node has child nodes
    {
        int leftchild = 2 * curr;
        int rightchild = 2 * curr + 1;
        int minchild = leftchild;
        if (rightchild <= size && minHeap[rightchild] < minHeap[leftchild])
        {
            minchild=rightchild;
            if (minHeap[minchild] >= minHeap[curr])
            {
                return;
            }
            swap(minHeap[minchild],minHeap[curr]);
            curr=minchild;
        }
    }
}
int main()
{
    int minHeap[N] = {-1, 10, 20, 30, 40, 50};
    int size = 5;
    int value = 5;
     insertMinHeap(minHeap, size, value);
    for (int i = 0; i <= size; i++)
    {
        cout << minHeap[i] << " ";
    }
    cout << endl;
    removeMinHeap(minHeap, size);
    for (int i = 0; i <= size; i++)
    {
        cout << minHeap[i] << " ";
    }
    cout << endl;

    return 0;
}


// Sure, let's dry run the removeMinHeap function with an example.

// Consider the following min heap before removal:

// makefile
// Copy code
// Index:  0  1   2   3   4   5
// Values: -1 10  20  30  40  50
// Let's say we want to remove the minimum value (which is 10). After removing 10, the heap looks like this:

// makefile
// Copy code
// Index:  0  1   2   3   4   5
// Values: -1 50  20  30  40  50
// Now, let's dry run the removeMinHeap function step by step:

// We assign the last element (50) to the root (index 1) and decrement the size:
// makefile
// Copy code
// Index:  0  1   2   3   4   5
// Values: -1 50  20  30  40  50
// Now, curr is 1, and the while loop starts.

// We find the left and right child of the current node:

// Left child (leftchild) index is 2 * curr = 2
// Right child (rightchild) index is 2 * curr + 1 = 3
// We compare the values of the left and right child nodes:

// minHeap[rightchild] is 20
// minHeap[leftchild] is 30
// Since minHeap[rightchild] < minHeap[leftchild], minchild is set to rightchild (which is 3).
// We check if the value of the minchild node is less than the current node:

// Since minHeap[minchild] (which is 20) is less than minHeap[curr] (which is 50), we swap them.
// After the swap:

// makefile
// Copy code
// Index:  0  1   2   3   4   5
// Values: -1 50  20  30  40  50
// We update curr to the index of the minchild node (which is 3).

// The while loop continues, and now curr is 3.

// We find the left and right child of the current node:

// Left child (leftchild) index is 2 * curr = 6 (out of range, so it's skipped)
// Since there are no more child nodes, the loop terminates.

// The min heap is now:

// makefile
// Copy code
// Index:  0  1   2   3   4   5
// Values: -1 20  50  30  40  50
// And the minimum element (10) has been successfully removed and replaced with the next minimum element (20).