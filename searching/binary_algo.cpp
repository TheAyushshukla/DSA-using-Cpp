#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    vector<int> arr{10,20,30,40,50};
    int target=30;
    binary_search(arr,arr.size()-1,target);
    return 0;
}