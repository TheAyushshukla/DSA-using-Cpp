#include<iostream>
#include<map>
using namespace std;
int main(){
    map<string,string> table;
    //insertion
    table["in"]="india";
    table.insert(make_pair("br","brazil"));
    pair<string,string> p;
    p.first="am";
    p.second="America";
    table.insert(p);
    cout<<table.size()<<endl;
    if(table.count("am")==0){ // check if the key is present and return bool
        cout<<"key found:"<<endl;
    }else{
        cout<<"key not found"<<endl;
    }
    if(table.find("em")!=table.end()){
        cout<<"key is found"<<endl;
    }else{
        cout<<"key is not found:"<<endl;
    }
    map<string,string>::iterator it=table.begin();
    while(it !=table.end()){
        pair<string,string> p=*it;
        cout<<p.first<<" "<<p.second<<endl;
        it++;
    }

    return 0;
}