#include<iostream>
using namespace std;   
int main()
{
    int arr[] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
    int target = 18;
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        if(arr[i]==target){
            cout<<i;
            return 0;
        }
    }
    cout<<-1;
    return 0;
}