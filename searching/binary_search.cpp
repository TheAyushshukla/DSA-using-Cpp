#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
void searching_binary(vector<int>arr,int n,int target){
    int start=0;
    int end=n-1;
    int mid=(start+end)/2;
    while(start<=end){
        if(arr[mid]==target){
            cout<<"index="<<mid;
            return;
        }
        if(arr[mid]<target){
            start=mid+1;
        }
        if(arr[mid]>target){
            end=mid-1;
        }
        mid=(start+end)/2;
    }
    cout<<"element not found";
}
int main(){
    vector<int> arr{10,20,30,40,50,60};
    int n=arr.size();
    int target=30;
    searching_binary(arr,n,target);
    return 0;
}