

#include <bits/stdc++.h>

using namespace std;
int reversestr(string &str)
{
    int i = 0;
    int j = str.size() - 1;

    while (i < j)

    {
        swap(str[i], str[j]);

        i++;
        j--;
    }
}
int main()
{
    string str = "pravin";

    reversestr(str);

    cout << str;
    return 0;
}