
// *first pattern//
// #include <iostream>
// using namespace std;
// void pattern_print(int n)
// {
//     if (n == 0)
//     {
//         return;
//     }
//        pattern_print(n - 1); //  trust

//     for (int i = 1; i <=n; i++)
//     {
//         cout << i << " ";
//     }
//     cout<<" \n";

// }

// int main()
// {

//     pattern_print(9);
//     return 0;
// }


/*second pattern*/

// #include <iostream>
// using namespace std;
// void secondpattern_print(int n)
// {
//     if (n == 0)
//     {
//         return;
//     }
      

//     for (int i = 1; i <=n; i++)
//     {
//         cout << i << " ";
//     }
//     cout<<" \n";
//      secondpattern_print(n - 1); //  trust

// }

// int main()
// {

//     secondpattern_print(9);
//     return 0;
// }


/*third pattern*/
#include<iostream>
using namespace std;
void third_pattern(int n)
{
    if(n==1)
    {
        cout<<1<<"\n";
        return;
    }
for(int i=1;i<=n;i++)
{
    cout<<i<<" ";
}

cout<<"\n";
third_pattern(n-1);
// cout<<"\n";
for(int i=1;i<=n;i++)
{
    cout<<i<<" ";
}
cout<<"\n";
}

int main(){
    third_pattern(8);
    return 0;
}