#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
struct meeting

{
    int start;
    int end;
    int idx;
};

bool cmp(meeting m1, meeting m2)
{
    return m1.end < m2.end;
}
void print_max_meeting(vector<meeting> &arr)
{
    sort(arr.begin(), arr.end(), cmp);
    cout << arr[0].idx << " ";
    meeting last = arr[0];
    for (int i = 1; i < arr.size(); i++)
    {
        if (arr[i].start > last.end)
        {
            cout << arr[i].idx<<" ";
            last = arr[i];
        }
    }
}
int main()
{
    int n;
    cin >> n;
    vector<meeting> arr;
    int i = 0;
    while (n--)
    {
        int s, e;
        cin>>s>>e;
        i++;
        meeting m;
        m.start = s;
        m.end = e;
        m.idx = i;
        arr.push_back(m);
    }
    print_max_meeting(arr);
    return 0;
}

// HERE IS THE EXAMPLE WITH DRY RUN
// Yes, typically in programming languages like C++ (and many others), when you have an array or a vector, elements are indexed starting from 0. So, if you have a vector arr containing elements:

// cpp
// Copy code
// arr[0] = (6, 1, 1)
// arr[1] = (3, 4, 2)
// arr[2] = (0, 6, 3)
// arr[3] = (5, 7, 4)
// arr[4] = (8, 9, 5)
// arr[5] = (5, 9, 6)
// Here's what each index corresponds to:

// arr[0] refers to the first element in the vector, which is (6, 1, 2).
// arr[1] refers to the second element in the vector, which is (3, 4, 2).
// arr[2] refers to the third element in the vector, which is (0, 6, 3).
// arr[3] refers to the fourth element in the vector, which is (5, 7, 4).
// arr[4] refers to the fifth element in the vector, which is (8, 9, 5).
// arr[5] refers to the sixth element in the vector, which is (5, 9, 6).
// In this context:

// (6, 1, 2) means:

// Start time: 6
// End time: 1
// Index: 2
// (3, 4, 2) means:

// Start time: 3
// End time: 4
// Index: 2
// These indices (2 in both cases) uniquely identify each meeting in the vector. Each element in the vector has a specific index starting from 0 and increasing sequentially.

// Therefore, 6 and 1 are values in arr[0], representing the start and end times of the first meeting in the array/vector, respectively, and 2 is the index of that meeting.






