#include<iostream>
#include<queue>
#include<stack>
using namespace std;

void reversequeue(queue<int> &q){
    stack<int> st;
    while(!q.empty()){
        int element=q.front();
        q.pop();
        st.push(element);
    }
    while(!st.empty()){
        int element=st.top();
        st.pop();
        q.push(element);
    }
}
void reversequeuerec(queue<int> &q){
    if(q.empty()){
        return ;
    }
    int frontelement=q.front();
    q.pop();
    reversequeue(q);
    q.push(frontelement);
}
int main(){
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
     reversequeuerec(q);
    //reversequeue(q);
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    return 0;

}