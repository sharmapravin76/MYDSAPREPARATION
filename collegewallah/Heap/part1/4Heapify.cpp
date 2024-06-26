#include <iostream>
using namespace std;
int const N = 1e3;
void heapify(int arr[], int size, int curr)
{
    while (2 * curr <= size)
    {
        int leftchild = 2 * curr;
        int rightchild = 2 * curr + 1;
        int minchild = leftchild;
        if (rightchild <= size && arr[rightchild] < arr[minchild])
        {
            minchild = rightchild;
        }
        if (arr[minchild] >= arr[curr])
        {
            return;
        }
        swap(arr[minchild], arr[curr]);
        curr = minchild;
    }
}

int main()
{
    int arr[N] = {-1, 60, 10, 80, 50, 5, 20, 70};
    int size = 7;
    for (int i = size / 2; i > 0; i--)
    {
        heapify(arr, size, i);
    }
    for (int i = 1; i <= size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}


// Update curr to 6, no further children, heapify ends for this subtree. what is the logic behind this
// ChatGPT
// The logic behind updating curr to minchild and ending the heapify process when there are no further children is to ensure that the subtree rooted at the current node maintains the heap property. Let's go through the specific part you mentioned:

// Explanation of curr = minchild;
// The line curr = minchild; updates curr to point to the index of the minimum child after a swap. This is necessary because, after a swap, the subtree rooted at the new position of the original value (curr now pointing to minchild) might still violate the heap property. By updating curr to minchild, the heapify function continues to ensure the heap property is maintained down the tree.

// Example
// Consider a part of the array during heapify at index 3:

// makefile
// Copy code
// Index:  0   1   2   3   4   5   6   7
// Array: [-1, 60, 10, 80, 50, 5, 20, 70]
// Heapify at index 3:
// Current node value: 80
// Left child index: 6 (value: 20)
// Right child index: 7 (value: 70)
// minchild initially is left child (index 6).
// The comparison between rightchild and minchild happens:

// Right child (70) is not less than left child (20), so minchild remains 6.
// The comparison between minchild and current node happens:

// minchild (20) is less than current node (80), so a swap is performed.
// Array after swap: [-1, 60, 10, 20, 50, 5, 80, 70]
// curr is updated to 6.
// Now, heapify continues with curr as 6:

// Current node value: 80
// Left child index: 12 (does not exist as 2 * 6 = 12 is greater than size)
// Right child index: 13 (does not exist as 2 * 6 + 1 = 13 is greater than size)
// Since there are no further children (as 2 * curr is greater than size), the heapify process ends for this subtree. The subtree rooted at index 6 is already a valid min-heap.

// Logic Behind Ending Heapify
// The heapify process ensures that:

// The node at curr is compared with its children.
// If the heap property is violated (i.e., the parent is greater than the smallest child in the case of a min-heap), a swap is performed.
// curr is updated to the index of the child where the swap occurred to continue the process.
// Heapify ends when:

// curr has no children (2 * curr > size).
// The heap property is satisfied (i.e., the parent is less than or equal to the smallest child).
// By updating curr to minchild and continuing the process, we ensure the entire subtree rooted at the original curr position is corrected to maintain the heap property. This way, when heapify ends, the subtree is a valid min-heap.

// Visualization
// Before heapify:

// markdown
// Copy code
//       80
//      /  \
//    20    70
// After heapify:

// markdown
// Copy code
//       20
//      /  \
//    80    70
// No further children for node 80, so heapify ends.

// Final Array State
// After heapifying the entire array:

// makefile
// Copy code
// Index:  0   1   2   3   4   5   6   7
// Array: [-1, 5, 10, 20, 50, 60, 80, 70]
// This ensures the array represents a valid min-heap.

// I hope this clarifies the logic behind updating curr to minchild and why heapify ends when there are no further children.