#include<iostream>
using namespace std;
void square(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
void rectangle(int n){
    int col;
    cout<<"Enter col:";
    cin>>col;
    for(int i=0;i<n;i++){
        for(int j=0;j<col;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
void hollow_rectangle(int n){
    int col;
    cout<<"Enter col:";
    cin>>col;
    for(int i=0;i<n;i++){
        for(int j=0;j<col;j++){
            if(i==0 ||i==n-1 || j==0 ||j==col-1){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}
void half_pyramid(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
void inverted_halfPyramid(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
void numeric_halfPyramid(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            cout<<j+1;
        }
        cout<<endl;
    }
}
void inverted_NUmeric_halfPyramid(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            cout<<j+1<<" ";
        }
        cout<<endl;
    }
}
void full_pyramid(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            cout<<"  ";
        }
        for(int j=0;j<i+1;j++){
            cout<<"  * ";
        }
        cout<<endl;
    } 
}
void inverted_fullPYrAmid(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            cout<<"  ";
        }
        for(int j=0;j<n-i;j++){
            cout<<" *  ";
        }
        cout<<endl;
    }
}
void diamond(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        for(int j=0;j<i+1;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        for(int j=0;j<n-i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
void hollow_pyramid(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        for(int j=0;j<i+1;j++){
            if(i==0||i==n-1||j==0||j==i){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}
void inverted_hollowPyramid(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        for(int j=0;j<n-i;j++){
            if(i==0||/*i==n-1||*/j==0||j==n-i-1){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}
void hollow_diamond(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        for(int j=0;j<i+1;j++){
            if(i==0||j==0||j==i){
                cout<<"* ";
            }else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        for(int j=0;j<n-i;j++){
            if(j==0||j==n-i-1||i==n-1){
                cout<<"* ";
            }else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}
void pyrmidstar(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<2*i+1;j++){
            if(j%2==0){
                cout<<i+1<<" ";
            }
            else{
                cout<<"* ";
            }
        }
        cout<<endl;
    }
}
void halfPyramidInverted(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            if(i==0||i==n-1||j==0||j==(n-i)-1){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}
void flipped_diamond(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            cout<<"* ";
        }
        for(int j=0;j<2*i+1;j++){
            cout<<"  ";
        }
        for(int j=0;j<n-i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    for(int i=0;i<n;i++){
        
        for(int j=0;j<i+1;j++){
            cout<<"* ";
        }
        for(int j=0;j<2*n-2*i-1;j++){
            cout<<"  ";
        }
        for(int j=0;j<i+1;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
void butterfly(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            cout<<"* ";
        }
        for(int j=0;j<2*n-2*i-2;j++){
            cout<<"  ";
        }
        for(int j=0;j<i+1;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            cout<<"* ";
        }
        for(int j=0;j<2*i;j++){
            cout<<"  ";
        }
        for(int j=0;j<n-i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
int main(){
    int  n;
    cout<<"Enter the value of n:";
    cin>>n;
    //square(n);
    // rectangle(n);
    // hollow_rectangle(n);
    // half_pyramid(n);
    //inverted_halfPyramid(n);
    //numeric_halfPyramid(n);
    //inverted_NUmeric_halfPyramid(n);
    //full_pyramid(n);
    //inverted_fullPYrAmid(n);
    //diamond(n);
    //hollow_pyramid(n);
    //inverted_hollowPyramid(n);
    //hollow_diamond(n);
    //pyrmidstar(n);
    //halfPyramidInverted(n);
   // flipped_diamond(n);
    //  butterfly(n);
    
    return 0;
}