#include<iostream>
#include<vector>
using namespace std;


void printsubarray_util(vector<int> arr,int start,int end){
    if(end==arr.size()){
        return ;
    }
   for(int i=start;i<=end;i++){
    cout<<arr[i]<<" ";
   }cout<<endl;
    printsubarray_util(arr,start,end+1);
}
void printsubarray(vector<int> arr){
    for(int start=0;start<arr.size();start++){
        int end=start;
        printsubarray_util(arr,start,end);
    }
}
int main(){
    vector<int> arr={1,2,3,4,5};

    int i=0;
    int j=0;
    printsubarray(arr);
    return 0;
}