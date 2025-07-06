#include<iostream>
using namespace std;


int main(){
    string fname="Ayush shukla";
    string sname="shukla";
    int ans=fname.find(sname);
    cout<<ans<<endl;
    int com=sname.compare(fname);
    cout<<com<<endl;
    // string fullname=fname+sname;
    // auto it=fullname.begin();
    // while(it !=fullname.end()){
    //     cout<<*it;
    //     it++;
    // }cout<<endl;
    // cout<<fullname.substr(0,5)<<endl;
    // cout<<fullname.substr(5)<<endl;
    // string name="Ayush shukla";
    // name.clear();
    //  if(name.empty()){
    //     cout<<"string is empty"<<endl;
    //  }
    //  else{
    //     cout<<"string is not empty"<<endl;
    //  }
    // auto it=name.begin();
    // while(it !=name.end()){
    //     cout<<*it;
    //     it++;
    // }cout<<endl;
    // cout<<name[0]<<endl;
    // cout<<name.at(0)<<endl;

    // cout<<name.front()<<endl;
    // cout<<name.back()<<endl;
    // cout<<name.length()<<endl;
    //taking input using getline function
    //cout<<"Enter the value :";
   // getline(cin,name,'\n');
    // name.push_back('a');
    // name.push_back('y');
    // name.push_back('u');
    // name.push_back('s');
    // name.push_back('h');
    // name.pop_back();
   // cout<<name<<endl;
    // cout<<"Enter the value:";
    // cin>>name;
    // cout<<"str:"<<name<<endl;
    // cout<<name[0]<<" "<<name[1]<<" "<<name[2]<<endl;
    return 0;
}