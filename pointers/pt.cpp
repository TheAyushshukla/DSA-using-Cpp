#include<iostream>
using namespace std;

int main(){
    int arr[]={10,20,30,40};
    int* ptr=arr;
    cout<<arr<<endl;
    cout<<arr+1<<endl;
    cout<<arr+2<<endl;
    cout<<endl;
    cout<<ptr<<endl;
    cout<<ptr+1<<endl;
    cout<<ptr+2<<endl;

    // int a=5;
    // cout<<a<<endl;// prints the value of a 
    // int* ptr=&a; // store the address of a in the pointer type variable.
    // cout<<ptr<<endl; // print the address of a 
    // cout<<&ptr<<endl; // stores the address of ptr pointer
    // cout<<*ptr<<endl; // value at address present at ptr;

    // int c=6;
    // int &d=c;
    // cout<<&d<<endl;
    // cout<<&c<<endl;
    // char e='a';
    // char*ptr2=&e;
    // cout<<sizeof(ptr)<<endl;
    // cout<<sizeof(ptr2)<<endl;
    // int *point; // considered as bad practice.
    // cout<<point<<endl;// garbage value .
    return 0;
}