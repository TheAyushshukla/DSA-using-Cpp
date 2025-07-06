#include<iostream>
using namespace std;
int factorial(int n){
    if(n==0 || n==1){
        return 1;
    }
    int finalans=n*factorial(n-1);
    return finalans;
}
int main(){
     int n;
     cout<<"Enter the value of n:";
     cin>>n;
    int ans= factorial(n);
    cout<<"The factorial is:"<<ans;
    return 0;
}