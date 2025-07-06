#include<iostream>
#include<vector>
using namespace std;
int unique(vector<int> &arr,int n){
    vetor<int> temp(0);
    int ans=0;
    for(int i=0;i<n;i++){
        temp[i]=temp^arr[i];
    }
   arr=temp;
   return arr;
    
}
int main(){
    vector<int> arr{0,0,1,1,1,2,2,3,3,4};
   int n=arr.size();
}