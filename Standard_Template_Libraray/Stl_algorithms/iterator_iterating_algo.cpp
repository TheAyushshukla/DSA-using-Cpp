#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
void print_double(int a){
    cout<<2*a<<" ";
}
int main(){
     vector<int> arr(5);
     arr[0]=10;
     arr[1]=20;
     arr[2]=30;
     arr[3]=40;
     arr[4]=50;
    // iterating using for each function
    for_each(arr.begin(),arr.end(),print_double);
    cout<<endl;
    // find element using find algorithms
    int target=30;
    auto it=find(arr.begin(),arr.end(),target); // return iterator
    cout<<*it<<endl;


    return 0;
}