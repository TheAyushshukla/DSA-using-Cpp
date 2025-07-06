#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
     unordered_map<int,int> map;
     // initializaton of the map
    map[1]=10;
    map[2]=20;
    map[3]=30;
    map[4]=40;

    // Access the key value pairs of the map using iterator 
    // making of the iterator
    unordered_map<int,int>::iterator it;
    it=map.begin();
    while(it != map.end()){
        int key=it->first;
        int value=it->second;
        cout<<"Key: "<<key<<" "<<"Value: "<<value<<endl;
        it++;
    }
    // Accessing of the elements in the map using key 
    if(map.find(2) !=map.end()){
        // found
        cout<<"value: "<<map[2]<<endl;
    }
    else{
        cout<<"value not found"<<endl;
    }
    map.erase(2);// used to earase the key value pairs in the map
    cout<<" After earasing "<<endl;

    for( it=map.begin();it !=map.end();it++){
        int key=it->first;
        int value=it->second;
        cout<<"key: "<<key<<" "<<"value: "<<value<<endl;
    }
    if(map.find(2) != map.end()){
        cout<<"value: "<<map[2]<<endl;
    }
    else{
        cout<<"value not found"<<endl;
    }
    return 0; 
}