#include<iostream>
using namespace std;
bool checksort(int arr[],int size,int index){
    if(index==size-1){
        return true;
    }
    bool currentans=false;
    bool recans=false;
    if(arr[index+1]>arr[index]){
        currentans=true;

    }
    recans=checksort(arr,size,index+1);  
    return (currentans && recans);
}
int main()
{
    int arr[]={10,15,25,36,60,95};
    int size=6;
    int index=0;
    cout<<checksort(arr,size,index);
    return 0;
}