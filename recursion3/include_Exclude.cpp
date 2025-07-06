#include<iostream>
#include<vector>
using namespace std;
void substring(string str,int index,string output,vector<string> &ans){
    if(index==str.length()){
        ans.push_back(output);
        return ;
    }
    //1 case hum solve karenge
    char ch=str[index];
    //inclede
    substring(str,index+1,output+ch,ans);
    // exclude
    substring(str,index+1,output,ans);
}
int main(){
    string str="abc";
    string output="";
    int index=0;
    vector<string> ans;
    substring(str,index,output,ans);
    cout<<ans.size();
    cout<<endl;
    for(auto i:ans){
        cout<<i<<" ";
    }
    return 0;
}