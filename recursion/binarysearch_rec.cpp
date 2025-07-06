#include<iostream>
using namespace std;
//int binary_search(int arr[],int size,int target){
//     int start=0;
//     int end=size-1;
//     int mid=start+(end-start)/2;
//     while(start<=end){
//         if(arr[mid]==target){
//             return mid;
//         }
//         if(arr[mid]<target){
//             start=mid+1;
//         }
//         if(arr[mid]>target){
//             end=mid-1;
//         }
//         mid=start+(end-start)/2;
//     }
//     return -1;
// }
int binarysearchrecursive(int arr[],int size,int s,int e,int target){
    if(s>e){
        return -1;
    }
    int mid=s+(e-s)/2;
    if(arr[mid]==target){
        return mid;
    }
    if(target>arr[mid]){
       return  binarysearchrecursive(arr,size,mid+1,e,target);
    }
    else{
        return binarysearchrecursive(arr,size,s,mid-1,target);
    }
}
int main(){
    int arr[]={10,20,30,40,50,60};
    int size=6;
    int target=60;
    int s=0;
    int e=size-1;
   // int ans=binary_search(arr,size,target);
   // cout<<ans;
  cout<< binarysearchrecursive(arr,size,s,e,target);
    return 0;
}