#include<iostream>
#include<vector>
using namespace std;
int main(){
    // Initiliazation 
    vector<int> arr; 
    vector<int> arr2(5);
    vector<int> brr(5,10); // vector of 5 size with initital size 5 and initial value 10;
    //vector<int> crr{10,20,30,40,50};
    
    // functions of vectors
    cout<<arr.size(); // for the size of the vector
    // push the elements in the vector
    arr.push_back(22); 
    arr.push_back(32);
    arr.push_back(5);
    arr.push_back(9);
    arr.push_back(33);
    cout<<arr.size()<<endl;
    cout<<arr.capacity()<<endl; // capacity of the vector 
    // capacity of the vector double's when the size of the vector double.
     arr.pop_back(); // delete the last elements in the vector
     arr.pop_back();
    // //arr.pop_back();
    
    cout<<arr.size()<<endl;
    cout<<arr.capacity()<<endl;
    //arr.clear(); //clears all the elements in the vector
    cout<<arr.size()<<endl;
    //cout<<arr.begin()<<endl; // itertor point  at the first element of the vector
    cout<<arr.front()<<endl; // return the first elements of the vector
    cout<<arr.back()<<endl; // return the last element of the vector
    arr.begin(); // iterator point at the first element of the vector
    arr.end(); // iterator point at the just after the last element of the vector 
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<*arr.begin()<<endl;
    cout<<*arr.end()<<endl;
    //arr.clear();
    cout<<arr.empty()<<endl;
    //cout<<arr.max_size(); // Max size that the vector can store
    // arr.reserve(25); // reverse the particular size of the vector
    cout<<arr.size()<<endl;
    cout<<"day 2"<<endl;
    cout<<arr.front()<<endl;
    cout<<arr.back()<<endl;

    brr.insert(brr.begin(),245);
    cout<<brr.at(0)<<endl;
    brr.erase(brr.begin(),brr.end()); // clear the vector
    cout<<brr.size()<<endl;
    // traverse the vector by making iterator
    vector<int>::iterator it;
    it=arr.begin();
    while(it !=arr.end()){
        cout<<*it<<" ";
        it++;
    }
    cout<<endl;
    vector<int> crr;
    crr.push_back(100);
    crr.push_back(200);
    crr.push_back(300);
    crr.push_back(400);
    crr.push_back(600);
    // traversal of the elements using for each method

    for(int i:crr){
      cout<<i<<" ";
    }
    cout<<endl;
    crr.pop_back();
    crr.pop_back();
    for(int i:crr){
        cout<<i<<" ";
    }
    cout<<endl;
    
   cout<<*crr.begin()<<endl; // print the first element of the vector
   cout<<*crr.end()<<endl; // print the last element of the vector
    return 0;
}