#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;
vector<int> find_complement(vector<int> binary){
    int n=binary.size();
    vector<int>twocom(n,0);
    for(int i=0;i<binary.size();i++){
        // step 1 flip the bits
        if(binary[i]==0){
            twocom[i]=1;
        }
        else{
            twocom[i]==0;
        }
    }
    // add 1 
    int carry=1;
    for(int i=twocom.size()-1;i>=0;i--){
        int sum= twocom[i]+ carry;
        twocom[i]=sum%2;
        carry=sum/2;
        if(carry==0){
            break;
        }
    }
    
    return twocom;
}
int main(){
    vector<int> binary{0,1,1,0,1};
    vector<int> twocom=find_complement(binary);
    for(int i=0;i<twocom.size();i++){
        cout<<twocom[i]<<" ";
    }
    return 0;
}