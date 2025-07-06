#include <iostream>
#include <limits.h>
using namespace std;
int max_no(int arr[],int size,int max){
    for(int i=0;i<size;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}
int main(){
    int arr[]={10,20,30,40,50};
    int size=5;
    int max=INT_MIN;
    cout<<max<<endl;
    int maximum=max_no(arr,size,max);
    cout<<maximum<<endl;
    return 0;
}