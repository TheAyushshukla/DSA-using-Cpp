#include<iostream>
using namespace std;

class Stack{
    public:
    int* arr;
    int top;
    int size;
    Stack(int capacity){
        arr=new int[capacity];
        size=capacity;
        top=-1;
    };
    void push(int value){
        if(top==size-1){
            cout<<"Stack is overflow"<<endl;
        }
        else{
            top++;
            arr[top]=value;
        }
    }
    void pop(){
        if(top==-1){
            cout<<"Stack is underflow"<<endl;
            return;
        }
        arr[top]=0;
        top--;
    }
    int  getsize(){
        return top+1;
       
    }
    bool isempty(){
        if(top==-1){
            return true;
        }else{
            return false;
        }
         
    }
    int gettop(){
        if(top==-1){
            cout<<"The stack is empty"<<endl;
            return -1;
        }
        else{
            return arr[top];
        }

    }
    void print(){
       for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
       }cout<<endl;
    }
};
int main(){
    Stack s(5);
    s.push(10);
    cout<<s.gettop()<<endl;
    cout<<s.getsize()<<endl;
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    cout<<s.getsize()<<endl;
    cout<<s.gettop()<<endl;
    cout<<s.isempty()<<endl;
    //s.push(434); ///stack is overflow
    // s.pop();
    // s.pop();
    // s.pop();
    // cout<<s.gettop()<<endl;
    // cout<<s.getsize()<<endl;
    // s.pop();
    // s.pop();
    // cout<<s.isempty()<<endl;
    s.print();
   // s.pop(); //stack is underflow;
    return 0;
}