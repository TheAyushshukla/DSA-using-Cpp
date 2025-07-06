#include<iostream>
#include<queue>
#include<stack>
using namespace std;

void reversequeuein_Kgroup(queue<int> &q,int k, int count){
    
    if(count>=k){
        stack<int> s;
        for(int i=0;i<k;i++){
            int element=q.front();
            q.pop();
            s.push(element);
        }
        for(int i=0;i<k;i++){
            int element=s.top();
            s.pop();
            q.push(element);
        }
        reversequeuein_Kgroup(q,k,count-k);
    }
    else{
        for(int i=0;i<count;i++){
            int element=q.front();
            q.pop();
            q.push(element);
        }
    }
}
int main(){
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);
    q.push(70);
    q.push(80);
    q.push(90);
    q.push(100);
    q.push(110);
    int k=3;
    int count=q.size();
    reversequeuein_Kgroup(q,k,count);
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    return 0;
}