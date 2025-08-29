#include<iostream>
#include<vector>
using namespace std;

void isort(vector<int> &arr,int n){
    for(int i=1;i<n;i++){
        int j =i;
        while(j>0 && arr[j-1]>arr[j]){
            int temp = arr[j];
            arr[j]=arr[j-1];
            arr[j-1]=temp;
            j--;
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

    isort(arr,n);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}