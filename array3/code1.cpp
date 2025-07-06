#include<iostream>
using namespace std;
// void print(int arr[][],int rowsize,int columnsize){
//     for(int i=0;i<rowsizesize;i++){
//         for(int j=0;j<columnsizesize;j++){
//             cout<<arr[i][j]<<" ";
//         }
//     }
// }
int main(){
    int arr[3][2]={
               {10,20},
               {30,40},
               {50,60},
    };
    int rowsize=3;
    int columnsize=2;
    cout<<arr[0][1]<<endl;
    //print(arr,rowsize,columnsize);
    for(int i=0;i<rowsize;i++){
        for(int j=0;j<columnsize;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}