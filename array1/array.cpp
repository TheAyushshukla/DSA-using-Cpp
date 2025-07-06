#include<iostream>
using namespace std;
int main(){
    //creation 
    int arr[5];
    int brr[6]={5,3,6,2,62,76};
    cout<<arr[2]<<endl;
    cout<<brr[3]<<endl;
    fill(arr,arr+5,23); // to initialize the same value to all the index 
    cout<<arr[2]<<arr[0]<<arr[1]<<arr[3]<<arr[4]<<endl;
    //input
    int crr[5];
    for(int i=0;i<5;i++){
        cout<<"Enter the value of the index ="<<i;
        cin>>arr[i];
    }
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
    
}