#include <iostream>
using namespace std;
bool pairsum(int arr[],int size,int target){
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            if(arr[i]+arr[j]==target){
                return true;
            }
        }
    }
    return false;
}
int main(){
    int arr[]={10,5,20,15,30};
    int size=5;
    int target=45;
    bool ans=pairsum(arr,size,target);
    //cout<<ans;
    if(ans==true){
        cout<<"pair found"<<endl;
    }
    else{
        cout<<"Pair not found"<<endl;
    }
    return 0;
}