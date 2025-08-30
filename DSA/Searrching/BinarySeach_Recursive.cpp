#include<iostream>
using namespace std;

int bs(int arr[],int low,int high,int target){
    if(low>high) return -1;

    int mid = (low+high)/2;
    if(arr[mid]==target){
        return mid;
    }
    if(arr[mid]<target){
        return bs(arr,mid+1,high,target);
    }
    return bs(arr,low,mid-1,target);
};  


int main()
{
    int arr[]={2,4,6,8,10,12,14,16,18,20};
    int n = sizeof(arr)/sizeof(arr[0]);
    int target = 18;
    int low = 0 , high = n-1;
    cout<<bs(arr,low,high,target);
}   