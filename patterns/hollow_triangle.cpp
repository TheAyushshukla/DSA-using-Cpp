#include<iostream>
using namespace std;
int main(){
    int row;
    cout<<"Rows=";
    cin>>row;
    for(int i=0;i<row;i++){
        for(int j=0;j<i+1;j++){
            if(i==0 || i==1 || i==row-1){
                cout<<"* ";
            }
            else{
                if(j==0 || j== (i+1)-1){
                    cout<<"* ";
                }
                else{
                    cout<<"  ";
                }
            }
        }
        cout<<endl;
    }
}