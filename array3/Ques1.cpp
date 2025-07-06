#include<iostream>
#include<limits.h>
using namespace std;
bool search_Element(int arr[][4],int rowsize,int columnsize,int target){
    for(int i=0;i<rowsize;i++){
        for(int j=0;j<columnsize;j++){
            if(arr[i][j]==target){
                return true;
            }
        }
    }
    return false;
}

int main(){
    int arr[3][4]={
        {10,11,12,13},
        {20,21,22,23},
        {31,32,44,55}
    };
    int target=75;
    int rowsize=3;
    int columnsize=4;
    int Search=search_Element(arr,rowsize,columnsize,target);
    cout<<Search;
    return 0;
}