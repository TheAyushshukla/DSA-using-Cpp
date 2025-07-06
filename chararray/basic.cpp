#include<iostream>
using namespace std;

int main(){
    // char arr[100];
    // //input
    // cout<<"Enter the name:"<<endl;
    // cin>>arr;
    // //output
    // cout<<"The name is:"<<arr<<endl;
    // cout<<arr[0]<<"->"<<(int)arr[0]<<endl;
    // cout<<arr[1]<<"->"<<(int)arr[1]<<endl;
    // cout<<arr[2]<<"->"<<(int)arr[2]<<endl;
    // cout<<arr[3]<<"->"<<(int)arr[3]<<endl;
    // cout<<arr[4]<<"->"<<(int)arr[4]<<endl;
    // cout<<arr[5]<<"->"<<(int)arr[5]<<endl;
   // input using getline function
    char brr[100];
    cout<<"Enter your name:"<<endl;
    cin.getline(brr,80,'\t'); 
    //\t is deliminater : means deliminate when the tab hit 
    cout<<"Your name is :"<<brr;
    return 0;
}