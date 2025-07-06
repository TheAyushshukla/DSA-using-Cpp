#include<iostream>
using namespace std;

void  lastoccurence(string s,char x,int index,int &ans){
    if(index==s.size()){
        return;
    }
    if(s[index]==x){
        ans=index;
    }
    lastoccurence(s,x,index+1,ans);
}
void lastoccurence_right_to_left(string s,char x,int i,int &ans){
    if(i<0){
        return;
    }
    if(s[i]==x){
        ans=i;
        return;
    }
    lastoccurence_right_to_left(s,x,i-1,ans);
}
int main(){
    string s="abcddedg";
    int size=s.size();
    char x='d';
    int ans=-1;
    int index=size-1;
  // lastoccurence(s,x,index,ans);
  lastoccurence_right_to_left(s,x,index,ans);
   cout<<ans;
    return 0;
}