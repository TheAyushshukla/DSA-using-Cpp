#include <iostream>
using namespace std;
int main(){
    int arr[2][3];
    for(int row=0;row<2;row++){
        for(int column=0;column<3;column++){
            cout<<" Enter the value of "<<"("<<row<<","<<column<<")"<<" ";
            cin>>arr[row][column];
        }
        cout<<endl;
    }
    for(int row=0;row<2;row++){
        for(int column=0;column<3;column++){
            cout<<arr[row][column]<<" ";
        }
        cout<<endl;
    }
    return 0;
}