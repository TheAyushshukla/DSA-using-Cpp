#include<iostream>
#include<list>
using namespace std;
int main(){
    list<int> first;
    first.push_back(10);
    first.push_back(20);
    first.push_back(30);
    first.push_back(40);
    first.push_back(50);
    //traversal using for each loop
    for(int i:first){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"size:"<<first.size()<<endl;
    first.pop_back();
    first.pop_back();
    // traversal using iterator
    list<int>::iterator it=first.begin();
    while(it !=first.end()){
        cout<<*it<<" ";
        it++;
    }
    cout<<endl;
    cout<<first.size()<<endl;
    cout<<"first element: "<<*first.begin()<<"  "<<"End element: "<<*first.end()<<endl;
    cout<<first.front()<<endl; // access first  element in the list
    cout<<first.back()<<endl; // access the last element in the list
    first.push_front(220);
    first.push_front(34);
    for(int i:first){
        cout<<i<<" ";
    }
    cout<<endl;
    // first.pop_back();
    // first.pop_back();
    // cout<<endl;
    // while(it != first.end()){
    //     cout<<*it<<" ";
    //     it++;
    // }
    // cout<<endl;
    list<int> second;
    second.push_back(2);
    second.push_back(2);
    second.push_back(3);
    second.push_front(5);
    second.push_front(43);
    list<int>::iterator bt=second.begin();
    while(bt !=second.end()){
        cout<<*bt<<" ";
        bt++;
    }
    cout<<endl;
    cout<<second.size()<<endl;


    second.remove(2);
    cout<<"after the remove"<<second.size()<<endl;
    //first.clear(); //clear all the element in the list
    //cout<<first.size();
    first.swap(second);
    for(int i:first){
        cout<<i<< "  ";
    }
    return 0;
}