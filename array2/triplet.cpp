#include <iostream>
using namespace std;
void triplet_pair(int arr[],int size){
    int count=0;
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            for(int k=0;k<size;k++){
                cout<<arr[i]<<","<<arr[j]<<","<<arr[k]<<endl;
                count++;
            }
        }
    }
    cout<<"the total no of triplets= "<<count<<endl;
}
int main(){
    int arr[]={10,20,30,40};
    int size=4;
    triplet_pair(arr,size);
    return 0;
}