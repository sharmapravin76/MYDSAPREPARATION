#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
struct item
// This is a definition of a C++ struct named item.In data structures and
// algorithms(DSA),
// a struct is a user - defined data type that groups related data under a single name.In this case:
//  Purpose: It defines a structure named item that holds two data members (value and weight), which presumably represent attributes of an item in a collection or inventory.
//  Usage in DSA: This structure is commonly used in algorithms dealing with problems such as the Knapsack problem, where each item has a value and a weight that need to be considered for optimization.
//  Here’s a breakdown:
//  int value;: Represents the value or benefit associated with the item.
//  int weight;: Represents the weight or cost associated with the item.
//  In DSA, structures like these are fundamental for modeling real-world scenarios where objects have multiple attributes that need to be managed and processed efficiently.
{
    int value;//(profit hee value hai)
    int weight;
};
bool cmp(item i1, item i2)
{
    // custom comparator for sorting
    double v_w_i1 = static_cast<double>(i1.value) / i1.weight;
    double v_w_i2 = static_cast<double>(i2.value) / i2.weight;
    return v_w_i1 > v_w_i2;
}
double fractional(int W, vector<item> &items)
// tc=0(nlogn)
// sc=0(sorting)

{
    double ans = 0;
    sort(items.begin(), items.end(), cmp);
    for (int i = 0; i < items.size(); i++)
    {
        cout << items[i].value << " " << items[i].weight << "\n";
    }
    for (const auto &item : items)

    // {
        // if (W <= 0)
        //     break;

        {
            if (item.weight <= W)
            {
                ans += item.value;
                W -= item.weight;
            }
            else
            {
                // we cant pick the whole item as space in knapsack is less
                double fraction = static_cast<double>(W) / item.weight;
                ans += fraction * item.value;
                W = 0;
            }
        }
    // }
    return ans;
}
// int main(int argc, char const *argv[])
int main(void)
{
    int n, W;
    cin >> n >> W;
    vector<item> items;
    for (int i = 0; i < n; i++)
    {
        int v, W;
        cin >> v >> W;
        item it;
        it.value = v;
        it.weight = W;
        items.push_back(it);
    }
    cout << fractional(W, items) << "\n";

    return 0;
}

// IN LEETCODE THIS QUESTION IS 1710

// explain
// Iterate through each item:

// First Iteration:

// Current item: {60, 10}
// item.weight (10) is less than or equal to W (50).
// Add item.value (60) to ans. ans becomes 60.
// Subtract item.weight (10) from W. W becomes 40.
// The state after the first iteration:
// ans = 60
// W = 40
// Second Iteration:

// Current item: {100, 20}
// item.weight (20) is less than or equal to W (40).
// Add item.value (100) to ans. ans becomes 160.
// Subtract item.weight (20) from W. W becomes 20.
// The state after the second iteration:
// ans = 160
// W = 20
// Third Iteration:

// Current item: {120, 30}
// item.weight (30) is greater than W (20).
// Calculate the fraction of the item that can be taken:
// Fraction = static_cast<double>(W) / item.weight = 20 / 30 ≈ 0.6667
// Add the fractional value to ans: fraction * item.value = 0.6667 * 120 ≈ 80.
// ans becomes 160 + 80 = 240.
// Set W to 0 as the knapsack is now full.
// The state after the third iteration:
// ans = 240
// W = 0
// Return the final answer:

// The function returns ans, which is 240.
// Summary
// The code effectively calculates the maximum value that can be carried in a knapsack with a given capacity by iterating through the sorted items and either taking the whole item if it fits or taking a fraction of it if it doesn't. The process continues until the knapsack is full.

// This dry run with the example {60, 10}, {100, 20}, {120, 30} and W = 50 demonstrates how the algorithm works step-by-step to reach the maximum value of 240.