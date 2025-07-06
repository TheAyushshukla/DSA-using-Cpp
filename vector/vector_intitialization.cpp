#include<iostream>
#include<vector>
using namespace std;
void print(vector<int> v){
    for(auto it:v){
        cout<<it<<" ";
    }
}
int main(){
    vector<int>v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    print(v);
    return 0;
    // vector<int> arr(5,0);
    // vector<int>arr2={10,20,30,40,50};
    // int size=arr2.size();
    // for(int i=0;i<size;i++){
    //     cout<<arr2[i]<<" ";
    // }
    // vector<int>brr(arr2);
    // brr.push_back(54);
    // cout<<brr[5];
    // return 0;
}