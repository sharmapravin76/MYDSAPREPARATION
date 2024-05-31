

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int largestaltitude(vector<int>& v)
{
    int maxo = 0;
    int sum = 0;
    for(int x : v) {
        sum += x; // Fix the variable name to x instead of v
        maxo = max(maxo, sum);
    }
    return maxo; // Add a return statement to return the maximum altitude
}

int main() {
    int n;
    cin >> n;
    vector<int> v;
    for(int i = 0; i < n; i++) {
        int ele;
        cin >> ele;
        v.push_back(ele);
    }
    cout << largestaltitude(v) << endl; // Correct the function call syntax
    return 0;
}
