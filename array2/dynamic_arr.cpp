#include <iostream>
using namespace std;

void fun(int arr[],int n){
    cout<<"The array's are: ";
    for(int i=0;i<n;i++){
        
        cout<<arr[i]<<" ";
    }
}
int main(){
    int n;
    cin>>n;
    int *arr=new int[n]; //dynamic array allocation
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    fun(arr,n);
    return 0;

}