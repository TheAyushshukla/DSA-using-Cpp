#include<iostream>
using namespace std;
void odd(int arr[],int size,int index){
    if(index==size){
        return;
    }
    if(arr[index]&1){
        cout<<arr[index]<<" ";
    }
    odd(arr,size,index+1);
}
int main(){
    int arr[]={10,11,12,13,14,15};
    int size=6;
    int index=0;
    odd(arr,size,index);

}