#include<iostream>
using namespace std;

void differntiate(int n){
    if(n==0){
        return;
    }
    
    differntiate(n/10);
    int ans=n%10;
    cout<<ans<<" ";
}
int main(){
    int n=389;
    differntiate(n);
    return 0;
}