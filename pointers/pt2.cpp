#include<iostream>
using namespace std;
void solve(int* arr,int size){ // array always pass as a pointer in function
    cout<<sizeof(arr)<<endl;
}
int main(){
    int arr[]={10,20,30};
    int size=3;
    solve(arr,size);
    return 0;

}