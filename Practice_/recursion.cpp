#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;
int  factorial(int n){
    // base case
    if(n==1){
        return 1;
    }
    int ans=n*factorial(n-1);
    return ans;
}
void counting(int n){
    if(n==0){
        return;
    }
   // cout<<n<<" "; // processing part
    counting(n-1);
    // reverse printing 
    cout<<n<<" ";
}
int  power(int n){
    if(n==0){
        return 1;
    }
    int ans=2* power(n-1);
    return ans;
}
int fibonacci(int n){
    if(n==1){
        return 0;
    }
    if(n==2){
        return 1;
    }
    int ans=fibonacci(n-1) +fibonacci(n-2);
    return ans;
}
int sum(int n){
    if(n==0){
        return 0;
    }
    int ans=n+sum(n-1);
    return ans;
}
void printArray(int arr[],int size,int index){
    if(index==size){
        return;
    }
    //cout<<arr[index]<<" "; // print the array
    printArray(arr,size,index+1);
    cout<<arr[index]<<" "; // print array in reverse order
}
bool searchArray(int arr[],int size,int index,int target){
    if(index==size){
        return false;
    }
    if(arr[index]==target){
        return true;
    }
    searchArray(arr,size,index+1,target);
}
int maxArr(int arr[],int size,int index,int &ans){
    if(index==size){
        return ans;
    }
    if(arr[index]>ans){
        ans=arr[index];
    }
    maxArr(arr,size,index+1,ans);
}
int minArr(int arr[],int size,int index,int &ans){
    if(index==size){
        return ans;
    }
    if(arr[index]<ans){
        ans=arr[index];
    }
    minArr(arr,size,index+1,ans);
}
void oddArr(int arr[],int size,int index,vector<int> &ans){
    if(index==size){
        return ;
    }
    if(arr[index] &1){
        ans.push_back(arr[index]);
    }
    oddArr(arr,size,index+1,ans);
}
bool checksort(int arr[],int size,int index){
    if(index==size-1){
        return true;
    }
    if(arr[index]>arr[index+1]){
        return false;
    }
    checksort(arr,size,index+1);
}
bool Binarysearch(int arr[],int s,int e,int target){
    if(s>e){
        return false;
    }
    int mid=s+(e-s)/2;
    if(arr[mid]==target){
        return true;
    }
    if(arr[mid]<target){
       return  Binarysearch(arr,mid+1,e,target);
    }
    if(arr[mid]>target){
       return Binarysearch(arr,s,mid-1,target);
    }
    
}
void split(int n){
    if(n==0){
        return;
    }
    int digit=n%10;
    n=n/10;
   // cout<<digit<<" "; // print reverse
    split(n);
    cout<<digit<<" "; // use of tail rec to print the correct order
}
void subsequence(string str, int index,string output,vector<string> &ans){
    if(index==str.length()){
        ans.push_back(output);
        return;
    }
    char ch= str[index];
    subsequence(str,index+1,output+ch,ans); // include
    subsequence(str,index+1,output,ans);
}
int main(){
    string str="abc";
    string output="";
    int index=0;
    vector<string> ans;
    subsequence(str,index,output,ans);
    for(auto i:ans)
    {
        cout<<i<<" ";
    }
   // int n=389;
    //split(n);
    //   int arr[]={10,11,12,13,14,15};
    //   int size=6;
    //   int index=0;
    //   int target=10;
    //   int s=0;
    //   int e=size-1;
    //   cout<<Binarysearch(arr,s,e,target);
     // vector<int> ans;
    // cout<< checksort(arr,size,index);
    //oddArr(arr,size,index,ans);
    //   for(auto i:ans){
    //     cout<<i<<" ";
    //   }
//     int arr[]={10,20,30,40,50};
//     int size=5;
//     int index=0;
//     int target=50;
//     int ans=INT_MAX;
//    // minArr(arr,size,index,ans);
    //maxArr(arr,size,index,ans);
   // cout<<ans;
   // cout<<searchArray(arr,size,index,target);
   // printArray(arr,size,index);
  // int n=6;
  // cout<<sum(n);
  // cout<<fibonacci(n);
  // cout<<power(n);
  // cout<< factorial(n);
  //  counting(n);
    return 0;
}