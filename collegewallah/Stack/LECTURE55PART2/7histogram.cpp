#include <iostream>
#include <stack>
#include <vector>
#include <limits.h>
using namespace std;
int histogram(vector<int> &arr)
{
    int n = arr.size();
    // vector<int> output(n, -1);
    stack<int> st;
    int ans = INT_MIN;
    st.push(0);
    for (int i = 1; i < n; i++)
    {
        while (!st.empty() and arr[i] < arr[st.top()])
        {
            int el = arr[st.top()]; // current bar to be removed and whose ans will be clac
             st.pop();
            int nsi = i;
            int psi = (st.empty()) ? -1 : st.top();
            cout << el << " " << nsi << " " << psi << "\n";
            ans = max(ans, el * (nsi - psi - 1));
           
        }
        st.push(i);
    }
    while (not st.empty())

    {
        int el = arr[st.top()];
        st.pop();
        int nsi = n;
        int psi = (st.empty()) ? (-1) : st.top();
        cout << el << " " << nsi << " " << psi << "\n";
        ans = max(ans, el * (nsi - psi - 1));

        st.pop();
    }
    return ans;
}

int main()
{

    vector<int> v = {2,1,5,6,2,3,0,2,1,5,6,2,3};
 for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    int ans = histogram(v);

    cout << ans << "\n";
    return 0;
}

// Let's walk through the dry run of the provided code with the input vector v = {2, 1, 5, 6, 2, 3, 0, 2, 1, 5, 6, 2, 3} to understand how it computes the maximum area of the histogram.

// Initialization
// v = {2, 1, 5, 6, 2, 3, 0, 2, 1, 5, 6, 2, 3}
// n = v.size() = 13
// ans = INT_MIN
// Stack st is empty.
// Iterations
// Initial push of index 0:

// st.push(0)
// Stack: [0]
// First Iteration (i = 1):

// v[i] = 1, v[st.top()] = 2
// 1 is less than 2, so we enter the while loop:
// el = v[st.top()] = 2
// Pop index 0 from the stack.
// nsi = 1
// psi = -1 (stack is empty)
// Area calculation: 2 * (1 - (-1) - 1) = 2
// Update ans = max(INT_MIN, 2) = 2
// Stack after pop: []
// Push index 1 onto the stack.
// Stack: [1]
// Second Iteration (i = 2):

// v[i] = 5, v[st.top()] = 1
// 5 is not less than 1, so push index 2 onto the stack.
// Stack: [1, 2]
// Third Iteration (i = 3):

// v[i] = 6, v[st.top()] = 5
// 6 is not less than 5, so push index 3 onto the stack.
// Stack: [1, 2, 3]
// Fourth Iteration (i = 4):

// v[i] = 2, v[st.top()] = 6
// 2 is less than 6, so we enter the while loop:
// el = v[st.top()] = 6
// Pop index 3 from the stack.
// nsi = 4
// psi = 2 (top of stack is now 2)
// Area calculation: 6 * (4 - 2 - 1) = 6
// Update ans = max(2, 6) = 6
// Stack after pop: [1, 2]
// v[i] = 2, v[st.top()] = 5
// 2 is less than 5, so we enter the while loop:
// el = v[st.top()] = 5
// Pop index 2 from the stack.
// nsi = 4
// psi = 1 (top of stack is now 1)
// Area calculation: 5 * (4 - 1 - 1) = 10
// Update ans = max(6, 10) = 10
// Stack after pop: [1]
// Push index 4 onto the stack.
// Stack: [1, 4]
// Fifth Iteration (i = 5):

// v[i] = 3, v[st.top()] = 2
// 3 is not less than 2, so push index 5 onto the stack.
// Stack: [1, 4, 5]
// Sixth Iteration (i = 6):

// v[i] = 0, v[st.top()] = 3
// 0 is less than 3, so we enter the while loop:
// el = v[st.top()] = 3
// Pop index 5 from the stack.
// nsi = 6
// psi = 4 (top of stack is now 4)
// Area calculation: 3 * (6 - 4 - 1) = 3
// Update ans = max(10, 3) = 10
// Stack after pop: [1, 4]
// v[i] = 0, v[st.top()] = 2
// 0 is less than 2, so we enter the while loop:
// el = v[st.top()] = 2
// Pop index 4 from the stack.
// nsi = 6
// psi = 1 (top of stack is now 1)
// Area calculation: 2 * (6 - 1 - 1) = 8
// Update ans = max(10, 8) = 10
// Stack after pop: [1]
// v[i] = 0, v[st.top()] = 1
// 0 is less than 1, so we enter the while loop:
// el = v[st.top()] = 1
// Pop index 1 from the stack.
// nsi = 6
// psi = -1 (stack is empty)
// Area calculation: 1 * (6 - (-1) - 1) = 6
// Update ans = max(10, 6) = 10
// Stack after pop: []
// Push index 6 onto the stack.
// Stack: [6]
// Seventh Iteration (i = 7):

// v[i] = 2, v[st.top()] = 0
// 2 is not less than 0, so push index 7 onto the stack.
// Stack: [6, 7]
// Eighth Iteration (i = 8):

// v[i] = 1, v[st.top()] = 2
// 1 is less than 2, so we enter the while loop:
// el = v[st.top()] = 2
// Pop index 7 from the stack.
// nsi = 8
// psi = 6 (top of stack is now 6)
// Area calculation: 2 * (8 - 6 - 1) = 2
// Update ans = max(10, 2) = 10
// Stack after pop: [6]
// Push index 8 onto the stack.
// Stack: [6, 8]
// Ninth Iteration (i = 9):

// v[i] = 5, v[st.top()] = 1
// 5 is not less than 1, so push index 9 onto the stack.
// Stack: [6, 8, 9]
// Tenth Iteration (i = 10):

// v[i] = 6, v[st.top()] = 5
// 6 is not less than 5, so push index 10 onto the stack.
// Stack: [6, 8, 9, 10]
// Eleventh Iteration (i = 11):

// v[i] = 2, v[st.top()] = 6
// 2 is less than 6, so we enter the while loop:
// el = v[st.top()] = 6
// Pop index 10 from the stack.
// nsi = 11
// psi = 9 (top of stack is now 9)
// Area calculation: 6 * (11 - 9 - 1) = 6
// Update ans = max(10, 6) = 10
// Stack after pop: [6, 8, 9]
// v[i] = 2, v[st.top()] = 5
// 2 is less than 5, so we enter the while loop:
// el = v[st.top()] = 5
// Pop index 9 from the stack.
// nsi = 11
// psi = 8 (top of stack is now 8)
// Area calculation: 5 * (11 - 8 - 1) = 10
// Update ans = max(10, 10) = 10
// Stack after pop: [6, 8]
// Push index 11 onto the stack.
// Stack: [6, 8, 11]
// Twelfth Iteration (i = 12):

// v[i] = 3, v[st.top()] = 2
// 3 is not less than 2, so push index 12 onto the stack.
// Stack: [6, 8, 11, 12]
// Remaining elements in the stack:
// el = v[st.top()] = 3
// Pop index 12 from the stack.
// nsi = 13
// psi = 11 (top of stack is now 11)
// Area calculation: 3 * (13 - 11 - 1) = 3
// Update ans = max(10, 3) = 10
// Stack after pop: [6, 8, 11]
// el = v[st.top()] = 2
// Pop index 11 from the stack.
// nsi = 13
// psi = 8 (top of stack is now 8)
// Area calculation: 2 * (13 - 8 - 1) = 8
// Update ans = max(10, 8) = 10
// Stack after pop: [6, 8]
// el = v[st.top()] = 1
// Pop index 8 from the stack.
// nsi = 13
// psi = 6 (top of stack is now 6)
// Area calculation: 1 * (13 - 6 - 1) = 6
// Update ans = max(10, 6) = 10
// Stack after pop: [6]
// el = v[st.top()] = 0
// Pop index 6 from the stack.
// nsi = 13
// psi = -1 (stack is empty)
// Area calculation: 0 * (13 - (-1) - 1) = 0
// Update ans = max(10, 0) = 10
// Stack after pop: []
// Final Answer:
// The maximum area in the histogram is 10.
// Summary of Output
// For each pop operation during the process, the corresponding values of el, nsi, and psi are printed, helping to understand the areas being calculated at each step. The final output is the maximum area found, which is 10.

// Note:
// There is an extra st.pop() within the final while loop which is unnecessary and causes double popping from the stack, leading to potential errors. The corrected final while loop should look like this:

// cpp
// Copy code
// while (not st.empty())
// {
//     int el = arr[st.top()];
//     st.pop();
//     int nsi = n;
//     int psi = (st.empty()) ? (-1) : st.top();
//     cout << el << " " << nsi << " " << psi << "\n";
//     ans = max(ans, el * (nsi - psi - 1));
// }
// This ensures that each element is popped once and processed correctly.