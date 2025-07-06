#include<iostream>
using namespace std;
class Stack{
    public:
    int* arr;
    int size;
    int top1;
    int top2;
    Stack(int capacity){
        arr=new int[capacity];
        size=capacity;
        top1=-1;
        top2=size;
    }
    void push1(int value){
        if(top2-top1==1){
            cout<<"stack overflow"<<endl;
            return ;
        }else{
            top1++;
            arr[top1]=value;
        }
    }
    void push2(int value){
        if(top2-top1==1){
            cout<<"Stack overflow"<<endl;
            return;
        }else{
            top2--;
            arr[top2]=value;
        }
    }
    int pop1(){
        if(top1==-1){
            cout<<"stack underflow"<<endl;
        }else{     
            arr[top1]=0;
            return top1--;
        }
    }
    int pop2(){
        if(top2==size){
            cout<<"Stack underflow"<<endl;
        }else{
            arr[top2]=0;
            return top2++;
        }
    }
    
    void print() {
        cout << "Top1: " << top1 << endl;
        cout << "Top2: " << top2 << endl;
        for(int i=0; i<size; i++) {
          cout << arr[i] << " ";
        }
        cout << endl;
      }
};
int main(){
    Stack s(5);
    s.push1(5);
    s.push1(10);
    s.push2(53);
    s.push2(50);
    s.push1(532);
    s.pop1();
    s.pop1();
    s.pop2();
    //s.push1(5332);
    s.print();
    return 0;
}