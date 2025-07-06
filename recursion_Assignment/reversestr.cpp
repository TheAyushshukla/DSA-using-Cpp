#include<iostream>
using namespace std;

void reversestring(string &s,int start,int end){
   if(start>=end){
    return ;
   }
   swap(s[start],s[end]);
   reversestring(s,start+1,end-1);
}

int main(){
    string s="edcba";
    int i=0;
    int end=s.size()-1;
    reversestring(s,i,end);
    cout<<s;
    return 0;
}