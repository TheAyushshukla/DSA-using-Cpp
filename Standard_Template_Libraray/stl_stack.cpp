#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int> st;
    // follow first in last out 
    st.push(10);
    // 10
    st.push(20);
    // 10->20
    st.push(30);
    // 10->20->30
    st.push(40);
    // 10->20->30->40
    cout<<st.size()<<endl;
    cout<<st.top()<<endl; // access only top element in the stack
    st.pop(); // delete at the top or last insert element
    st.pop();
    cout<<st.top()<<endl;
    if(st.empty()==true){
        cout<<" stack is empty";
    }
    else{
        cout<<"stack is not empty";
    }
    cout<<endl;
    stack<int> st2;
    st2.push(34); // swap the stacks
    st2.push(343);
    st2.push(43);
    st.swap(st2);
    cout<<st.top()<<endl;
    return 0;
}