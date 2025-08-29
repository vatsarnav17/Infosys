#include<iostream>
using namespace std;

void rev(int arr[],int l,int r){
    if(l>r) return;

    rev(arr,l+1,r-1);
    swap(arr[l],arr[r]);
}

int main(){
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    rev(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}