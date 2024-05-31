// #include <iostream>

// #include <string>
// #include <string.h>
// #include <cstring>
// #include <commctrl.h>
// using namespace std;
// void selectionsort(char fruit[][60], int n)
// {
//     for (int i = 0; i < n - 1; i++){
//         int min_index = i;
//     for (int j = i + 1; j < n; j++)
//     {
//         if(strcmp(fruit[min_index],fruit[j]>0)
//         {
//             min_index = j;
//         }
//     }
//     if(i!=min_index)
//     {
//         swap(fruit[i],fruit[min_index]);
//         char temp[60];
//         strcpy()
    
// }
// }
// int main()
// {
//     char fruit[][60] = {"papaya", "lime", "watermelon", "apple", "mango", "kiwi"};
//     int n = sizeof(fruit) / sizeof(fruit[0]);

//     selectionsort(fruit, n);
//     for (int i = 0; i < n; i++)
//     {
//         cout << fruit[i] << " ";
//     }
//     cout << endl;

//     return 0;
// }


#include <iostream>
#include <cstring> // Use <cstring> instead of <string.h> for C++ compatibility
using namespace std;

void selectionsort(char fruit[][60], int n)
{
    for (int i = 0; i < n - 1; i++) {
        int min_index = i;
        for (int j = i + 1; j < n; j++) {
            if (strcmp(fruit[min_index], fruit[j]) > 0) {
                min_index = j;
            }
        }
        if (i != min_index) {
            char temp[60];
            strcpy(temp, fruit[i]);
            strcpy(fruit[i], fruit[min_index]);
            strcpy(fruit[min_index], temp);
        }
    }
}

int main()
{
    char fruit[][60] = {"papaya", "lime", "watermelon", "apple", "mango", "kiwi"};
    int n = sizeof(fruit) / sizeof(fruit[0]);

    selectionsort(fruit, n);
    for (int i = 0; i < n; i++)
    {
        cout << fruit[i] << " ";
    }
    cout << endl;

    return 0;
}
