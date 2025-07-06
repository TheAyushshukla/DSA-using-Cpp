#include<iostream>
#include<vector>
using namespace std;
void input(vector<int>v){
    for(int i=0;i<5;i++){
        int data;
        cout<<"Enter the data"<<" ";
        cin>>data;
        v.push_back(data);
    }
}
void print(vector<int>v){
    int size=v.size();
    for(int i=0;i<size;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main(){
    vector<int> v;
    int n;
    cout<<"Enter the value of n";
    cin>>n;
    for(int i=0;i<n;i++){
        int d;
        cout<<"Enter data: ";
        cin>>d;
        v.push_back(d);
    }
    int size=v.size();
    cout<<size;
    print(v);
    v.clear();// to clear the data of the vector
    v.push_back(5);
    print(v);
    return 0;
}