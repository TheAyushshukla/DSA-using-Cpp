#include<iostream>
using namespace std;
class Queue{
    private:
    int *arr;
    int front;
    int rear;
    int size;
    public:
    Queue(int capacity){
        arr=new int[capacity];
        front=-1;
        rear=-1;
        size=capacity;
    }
    void push(int value){
        if(rear==size-1){
            cout<<"overflow"<<endl;
        }
        else if(rear==-1 && front==-1){
            rear++;
            front++;
            arr[rear]=value;
        }
        else{
            rear++;
            arr[rear]=value;
        }
    }
    void pop(){
     if(rear==-1 && front==-1){
        cout<<"Underflow"<<endl;
     }
     else if(front==rear){
        rear=-1;
        front=-1;
     }
     else{
        front++;
     }   
    }
    int getfront(){
        if(front==-1){
            cout<<"Queue is empty"<<endl;
        }
       return arr[front];
    }
    bool isempty(){
     if(rear==-1 && front==-1){
        return true;
     }else{
        return false;
     }
    }
    int getsize(){
        if(front==-1 && rear ==-1 ){
            return 0;
        }
        return rear- front +1;
        
 
    }
    int getrear(){
      if(rear==-1){
        cout<<"queue is empty"<<endl;
      }else{
        return arr[rear];
      }
    }
};
int main(){
    Queue q(5);
    q.push(50);
    q.push(20);
    q.push(30);
    q.push(60);
    q.push(532);
    q.pop();
    q.pop();
    q.pop();
    // cout<<q.getfront()<<endl;
    // cout<<q.getrear()<<endl;
    // cout<<q.isempty()<<endl;
    cout<<q.getsize()<<endl;

    return 0;
}