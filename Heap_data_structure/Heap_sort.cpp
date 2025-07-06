#include<iostream>
using namespace std;

class Heap{
    public:
    int* arr;
    int capacity;
    int index;
    
    Heap(int n){
        this->capacity=n; 
        arr=new int[n];
        index=0;
    }

    void printHeap(){
        for(int i=0;i<capacity;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    void insert(int val){
       if(index==capacity-1){
        cout<<"overflow"<<endl;
        return ;
       }
       index++;
       arr[index]=val;
       int i=index;
       while(i>1){
        int parentIndex=i/2;
        if(arr[parentIndex]<arr[i]){
            swap(arr[parentIndex],arr[i]);
            i=parentIndex;
        }
        else{
            // parent already is bigger 
            break;
        }
       }
    }

    void deleteHeap(){
        // st->1-replacement
        swap(arr[1],arr[index]);
        // decrease size
        index--;
        // heapify
       // heapify(arr,index,1);

    }
};
void heapify(int *arr,int n,int currIndex){
    // n->no of element in heap
    int i=currIndex;
    int leftIndex=2*i;
    int rightIndex=2*i+1;

    int largestIndex=i;
    // assuming i is the biggest value
    // possible biggest value could be left or right

    // check left
    if(leftIndex<n && arr[leftIndex]>arr[largestIndex]){
        largestIndex=leftIndex;
    }
    // check right
    if(rightIndex<n && arr[rightIndex]>arr[largestIndex]){
        largestIndex=rightIndex;
    }
    if(largestIndex!=i){
        swap(arr[i],arr[largestIndex]);
        i=largestIndex;
        heapify(arr,n,i);
    }
}
void buildHeap(int *arr,int n){
    for(int i=n/2;i>0;i--){
        heapify(arr,n,i);
    }
}
void heapSort(int *arr,int n){
    //n->size

    while(n!=1){
        swap(arr[1],arr[n-1]);
        // delete last element
        n--;
        heapify(arr,n,1);
    }
}
int main(){
     Heap pq(10);
     int arr[]={-1,10,20,30,40,50};
     int n=6;
     buildHeap(arr,n);
     cout<<endl;
     for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
     }
    cout<<endl;
    heapSort(arr,n);
    for(int i=1;i<n;i++){
        cout<<arr[i]<<" ";
     }
    cout<<endl;

    return 0;
}