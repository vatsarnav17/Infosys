#include<iostream>
#include<vector>
using namespace std;
void bsort(vector<int> &arr,int n){
    int didrun =0;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                didrun = 1;
            } 
        }
        if(didrun == 0){
            break;
        }
    }
};
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    bsort(arr,n);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
    
    return 0;
}