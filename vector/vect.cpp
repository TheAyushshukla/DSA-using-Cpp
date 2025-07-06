#include <iostream>
#include<vector>
using namespace std;
void print(vector<int>v,int size){
    for(int i=0;i<size;i++){
        cout<<v[i]<<" ";
    }
}
int main(){
    vector<int>v;
    v.push_back(10); //used to push the elements in the vector 
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);
    v.pop_back();
    int size=v.size();
    cout<<size<<endl;
    print(v,size);
    return 0;
}
//vector is basically the dynamic array in which one can insert unlimited elements as requirement.