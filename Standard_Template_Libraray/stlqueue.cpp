#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<int> q;
    // insert the element in the the front in the queue
    q.push(5);
    q.push(10);
    q.push(15);
    q.push(20);
    cout<<q.front()<<endl; // access the first element 
    cout<<q.back()<<endl; // access the last element
    cout<<q.size()<<endl;
    q.pop(); // delete element at front
    q.pop();
    cout<<q.front()<<endl;
    if(q.empty()==true){
        cout<<"queue is empty";
    }
    else{
        cout<<"Queue is not empty";
    }
    return 0;
}