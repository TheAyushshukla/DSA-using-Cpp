//Assignment: missing element in an array with duplicate.
#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v{1,3,5,3,4};
    v.insert(v.begin(),20);// random value 
    // 1-> index 1
    //3->index 2 etc
    for(int i=1;i<v.size();i++){
        int index=abs(v[i]);
        if(v[index]>0){
            v[index]*=-1;
        }
    }
    int missing=-1;
    for(int i=1;i<v.size();i++){
        if(v[i]>0){
            missing=i;
            break;
        }
    }
    cout<<"The missing element is ="<<missing<<endl;
    return 0;
}