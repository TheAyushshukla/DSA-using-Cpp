#include <iostream>
#include <algorithm>
using namespace std;
void countzero_one(int arr[],int size){
    int zero=0;
    int one=0;
    int i=0;
    for(int i=0;i<size;i++){
        if(arr[i]==0){
            zero++;
        }
        if(arr[i]==1){
            one++;
        }
    }
    fill(arr,arr+zero,0); //using fill funtction 
    fill(arr+zero,arr+size,1);
    // for(int i=0;i<zero;i++){
    //     arr[i]=0;
    // }
    // for(int i=zero;i<size;i++){
    //     arr[i]=1;
    // }
}
void print(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[]={1,0,1,0,1,0,1,0};
    int size=8;
    countzero_one(arr,size);
    sort(arr,arr+size);
    print(arr,size);
    cout<<"\n";
    print(arr,size);

    return 0;
}