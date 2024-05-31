#include <iostream>
#include <vector>

using namespace std;
int subarrayodd(vector<int>&v)
{
    int ans=0;
    int even=0;
    int odd=0;
    int sum=0;
    for(int x:v)
    {
        sum+=x;
        if(sum%2==0)
        {
            ans+=odd;
            even++;

        }
        else{
            ans+=1+even;
            odd++;
        }
    }

    return ans;
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
    cout<<subarrayodd(v)<<endl;
    return 0;
}