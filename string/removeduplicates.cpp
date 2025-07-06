#include<iostream>
using namespace std;
int main(){
    string str="abbaca";
    string ans="";
    
    for(int i=0;i<str.length();i++){
        char currentcurrector=str[i];
        if(ans.empty()){
            ans.push_back(currentcurrector);
        }
        else if(currentcurrector==ans.back()){
            ans.pop_back();
        }
        else if(currentcurrector!=ans.back()){
            ans.push_back(currentcurrector);
        }
        
    }
    for(auto i:ans){
        cout<<i<<" ";
    }
    return 0;
}