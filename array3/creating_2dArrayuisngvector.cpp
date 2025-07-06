#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<vector<int>> arr(4,vector<int>(3,98)); //creating 2d array using vector
    int rowsize=arr.size();
    int columnsize=arr[0].size();
    for(int i=0;i<rowsize;i++){
        for(int j=0;j<columnsize;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}