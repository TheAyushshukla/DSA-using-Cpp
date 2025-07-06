#include <iostream>
using namespace std;
void swap(int a, int b){
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"the value of a="<<a<<endl;
    cout<<"the value of b="<<b<<endl;
}
int main(){
    int a=5;
    int b=6;
    swap(a,b);
    return 0;
}