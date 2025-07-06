#include<iostream>
using namespace std;

void printArrary(int arr[],int size,int index){
    //base case
    if(index==size){
        return ;
    }
    //process
    cout<<arr[index]<<" ";
    //recursive call
     printArrary(arr,size,index+1);
}
int main(){
    int arr[]={10,20,30,40,50,60};
    int size=6;
    int index=0;
    printArrary(arr,size,index);
    return 0;
}