#include <iostream>
#include<limits.h>
using namespace std;
void columnsum(int arr4[4][2], int m, int n)

{
    int ans=INT_MIN;
    for (int i = 0; i < m; i++)
    {
        int sum = 0;
        for (int j = 0; j < n; j++)
        {
            sum = sum + arr4[i][j];
        }
        ans=max(ans,sum);
        cout << sum <<" ";
        //  cout << ans << endl;
    }
    cout<<endl;
    // return ans;
}
int main()
{

    int arr4[4][2] = {{1, 2}, {2, 3}, {3, 4}, {4, 5}};
    columnsum(arr4, 4, 2);

    return 0;
}