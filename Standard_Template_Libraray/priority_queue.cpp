#include<iostream>
#include<queue>
using namespace std;
int main(){
    priority_queue<int> pq;
    pq.push(20);
    // 20
    pq.push(10);
    //10->20
    pq.push(30);
    //10->20->30
    pq.push(50);
    pq.push(40);
    cout<<pq.top()<<endl;
    pq.pop();
    pq.pop();
    cout<<pq.top();
    cout<<endl;
    if(pq.empty()==true){
        cout<<"queue is empty";
    }else{
        cout<<"queue is not empty";
    }
    return 0;
}