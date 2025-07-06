#include<iostream>
using namespace std;
int repeatingfirst(int arr[],int size){
    for(int i=0;i<size;i++){
        bool firstans=false;
        for(int j=i+1;i<size;i++){
            if(arr[i]==arr[j]){
                firstans=true;
                return i+1;
            }
        }
    }
    return -1;
}
int main(){
    int arr[]={1,2,3,4,5,6,7};
    int size=7;
    cout<<repeatingfirst(arr,size);
    return 0;
}