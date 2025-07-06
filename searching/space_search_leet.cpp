#include<iostream>
#include<vector>
using namespace std;
        double mySqrt(int x) {
            int s=0;
            int e=x;
            long long int mid=s+(e-s)/2;
            int ans=-1;
            while(s<=e){
                long long product=mid*mid;
                if(product==x){
                    return mid;
                }
                if(product<x){
                    // store and compute
                    // may or may not be the answer
                    ans=mid;
                    s=mid+1;
                }
                else{
                    // mid*mid>x
                    e=mid-1;
                }
                mid=s+(e-s)/2;
            }
           // return ans;
           double sqans=(double)ans;
           int precision;
           cout<<"precision upto how many digits:";
           cin>>precision;
           for(int i=0;i<precision;i++){
            
           }
        }
    
    // Important: search and space pattern question ;
    int main(){
        int num=54;
        double ans=mySqrt(num);
        cout<<ans<<endl;
    }