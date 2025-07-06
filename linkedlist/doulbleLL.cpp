#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* prev;
    Node* next;
    Node(int value){
        this->data=value;
        this->prev=NULL;
        this->next=NULL;
    }
};
void insertathead(int value,Node*&head,Node*&tail){
    if(head==NULL && tail==NULL){
        Node* newnode=new Node(value);
        head=newnode;
        tail=newnode;
    }
    else{
        Node* newnode=new Node(value);
        newnode->prev=NULL;
        newnode->next=head;
        head->prev=newnode;
        head=newnode;
    }
}
void print(Node*head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }cout<<"NULL"<<endl;
    
}
void insertattail(int value,Node* &head,Node* &tail){
    if(head==NULL && tail==NULL){
        Node* newnode=new Node(value);
        head=newnode;
        tail=newnode;
    }
    else{
        Node* newnode=new Node(value);
        newnode->next=NULL;
        newnode->prev=tail;
        tail->next=newnode;
        tail=newnode;
    }
}
int getlength(Node*head){
    Node* temp=head;
    int len=0;
    while(temp!=NULL){
        temp=temp->next;
        len++;
    }
    return len;
}
void insertatpostion(int position,int value,Node* &head,Node* &tail){
    int length=getlength(head);
    if(position==1){
        insertathead(value,head,tail);
    }
    else if(position==length+1){
        insertattail(value,head,tail);
    }
    else{
        Node*temp=head;
        Node*newnode=new Node(value);
        for(int i=0;i<position-2;i++){
            temp=temp->next;
        }
        Node* forward=temp->next;
        newnode->next=forward;
        forward->prev=newnode;
        newnode->prev=temp;
        temp->next=newnode;
        
    }
}
bool find(int target,Node*head){
    Node*temp=head;
    while(temp!=NULL){
        if(temp->data==target){
            return true;
        }
        temp=temp->next;
    }
    return false;
}
void deleteinLL(int position,Node* &head,Node* &tail){
    Node* temp=head;
    int length=getlength(head);
    if(position==1){
        head=head->next;
        head->prev=NULL;
        temp->next=NULL;
        delete temp;
    }
    else if(position==length){
        for(int i=0;i<position-2;i++){
            temp=temp->next;
        }
        Node* curr=temp->next;
        temp->next=NULL;
        curr->prev=NULL;
        delete curr;
    }
    else{
        for(int i=0;i<position-2;i++){
            temp=temp->next;
        }
        Node* current=temp->next;
        Node* forward=current->next;
        temp->next=forward;
        forward->prev=temp;
        current->next=NULL;
        current->prev=NULL;
        delete current;
    }
}
int main(){
    Node* head=NULL;
    Node* tail=NULL;
    // insertatpostion(1,10,head,tail);
    // print(head);
    // insertatpostion(2,50,head,tail);
    // print(head);
    //*************insertatail********** */
     insertattail(10,head,tail);
    // print(head);
     insertattail(20,head,tail);
    // print(head);
     insertattail(50,head,tail);
    // print(head);
    insertattail(70,head,tail);
   // print(head);
    insertatpostion(1,21,head,tail);
    //print(head);
    insertatpostion(4,90,head,tail);
    print(head);
    deleteinLL(5,head,tail);
    print(head);
    deleteinLL(5,head,tail);
    print(head);
   // cout<<find(70,head);
    //***********************insertat head********** */
    // insertathead(10,head,tail);
    // print(head);
    // insertathead(20,head,tail);
    // print(head);
    // insertathead(30,head,tail);
    // print(head);
    //***************creation of node************ */
    // Node* newnode=new Node(10);
    // cout<<newnode->data;
    return 0;
}