#include<iostream>
#include<limits.h>
using namespace std;
void maximum(int arr[],int size,int index,int &ans){
    if(index==size){
        return;
    }
    ans=min(arr[index],ans);
    maximum(arr,size,index+1,ans);
}
int main(){
    int arr[]={10,20,30,40};
    int size=4;
    int index=0;
    int ans=INT_MAX;
    maximum(arr,size,index,ans);
    cout<<ans;
    return 0;
}