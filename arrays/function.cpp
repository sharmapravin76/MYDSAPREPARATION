// #include <iostream>
// using namespace std;
// void printnumber(int num)
// {
//     num=10;
//     cout<<"printing number "<<num<<endl;

// }
// int main()
// {
//     int num=70;
//     printnumber(num);
//     cout<<"in main function"<<num<<endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;
// void suresh(int k)
// {
//     cout << "suresh integer" << k << endl;
// }
// void rahul(int m)
// {
//     cout << "rahul integer" << m << endl;
//     m++;
//     suresh(m);
// }
// void ramesh(int n)
// {
//     cout << "ramesh integer" << n << endl;
//     n ++;
//     rahul(n);
// }
// int main()
// {
//     int n = 21;
//     ramesh(n);
//     cout<<"wapas in main function "<<n<<endl;
//     return 0;
// }

// *even numbers till n
// #include<iostream>
// using namespace std;
// void even(int n)
// {
//    for(int i=2;i<=n;i=i+2)
//    {
//     cout<<i<<" ";
//    }
// }

// int main(){
//     int n=15;
//     even(n);
//     return 0;
// }

// *square of number

// #include <iostream>
// #include <cmath>
// using namespace std;
// void printsquare(int n)
// {

//     for (int i = 1; i <= n; i++)
//     {

//         cout << i * i << " ";
//     }
// }

// int main()
// {
//     int n = 100;
//     printsquare(n);
//     return 0;
// }

// FACTORIAL OF NUMBER
// #include <iostream>
// using namespace std;
// int factorial(int n)
// {
//     int ans = 1;
//     for (int i = n; i >= 1; i--)
//     {
//         ans = ans * i;
//     }
//     return ans;
// }

// int main()
// {
//     int n = 25;
//     int fact = factorial(n);
//     cout << fact << endl;
//     return 0;
// }

#include <iostream>
using namespace std;
void nameprint(int n)
{
    
    for(int i=1;i<=n;i++)
    {
        cout<<"pravin"<<endl;
    }
}

int main()
{
    int n = 10;
    nameprint(n);
    return 0;
}