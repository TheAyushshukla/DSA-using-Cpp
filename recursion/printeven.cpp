#include<iostream>
using namespace std;
void printeven(int arr[],int size,int index){
    if(index==size){
        return;
    }
    if(arr[index]&1){
        cout<<arr[index]<<" ";
    }
    printeven(arr,size,index+1);
}
int main(){
    int arr[]={20,21,22,24,50,51};
    int size=6;
    int index=0;
    printeven(arr,size,index);
    return 0;
}