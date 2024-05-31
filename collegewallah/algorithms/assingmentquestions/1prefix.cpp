// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// int main()
// {

//     int n;
//     cin >> n;
//     vector<int> v;
//     for (int i = 0; i < n; i++)
//     {
//         int ele;
//         cin >> ele;
//         v.push_back(ele);
//     }
//     for (int i = 1; i < v.size(); i++)
//     {
//         v[i] += v[i - 1];
//     }

//     int q;
//     cin >> q;
//     while (q--);
//     int l, r;
//     cin >> l >> r;
//     int ans = 0;
//     ans = v[r] - v[l-1];
//     cout << ans << endl;
//     return 0;
// }

#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n; cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++){
        int ele;
        cin>>ele;
        v.push_back(ele);
    }
    int l,r;
    cin>>l>>r;
    int ans=0;
    for(int i=l;i<=r;i++)
    {

        ans=ans+v[i];
    }
    cout<<ans<<endl;
    return 0;
}