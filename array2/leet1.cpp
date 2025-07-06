#include<iostream>
using namespace std;
int non_repeat(int arr[],int size){
    int ans=0;
    for(int i=0;i<size;i++){
        ans=ans^arr[i];
    }
    return ans;
}
int main(){
    int arr[]={10,20,30,40,10,20,40};
    int size=7;
    int ans=non_repeat(arr,size);
    cout<<ans;
    return 0;
}