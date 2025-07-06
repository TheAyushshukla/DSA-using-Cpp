#include<iostream>
#include<vector>
using namespace std;
movenegative(vector<int> arr,int n){
    int i=0;
    int j=n-1;
    while(i<=j){
        if(arr[i]<0){
            i++;
        }
        else if(arr[j]>0){
            j--;
        }
        else{
            swap(arr[i],arr[j]);
        }

    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
}
int main(){
    vector<int> arr={1,2,-3,4,-5,6};
    int n= arr.size();
    movenegative(arr,n);
    return 0;
}