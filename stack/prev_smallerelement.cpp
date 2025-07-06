#include<iostream>
#include<stack>
#include<vector>
#include<algorithm>
using namespace std;
void solve(vector<int> arr,stack<int> &s,vector<int> &ans){
    int n=arr.size();
    for(int i=0;i<n;i++){
        int element=arr[i];
        while(s.top()>=element){
               s.pop();
            }
                ans.push_back(s.top());
                s.push(element);
        }
    }
int main(){
    vector<int> arr;
    arr.push_back(8);
    arr.push_back(4);
    arr.push_back(6);
    arr.push_back(2);
    arr.push_back(3);

    stack<int> s;
    s.push(-1);
    vector<int>ans;
    solve(arr,s,ans);
    for(int i:ans){
        cout<<i<<" ";
    }
    return 0;
}
