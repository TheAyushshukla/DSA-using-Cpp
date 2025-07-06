#include<iostream>
#include<vector>
using namespace std;
// void mergearr(int arr[],int brr[],int sizearr,int sizebrr,vector<int> &ans){
//     int i=0;
//     int j=0;
//     while(i<sizearr && j<sizebrr){
//         if(arr[i]<brr[j]){
//             ans.push_back(arr[i]);
//             i++;
//         }else{
//             ans.push_back(brr[j]);
//             j++;
//         }
//     }
//     while(i<sizearr){
//         ans.push_back(arr[i]);
//         i++;
//     }
//     while(j<sizebrr){
//         ans.push_back(brr[j]);
//         j++;
//     }
// }
void merge(int arr[],int s,int e,int mid){
    // size of left array and right array
    int leftarr_size=(mid-s)+1;
    int rightarr_size=(e-mid);
    // creating left array and right array using dynamic allocation 
    int* leftarr=new int[leftarr_size];
    int* rightarr=new int[rightarr_size];
    //copying elements of left arr and right arr
    int index=s;
    for(int i=0;i<leftarr_size;i++){
        leftarr[i]=arr[index];
        index++;
    }
    index=mid+1;
    for(int i=0;i<rightarr_size;i++){
        rightarr[i]=arr[index];
        index++;
    }
    //merge logic
    int leftindex=0;
    int rightindex=0;
    int mainarrayindex=s;
    while(leftindex<leftarr_size && rightindex<rightarr_size){
        if(leftarr[leftindex]<rightarr[rightindex]){
            arr[mainarrayindex]=leftarr[leftindex];
            leftindex++;
            mainarrayindex++;
        }
        else{
            arr[mainarrayindex]=rightarr[rightindex];
            rightindex++;
            mainarrayindex++;
        }
    }
    while(leftindex<leftarr_size){
        arr[mainarrayindex]=leftarr[leftindex];
        leftindex++;
        mainarrayindex++;
    }
    while(rightindex<rightarr_size){
        arr[mainarrayindex]=rightarr[rightindex];
        rightindex++;
        mainarrayindex++;
    }
    // delete heap memory
    delete[] leftarr;
    delete[] rightarr;

}
void mergesort(int arr[],int s,int e){
    //base case
    if(s>=e){  
        return ; // in case of single element s and end point on the same point 
    }
    //left part recursion se solve karao
    int mid=(s+e)/2;
     mergesort(arr,s,mid);
    //right part recursion se solve karao
      mergesort(arr,mid+1,e);
    // dono parts ko merge kar do
    merge(arr,s,e,mid); 
}
int main(){
    int arr[]={10,80,110,90,50,30,40,20};
    int size=8;
    int s=0;
    int e=size-1;
    cout<<"before"<<endl;
    for(int i:arr){
        cout<<i<<" ";
    }
    cout<<endl;
    mergesort(arr,s,e);
    cout<<"After"<<endl;
    for(int i:arr){
        cout<<i<<" ";
    }
    // int arr[]={10,30,50,70};
    // int sizearr=4;
    // int brr[]={20,40,60,80,90,100};
    // int sizebrr=6;
    // vector<int>ans;
    // mergearr(arr,brr,sizearr,sizebrr,ans);
    // for(auto i:ans){
    //     cout<<i<<" ";
    // }

    return 0;
}