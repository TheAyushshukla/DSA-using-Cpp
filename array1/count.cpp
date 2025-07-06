#include<iostream>
#include<limits.h>
using namespace std;
int count_zero(int arr[],int size){
    int zero=0;
    for(int i=0;i<size;i++){
        if(arr[i]==0){
            zero=zero+1;
        }
    }
    return zero;
}
int count_one(int arr[],int size){
    int one=0;
    for(int i=0;i<size;i++){
        if(arr[i]==1){
            one=one+1;
        }
    }
    return one;
}
int main(){
    int arr[]={1,1,0,0,0,1,0,0};
    int size=8;
    int zero= count_zero(arr,size);
    int one= count_one(arr,size);
    cout<<"NO of zero="<<zero<<endl;
    cout<<"NO of one's="<<one;
    return 0;
}