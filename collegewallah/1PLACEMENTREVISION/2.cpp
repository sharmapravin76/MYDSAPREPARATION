#include <bits/stdc++.h>
using namespace std;
void sortzeroesandones(vector<int> &v)
{
    int left_pointer = 0;
    int right_pointer = v.size() - 1;
    while (left_pointer < right_pointer)
    {
        /* code */
        if (v[left_pointer] == 1 && v[right_pointer] == 0)

        {
            v[left_pointer++] = 0;
            v[right_pointer++] = 1;
        }
        if (v[left_pointer] == 0)
        {
            left_pointer++;
        }
        if (v[right_pointer] == 1)
        {
            right_pointer--;
        }
    }
    return;
}

int main()
{
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int ele;
        cin >> ele;
        v.push_back(ele);
    }
    sortzeroesandones(v);
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    return 0;
}