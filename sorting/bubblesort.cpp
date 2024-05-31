#include <iostream>
#include <string>
#include <limits.h>
using namespace std;
int bubble(int arr[],int n )

{
    for(int i=1;i<n;i++)
    // for round 1 to n-1;
    {
        bool swapped=false;
        int maxindex=i;
      for(int j=0;j<=n-i;j++)
      {
        if(arr[j]>arr[j+1])
        {
            swap(arr[j],arr[j+1]);
            swapped=true;
        }
      }
      if(swapped==false)
      break;
    }
}

int main()
{
    int arr[] = {-2, 45, 0, 11, -9};

    bubble(arr, 5);
    for (int i = 0; i <5; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}