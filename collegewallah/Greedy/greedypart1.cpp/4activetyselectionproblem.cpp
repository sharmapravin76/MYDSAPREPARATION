#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct meeting {
    int start;
    int end;
    int idx;
};

bool cmp(meeting m1, meeting m2) {
    return m1.end < m2.end;
}

void activety_selection(vector<meeting> &arr) {
    sort(arr.begin(), arr.end(), cmp);

    int count = 1; // Start with the first meeting
    meeting last = arr[0];

    for (int i = 1; i < arr.size(); i++) {
        if (arr[i].start > last.end) {
            count++;
            last = arr[i];
        }
    }

    cout << count;
}

int main() {
    int n;
    cin >> n;
    vector<meeting> arr;

    for (int i = 0; i < n; i++) {
        int s, e;
        cin >> s >> e;
        meeting m;
        m.start = s;
        m.end = e;
        m.idx = i + 1; // Indexing starts from 1
        arr.push_back(m);
    }

    activety_selection(arr);
    return 0;
}
