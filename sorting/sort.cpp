#include<iostream>
#include<vector>
using namespace std;
void quicksort(vector<int> &arr){
    int n=arr.size();
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}
void selectionsort(vector<int> &arr){
    int n=arr.size();
    for(int i=0;i<n;i++){
        int mini=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[mini]){
                mini=j;
            }
        }
        swap(arr[i],arr[mini]);
    }
}
void insertionsort(vector<int> &arr){
    int n=arr.size();
    for(int i=1;i<n;i++){
        int key=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
}
int main(){
  vector<int> arr={5,4,3,2,1};
  insertionsort(arr);
  //selectionsort(arr);
  //quicksort(arr);
  for(auto i:arr){
    cout<<i<<" ";
  }
   return 0;
}