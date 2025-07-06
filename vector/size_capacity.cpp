#include <iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v;
    while(1){
        int d;
        cout<<"Enter the value of d: ";
        cin>>d;
        v.push_back(d);
        cout<<"capacity:"<<v.capacity()<<" "<<"Size: "<<v.size()<<endl;
    }
    return 0;
}
//when the size of the vector is full then the capacity increases doubles of its size.