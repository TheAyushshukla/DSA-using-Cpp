#include<iostream>
using namespace std;

void inverted_pyramid(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        for(int j=0;j<n-i;j++){
            cout<<" *";
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cout<<"Enter n:";
    cin>>n;
    inverted_pyramid(n);
    return 0;
}