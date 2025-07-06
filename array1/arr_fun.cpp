#include <iostream>
using namespace std;
void print(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
int change_array(int arr[],int size){
    for(int i=0;i<size;i++){
        arr[i]=arr[i]+5;
        return arr[i];
    }
}
int main(){
    int arr[]={10,20,30,40,50};
    int size=5;
    print(arr,size);
    change_array(arr,size);
    cout<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}