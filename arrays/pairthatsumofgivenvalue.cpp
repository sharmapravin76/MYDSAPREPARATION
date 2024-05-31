#include<iostream>
using namespace std;
bool hasArrayTwoCandidates(int arr[], int n, int x) {
    for(int i = 0; i < n; i++)
        for(int j = i + 1; j < n; j++) 
            if(arr[i] + arr[j] == x) 
        {
              cout << "pair of sum " << arr[i] << ", " << arr[j]<<endl;
        }
                return true;
    return false;

}
int main(){
    int arr[]={1, 4, 45, 6, 10, 8};
    cout<<hasArrayTwoCandidates(arr,6,16);
    return 0;
}