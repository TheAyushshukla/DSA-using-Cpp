#include<iostream>
using namespace std;
int main(){
    int arr[2][3]={{10,20,30},{40,50,60}};
    fill(arr,arr+6,10);
       for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}