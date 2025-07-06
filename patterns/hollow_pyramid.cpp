#include<iostream>
using namespace std;
void hollow_pyramid(int n){
for(int i=0;i<n;i++){
    for(int j=0;j<n-i;j++){
        cout<<" ";
    }
    for(int j=0;j<i+1;j++){
        if(i==0 || i==1 || i==n-1 || j==0 ||  j==i){
            cout<<"* ";
        }
        else{
            cout<<"  ";
        }
    }
    cout<<endl;
}
}
int main(){
    int n;
    cout<<"Enter n";
    cin>>n;
    hollow_pyramid(n);
    return 0;
}