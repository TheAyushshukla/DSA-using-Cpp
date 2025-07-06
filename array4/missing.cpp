#include<iostream>
using namespace std;
void duplicate(int arr[],int n){
    for(int i=0;i<n;i++){
        int index=abs(arr[i]);
        if(arr[index-1]>0){
            arr[index-1]*=-1;
        }
    }
    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }
    for(int i=0;i<n;i++){
        if(arr[i]>0){
            cout<<i+1<<" ";
        }
    }
}
int main(){
    int arr[]={1,3,3,3,4};
    int n=5;
    duplicate(arr,n);
    return 0;
}