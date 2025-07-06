#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void pdouble(int a){
    cout<<2*a<<" ";
}
bool check_even(int a){
    return a%2==0;
}
int main(){
  // 1st: for each iterator 
  vector<int> arr{13,20,30,40,50};
  for(int i:arr){
    cout<<i<<" ";
  }cout<<endl;
  // for each function by providing starting and ending address
   for_each(arr.begin(),arr.end(),pdouble);
   cout<<endl;
   // find the particular element
   int target=30;
   auto it=find(arr.begin(),arr.end(),target); //return an iterator 
   cout<<*it<<endl;
   // find on the basis of given condition by providing function
   // giving bool and provide and iterator 
   auto bt=find_if(arr.begin(),arr.end(),check_even);
   cout<<*bt<<endl;
   // to find the no of occurence we use count algorithm
   vector<int> v;
   v.push_back(11);
   v.push_back(14);
   v.push_back(11);
   v.push_back(11);
   v.push_back(20);
   int tag=11;
   int ans=count(v.begin(),v.end(),tag);
   cout<<ans<<endl;
   // count_if: count occurence on the basis of specific criteria
   int ans2=count_if(v.begin(),v.end(),check_even);
   cout<<ans2<<endl;
   //sort: sort the elements according to asscending order
   sort(v.begin(),v.end());
   for(int i:v){
    cout<<i<<" ";
   }cout<<endl;
   //reverse: reverse the element 
   reverse(v.begin(),v.end());
   for(int a:v){
    cout<<a<<" ";
   }cout<<endl;
   vector<int> crr{10,20,30,41,51,61};
   // rotate the elements by specific positions 
   cout<<"Before shifting"<<endl;
   for(int a:crr){
    cout<<a<<" ";
   }cout<<endl;
   rotate(crr.begin(),crr.begin()+3,crr.end());
   cout<<"After shifting:"<<endl;
   for(int a:crr){
    cout<<a<<" ";
   }cout<<endl;
   // partition of elements according to specific cricteria
   auto et=partition(crr.begin(),crr.end(),check_even); // wrong output
   for(int i:crr){
    cout<<*et<<" ";
   }cout<<endl;
    return 0;
}