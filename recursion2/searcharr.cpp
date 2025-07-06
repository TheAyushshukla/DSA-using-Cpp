#include<iostream>
using namespace std;
bool search(int arr[],int size,int index,int target){
    if(index==size){
        return false;
    }
    if(arr[index]==target){
        return true;
    }
   
   bool ans= search(arr,size,index+1,target);
   return ans;
    
}
int main(){
    int arr[]={10,20,30,40,50,60};
    int size=6;
    int index=0;
    int target=50;
    cout<<search(arr,size,index,target);
    return 0;
}