#include <iostream>
using namespace std;
void extreame_printing(int arr[],int size){
    int left=0;
    int right=size-1;
    while(right>=left){
        if(left==right){
            cout<<arr[left];
            left++;
        }
      else{
        cout<<arr[left]<<" ";
        left++;
        cout<<arr[right]<<" ";
        right--;
      }
    }

}
int main(){
    int arr[]={10,20,30,40,50,60,70};
    int size=7;
    extreame_printing(arr,size);
    return 0;
}