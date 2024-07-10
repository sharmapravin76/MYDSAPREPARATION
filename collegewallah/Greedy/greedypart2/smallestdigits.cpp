#include <iostream>
#include <vector>
using namespace std;
void smallestnumber(int d, int s)
{
    vector<char> v(d, '0');
    if (9 * d < s)
    {
        cout << "-1";
        return;
           
    
}
s--;
    int i;
    for (i = d - 1; i >= 0; i--)
    {
        if(s<9)break;
        v[i] = '9';
        s -= 9;
    }

       v[0]='1';
       v[i]=char(s+'0');
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i];
    }
}

int main()
{
    int d, s;
    cin >> d>>s;

    smallestnumber(d, s);
    return 0;
}