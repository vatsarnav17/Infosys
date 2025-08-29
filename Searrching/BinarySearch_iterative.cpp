#include<iostream>
using namespace std;
int main(){
    int arr[]={2,4,6,8,10,12,14,16,18,20};
    int target = 18;
    int n = sizeof(arr)/sizeof(arr[0]);
    int low = 0,high=n-1;
    while(low<=high){
        int mid = (low + high)/2;
        if(arr[mid]==target){
            cout<<mid;
            return 0;
        }
        else if(arr[mid]<target){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    cout << -1;
    return 0;
}