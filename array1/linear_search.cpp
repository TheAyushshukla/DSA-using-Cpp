#include <iostream>
using namespace std;
bool element_found(int arr[],int size,int element){
    for(int i=0;i<size;i++){
        if(arr[i]==element){
            return true;
        }
    }
     return false;
}
int main(){
    int arr[]={10,20,30,40,50};
    int size=5;
    int element=30;
    bool answer=element_found(arr,size,element);
    cout<<answer;
    return 0;
}