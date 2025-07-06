// in deque insertion and deletion can be done from both ends
#include<iostream>
#include<deque>
using namespace std;
int main(){
deque<int> deq;
// insertion from back
deq.push_back(10);
deq.push_back(20);
deq.push_back(30);
deque<int>::iterator it=deq.begin();
while(it !=deq.end()){
    cout<<*it<<" ";
    it++;
}cout<<endl;
// insertion from front 
deq.push_front(1);
deq.push_front(2);
deq.push_front(3);
for(int i:deq){
    cout<<i<<" ";
}cout<<endl;
// deletion from back
deq.pop_back();
deq.pop_back();
for(int i:deq){
    cout<<i<<" ";
}cout<<endl;
// deletion from front
deq.pop_front();
deq.pop_front();
for(int i:deq){
    cout<<i<<" ";
}cout<<endl;
cout<<deq.size()<<endl;
deque<int> first;
first.push_back(23);
first.push_back(34);
first.push_back(76);
first.push_front(343);
deque<int>::iterator iter=first.begin();
while(iter !=first.end()){
    cout<<*iter<<" ";
    iter++;
}cout<<endl;
cout<<first.size()<<endl;
if(first.empty()==true){
    cout<<"Deque is empty"<<endl;
}else{
    cout<<"Deque is not empty"<<endl;
}
deq.swap(first);
for(int j:deq){
    cout<<j<<" ";
    j++;
}cout<<endl;
//first.clear();
cout<<first.size()<<endl;
first.insert(first.begin(),5343);
for(int i:first){
    cout<<i<<" ";
}cout<<endl;
first.erase(first.begin(),first.end());
cout<<first.size();

return 0;
}