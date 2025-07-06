#include<iostream>
#include<vector>
using namespace std;
bool search(vector<vector<int>> arr,int target){
    int rowsize=arr.size();
    int columnsize=arr[0].size();
    for(int i=0;i<rowsize;i++){
        for(int j=0;j<columnsize;j++)
        {
            if(arr[i][j]==target){
                return true;
            }
        }
    }
     return false;
}
int main(){
    vector<vector<int>> arr(4,vector<int>(3));
    int rowsize=arr.size();
    int columnsize=arr[0].size();
    for(int i=0;i<rowsize;i++){
        for(int j=0;j<columnsize;j++){
            cout<<"Enter the value :("<<i<<","<<j<<")"<<" ";
            cin>>arr[i][j];
        }
    }
    int target=55;
    bool ans=search(arr,target);
    cout<<ans;
    return 0;
}