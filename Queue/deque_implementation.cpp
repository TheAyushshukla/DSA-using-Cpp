#include<iostream>
using namespace std;
class Dequeue{
    private:
    int *arr;
    int size;
    int front;
    int rear;
    public:
    Dequeue(int capacity){
        arr=new int[capacity];
        size=capacity;
        front=-1;
        rear=-1;
    }
    void push_Rear(int value){
        if(rear==size-1){
            cout<<"overflow";
        }
        else if(rear==-1 && front==-1){
            front++;
            rear++;
            arr[rear]=value;
        }
        else{
            rear++;
            arr[rear]=value;
        }
    }
    void push_front(int value){
        if(front==0){
            cout<<"overflow"<<endl;
        }
        else if(front ==-1 && rear==-1){
            front++;
            rear++;
            arr[front]=value;
        }
        else{
            front--;
            arr[front]=value;
        }
    }
    void pop_front(){
        if(rear==-1 && front==-1){
            cout<<"Underflow"<<endl;
        }
        else if(rear==front){
            rear=-1;
            front=-1;
        }
        else{
            arr[front]=-1;
            front++;
        }
       
    }
    void pop_rear(){
        if(front==-1 && rear==-1){
            cout<<"Underflow"<<endl;
        }
        else if(front ==rear){
            arr[rear]=-1;
            front=-1;
            rear=-1;
        }
        else{
            arr[rear]=-1;
            rear--;
        }

    }
    // not in deque
    void print(){
        for(int i=0;i<size;i++){
            cout<<arr[i]<<" ";
        }cout<<endl;
    }
};
int main(){
    Dequeue dq(5);
    dq.push_front(10);
    dq.print();
    dq.push_front(20);
    dq.print();
    dq.push_front(30);
    dq.print();
    dq.push_Rear(15);
    dq.print();
    dq.push_Rear(35);
    dq.print();
    // dq.pop_rear();
    // dq.pop_rear();
    // dq.print();
    // dq.pop_rear();
    // dq.print();
    // dq.pop_rear();
    // dq.print();
    dq.pop_front();
    dq.print();
    return 0;
}