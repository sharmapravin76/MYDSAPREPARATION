//USING PUSH 0(N)

#include <iostream>
#include <stack>
using namespace std;
class queue
{
    stack<int> st;
public:
    queue() {}
    void push(int x)
    { // q ueue.enqueue 
        this->st.push(x);
    }
    void pop()
    { // queue.dequeue
        if (this->st.empty())
            return;
        stack<int> temp;
        while (this->st.size() > 1)
        {
            temp.push(st.top());
         st.pop();
        }
        // now stack size is 1,and we are at the bottom element
        this->st.pop();
        while (not temp.empty())
        {
            this->st.push(temp.top());
            temp.pop();
        }
    }
    bool empty()
    {
        return this->st.empty();
    }
    int front()
    {
        if (this->st.empty())
            return -1;
        stack<int> temp;
        while (this->st.size() > 1)
        {
            temp.push(st.top());
            st.pop();
        }
        // now stack size is 1,and we are at the bottom element
        int result = this->st.top();
        while (not temp.empty())
        {
            this->st.push(temp.top());
            temp.pop();
        }
        return result;
    }
};

int main()
{
    queue qu;
    qu.push(10);
    qu.push(20);
    qu.push(30);
    qu.push(40);
    qu.pop();
    while (not qu.empty())
    {
        cout << qu.front() << " ";
        qu.pop();
    }

    return 0;
}




// Let's break down the process of transferring elements from the original stack st to the temporary stack temp using the while loop:

// Check Condition

// while (this->st.size() > 1)
// This loop iterates until there is only one element left in the original stack st. We don't want to remove the last element (front element) from st immediately because we need it to maintain the order when moving elements back later.
// Push to Temporary Stack

// temp.push(st.top());
// Here, the top element of the original stack st is pushed onto the temporary stack temp.
// This operation preserves the order of elements because the top element of st (the one being pushed onto temp) is the last one in the original order.
// Pop from Original Stack

// st.pop();
// After pushing the top element onto temp, we remove it from the original stack st.
// This operation effectively removes the top element (front element) from st, reducing its size by one.
// The loop then continues, repeating these steps until there is only one element left in st.
// Visual Representation
// Let's visualize the process with a simple example:

// Original Stack st: [10, 20, 30, 40] (top of the stack is 40)
// Temporary Stack temp: []
// Initial State:
// vbnet
// Copy code
// st:   [10, 20, 30, 40]   (top of the stack is 40)
// temp: []
// Iteration 1:
// temp.push(st.top());: Push 40 from st to temp.
// st.pop();: Remove 40 from st.
// vbnet
// Copy code
// st:   [10, 20, 30]   (top of the stack is 30)
// temp: [40]
// Iteration 2:
// temp.push(st.top());: Push 30 from st to temp.
// st.pop();: Remove 30 from st.
// vbnet
// Copy code
// st:   [10, 20]   (top of the stack is 20)
// temp: [40, 30]
// Iteration 3:
// temp.push(st.top());: Push 20 from st to temp.
// st.pop();: Remove 20 from st.
// vbnet
// Copy code
// st:   [10]   (top of the stack is 10)
// temp: [40, 30, 20]
// After this loop, there's only one element left in the original stack st (10). We have successfully transferred all elements except the last one to the temporary stack temp.

// PART 2

// this->st.pop();
//         while (not temp.empty())
//         {
//             this->st.push(temp.top());
//             temp.pop();
//         }
//     } after this
// ChatGPT
// After executing this->st.pop();, the last element (the front of the queue) is removed from the original stack st. Then, in the subsequent while loop:

// We transfer elements from the temporary stack temp back to the original stack st.
// Let's break down each step:

// Pop the Last Element from Original Stack

// cpp
// Copy code
// this->st.pop();
// This line removes the last element (the front element) from the original stack st, effectively dequeuing it from the queue.
// Transfer Elements Back to Original Stack

// cpp
// Copy code
// while (not temp.empty()) {
//     this->st.push(temp.top());
//     temp.pop();
// }
// In this loop, we iterate through the temporary stack temp until it becomes empty.
// For each iteration:
// We push the top element of temp onto the original stack st.
// Then, we pop that element from temp.
// This process effectively transfers all elements back from temp to st, in the reverse order in which they were originally removed.
// After this loop completes, st will contain all the elements in the correct order, except for the one that was popped in the beginning.
// Visual Representation
// Let's visualize the process with a simple example:

// Original Stack st: [10, 20, 30, 40] (top of the stack is 40)
// Temporary Stack temp: [50, 60, 70] (top of the stack is 70)
// After this->st.pop();:
// The last element (40) is removed from st.
// vbnet
// Copy code
// st:   [10, 20, 30]   (top of the stack is 30)
// temp: [50, 60, 70]   (top of the stack is 70)
// Transfer Elements Back from temp to st:
// We push elements from temp back into st in reverse order.
// Iteration 1:

// Push 70 from temp to st.
// Pop 70 from temp.
// vbnet
// Copy code
// st:   [10, 20, 30, 70]   (top of the stack is 70)
// temp: [50, 60]   (top of the stack is 60)
// Iteration 2:

// Push 60 from temp to st.
// Pop 60 from temp.
// vbnet
// Copy code
// st:   [10, 20, 30, 70, 60]   (top of the stack is 60)
// temp: [50]   (top of the stack is 50)
// Iteration 3:

// Push 50 from temp to st.
// Pop 50 from temp.
// vbnet
// Copy code
// st:   [10, 20, 30, 70, 60, 50]   (top of the stack is 50)
// temp: []   (temp is empty)
// Now, all elements from temp have been transferred back to st. st contains all elements in the correct order after the dequeue operation.


// 1/2

//  temp.push(st.top());  this->st.push(temp.top()); difference between them
// ChatGPT
// The lines temp.push(st.top()); and this->st.push(temp.top()); are part of different operations and serve different purposes within the pop() function:

// temp.push(st.top());:

// This line pushes the top element of the original stack st onto the temporary stack temp.
// It is part of the process where elements are transferred from st to temp.
// This operation is essential for maintaining the order of elements during the transfer.
// this->st.push(temp.top());:

// This line pushes the top element of the temporary stack temp back onto the original stack st.
// It is part of the process where elements are transferred back from temp to st after the dequeue operation.
// This operation ensures that the elements are transferred back to the original stack in the correct order, effectively maintaining the queue structure.
// In summary, the first line is responsible for transferring elements from st to temp during the dequeue operation, while the second line is responsible for transferring elements back from temp to st after the dequeue operation is completed.

// why only temp.push and why this->st.push?
// ChatGPT
// In the context of the pop() function in the queue implementation using stacks, temp and this->st serve different purposes:

// temp:

// temp is a local variable representing a temporary stack.
// It is used to hold elements temporarily while we dequeue an element from the front of the queue (this->st).
// Elements are transferred from this->st to temp during the dequeue operation to preserve their order.
// this->st:

// this->st represents the original stack, which serves as the underlying data structure for the queue.
// It holds the elements of the queue.
// During the dequeue operation, we remove the front element from this->st and then transfer the remaining elements (stored temporarily in temp) back to this->st.
// Now, let's examine why we use temp.push(st.top()); and this->st.push(temp.top());:

// temp.push(st.top());:

// This line is within the loop where we transfer elements from this->st to temp.
// We use temp.push() because we are pushing elements onto the temporary stack temp. These elements are temporarily removed from the front of the queue (this->st) during the dequeue operation.
// this->st.push(temp.top());:

// This line is within the loop where we transfer elements from temp back to this->st.
// We use this->st.push() because we are pushing elements back onto the original stack this->st. These elements are being restored to their original position in the queue after the dequeue operation.
// In summary, we use temp.push() to add elements to the temporary stack temp, and we use this->st.push() to add elements back to the original stack this->st. Each stack serves a distinct purpose in the dequeue operation, hence the difference in the usage of push() between temp and this->st.