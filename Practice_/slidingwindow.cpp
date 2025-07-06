// find the maximum subrray 
#include<iostream>
using namespace std;
void slidingwindow(int arr[],int k,int size){
    int i=0;
    int j=k-1;
    int sum=0;
    for(int y=0;y<=j;y++){
     sum+=arr[y];
    }
    int maxsum=sum;
    j++;
    while(j<size){
        sum -= arr[i++];
        sum += arr[j++];
        maxsum=max(maxsum,sum);
    }
    cout<<maxsum<<endl;
}
int main(){
    int arr[]={10,20,30,40,50};
    int k=4;
    int size=5;
    slidingwindow(arr,k,size);
    return 0;
}