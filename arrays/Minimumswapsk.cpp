#include<iostream>
using namespace std;
int minSwap(int arr[], int n, int k) {
    int windowSize = 0;
    for(int i = 0; i < n; i++)
        if(arr[i] <= k)
            windowSize++;
       
    // first window   
    int partOfGroupInWindow = 0;
    for(int i = 0; i < windowSize; i++)
        if(arr[i] <= k)
            partOfGroupInWindow++;
           
            
    int swapsRequired = windowSize - partOfGroupInWindow;
    int minimumSwapsRequired = swapsRequired;
    
    // slide the window
    for(int i = windowSize; i < n; i++) {
        if(arr[i - windowSize] <= k)
            partOfGroupInWindow--;
        if(arr[i] <= k)
            partOfGroupInWindow++;
            
        swapsRequired = windowSize - partOfGroupInWindow;
        minimumSwapsRequired = min(minimumSwapsRequired, swapsRequired);
    }
    
    return minimumSwapsRequired;
    
}

int main(){
    int arr[]={2, 1, 5, 6, 3};
 cout<<minSwap(arr, 5, 3);
  
    
    return 0;
}