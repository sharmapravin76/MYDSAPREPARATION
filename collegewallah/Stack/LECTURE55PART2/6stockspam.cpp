#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> pge(vector<int> &arr)
{
    int n = arr.size();
    reverse(arr.begin(), arr.end());
    vector<int> output(n, -1);
    stack<int> st; 
    st.push(0);
    for (int i = 1; i < n; i++)
    {
        while (!st.empty() and arr[i] > arr[st.top()])
        {
            output[st.top()] = n - i - 1;//beacuse after reverse the indexes will change
            st.pop();
        }
        st.push(i);
    }
    while (not st.empty())

    {
        output[st.top()] = -1;
        st.pop();
    }
    reverse(output.begin(), output.end());
    reverse(arr.begin(), arr.end());
    return output;
}

int main()
{
    // int n;
    // cin >> n;
    // vector<int> v;
    // while (n--)
    // {
    //     int x;
    //     cin >> x;
    //     v.push_back(x);
    // }
    vector<int> v = {100, 80, 60, 70, 60, 75, 85};
    vector<int> res = pge(v); // 2-next greater element then again ->reverse the element then we will get previousgreaterelement
    for (int i = 0; i < res.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < res.size(); i++)
    {
        cout << (i - res[i]) << " ";
    }

    return 0;
}


// To explain the line output[st.top()] = n - i - 1, let's break down its purpose and context within the function. Here is the function again for reference:

// cpp
// Copy code
// vector<int> pge(vector<int> &arr)
// {
//     int n = arr.size();
//     reverse(arr.begin(), arr.end());
//     vector<int> output(n, -1);
//     stack<int> st;
//     st.push(0);
//     for (int i = 1; i < n; i++)
//     {
//         while (!st.empty() and arr[i] > arr[st.top()])
//         {
//             output[st.top()] = n - i - 1; // this is the line we are explaining
//             st.pop();
//         }
//         st.push(i);
//     }
//     while (not st.empty())
//     {
//         output[st.top()] = -1;
//         st.pop();
//     }
//     reverse(output.begin(), output.end());
//     reverse(arr.begin(), arr.end());
//     return output;
// }
// Context
// This function finds the previous greater element (PGE) by first reversing the array, finding the next greater element (NGE) for the reversed array, and then reversing the result to get the PGE for the original array.

// Purpose of the Line
// The line output[st.top()] = n - i - 1 is used to update the output array with the index of the next greater element in the reversed array. Let's break down the components of this line:

// Breakdown of Components
// st.top():

// st.top() gives the index of the element currently at the top of the stack.
// This index corresponds to an element in the reversed array arr that has not yet found its next greater element.
// n - i - 1:

// n is the size of the array.
// i is the current index in the reversed array.
// n - i - 1 calculates the original index in the non-reversed array.
// This is necessary because the array was reversed at the beginning, so the indices in the reversed array need to be mapped back to their original positions.
// Example
// Let's take the array v = {100, 80, 60, 70, 60, 75, 85} and see how this works:

// Original Array: {100, 80, 60, 70, 60, 75, 85}

// Reversed Array: {85, 75, 60, 70, 60, 80, 100}

// Iterating through the reversed array:

// First Iteration (i = 1):

// arr[i] = 75, st.top() = 0 (corresponding to arr[0] = 85)
// 75 is not greater than 85, so we push i (1) onto the stack.
// Stack: [0, 1]
// Second Iteration (i = 2):

// arr[i] = 60, st.top() = 1 (corresponding to arr[1] = 75)
// 60 is not greater than 75, so we push i (2) onto the stack.
// Stack: [0, 1, 2]
// Third Iteration (i = 3):

// arr[i] = 70, st.top() = 2 (corresponding to arr[2] = 60)
// 70 is greater than 60:
// Update output[2] = n - 3 - 1 = 7 - 3 - 1 = 3
// Pop 2 from the stack.
// Stack: [0, 1]
// Push i (3) onto the stack.
// Stack: [0, 1, 3]
// Fourth Iteration (i = 4):

// arr[i] = 60, st.top() = 3 (corresponding to arr[3] = 70)
// 60 is not greater than 70, so we push i (4) onto the stack.
// Stack: [0, 1, 3, 4]
// Fifth Iteration (i = 5):

// arr[i] = 80, st.top() = 4 (corresponding to arr[4] = 60)
// 80 is greater than 60:
// Update output[4] = n - 5 - 1 = 7 - 5 - 1 = 1
// Pop 4 from the stack.
// 80 is greater than 70:
// Update output[3] = n - 5 - 1 = 7 - 5 - 1 = 1
// Pop 3 from the stack.
// 80 is greater than 75:
// Update output[1] = n - 5 - 1 = 7 - 5 - 1 = 1
// Pop 1 from the stack.
// Push i (5) onto the stack.
// Stack: [0, 5]
// Sixth Iteration (i = 6):

// arr[i] = 100, st.top() = 5 (corresponding to arr[5] = 80)
// 100 is greater than 80:
// Update output[5] = n - 6 - 1 = 7 - 6 - 1 = 0
// Pop 5 from the stack.
// 100 is greater than 85:
// Update output[0] = n - 6 - 1 = 7 - 6 - 1 = 0
// Pop 0 from the stack.
// Push i (6) onto the stack.
// Stack: [6]
// Final Output Array before Reversing:

// output = [0, 1, 3, 1, 1, 0, -1]
// Reversing the output array:

// output = [-1, 0, 1, 1, 3, 1, 0]
// Reversing the arr array back:

// Original array is restored to {100, 80, 60, 70, 60, 75, 85}
// Summary of Key Line
// The line output[st.top()] = n - i - 1 updates the output array with the original index of the next greater element for the element at st.top() in the reversed array.
// This helps in mapping back the indices correctly to the original array after reversing.
// Output and Final Calculation
// The purpose of cout << (i - res[i]) << " "; is to print the difference between the current index and the index of the previous greater element. This helps in understanding how far the previous greater element is from the current element.

// Output after all calculations:

// 100 80 60 70 60 75 85
// Differences: 1 1 3 1 1 2 6