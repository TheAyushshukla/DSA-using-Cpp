#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool mycom(int &a,int&b){
   // return a<b; // sort in increasing order
   return a>b;// sort in decreasing order
}
int main(){
    vector<int> arr={55,23,235,4,6};
    // in comparitor we return a function on the basis of contion it sort 
    sort(arr.begin(),arr.end(),mycom);
    for(auto i:arr){
        cout<<i<<" ";
    }
    return 0;
}
