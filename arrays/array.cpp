// #include<iostream>
// using namespace std;
// void printarray(int arr[],int size)
// {
//     for(int i=0;i<size;i++)
//     {
// cout<< arr[i]<<" ";
//     }
// }
// int main(){
//     int  arr[5]={3,6,9,2,18};
//     printarray(arr,5);
//     return 0;
// }

// #include <iostream>
// using namespace std;
// void util(int arr[], int size)
// {
//     arr[0] = 23;
//     cout << "printing util function" << endl;
//     printarray(arr, 3);
// }
// int main()
// {
//     int arr[] = {1, 2, 3};
//     util(arr, 3);
//     cout << "printing in main fucntion" << endl;
//     printarray(arr, 3);

//     return 0;
// }



// array ka value change index meh


// #include <iostream>
// using namespace std;
// void printarray(int arr[], int size)
// {
//     for (int i = 0; i < size; i++)
//     {
//         cout << arr[i] << " ";
//     }
// }
// void utilll(int arr[], int size)
// {
//     arr[0] = 23;
//     cout << "printing in util function" << endl;
//     printarray( arr, 3);
// }
// int main()
// {

//     int arr[] = {3,6,9};
//     utilll(arr, 3);
//     cout << "printing in main function" << endl;
//     printarray(arr, 3);
//     // int  arr[5]={3,6,9,2,18};
//     // printarray(arr,5);
//     return 0;
// }

// LINEAR SEARCH
// #include<iostream>
// using namespace std;

// int main(){
//     int arr[100];
//     cout<<"enter the number of elements"<<endl;
//     int n;
//     cin>>n;
//     // taking input in array;
//     for(int i=0;i<n;i++)
//     {
//         cin>>arr[i];

//     }
//     cout<<" printing the elements in array"<<endl;
//     printarray(arr,n);

//     return 0;
// }

// ARRAY INPUT and linear search
#include <iostream>
using namespace std;
void printarray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
bool search(int arr[], int size, int target)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
            return true;
    }
    return false;
}
int main()
{
    int arr[100]; 
    cout << "enter the number of elements" << endl;
    int n;
    cin >> n;
    // taking input in array;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    if (search(arr, 5, 7))
    {
        cout << "element found" << endl;
    }
    else
    {
        cout << "element not found" << endl;
    }
    cout << " printing the elements in array" << endl;
    printarray(arr, n);

    return 0;
}
