#include<iostream>
using namespace std;
int getlength(char arr[],int size){
    int count=0;
    int index=0;
    while(arr[index]!='\0'){
        count++;
        index++;
    }
    return count;
}
void replaceCharacter(char origionalcharacter,char replacechar,char arr[],int size){
    for(int i=0;i<size;i++){
        if(arr[i]==origionalcharacter){
            arr[i]=replacechar;
        }
    }
}
void convertuppertoLower(char arr[],int size){
    int len=getlength(arr,size);
    for(int i=0;i<len;i++){
        char ch=arr[i];
        if(ch>='A'&&ch<='Z'){
            ch=ch -'A'+'a';
        }
        arr[i]=ch;
    }
}
void convertINtoUPPer(char arr[],int size){
    int len=getlength(arr,size);
    for(int i=0;i<len;i++){
        char ch=arr[i];
        if(ch>='a' && ch<='z'){
            ch=ch -'a'+'A';
        }
        arr[i]=ch;
    }
}
void reversearray(char arr[],int n){
    int len=getlength(arr,n);
    int i=0;
    int j=len-1;
    while(i<=j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
}
bool checkPalindrome(char arr[],int n){
    int len=getlength(arr,n);
    int i=0;
    int j=len-1;
    while(i<=j){
        if(arr[i]==arr[j]){
            i++;
            j--;
        }
        else{
            return false;
        }
    }
    return true;
}
int  main(){
    char arr[100];
    cout<<"Enter the value:";
    cin>>arr;
    cout<<"check palindrome="<<checkPalindrome(arr,100);
    //reversearray(arr,100);
    //convertINtoUPPer(arr,100); 
    //convertuppertoLower(arr,100);
    //cout<<getlength(arr,100);
    //replaceCharacter('@',' ',arr,100);
    //cout<<arr<<endl;
    return 0;
}