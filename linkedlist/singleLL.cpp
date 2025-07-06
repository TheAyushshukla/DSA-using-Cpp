#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int value){
        this->data=value;
        this->next=NULL;
    }
};
Node* insertathead(int value,Node* &head,Node* &tail){
    if(head==NULL && tail==NULL){
        //LL is empty
        Node* newnode=new Node(value);
        head=newnode;
        tail=newnode;
    }
    else{
        Node* newnode=new Node(value);
        newnode->next=head;
        head=newnode;
    }
    return head;
}
void print(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
void insertattail(int value,Node* &head,Node* &tail){
    if(head==NULL && tail==NULL){
        Node* newnode=new Node(value);
        head=newnode;
        tail=newnode;
    }
    else{
        Node* newnode=new Node(value);
        tail->next=newnode;
        tail=newnode;
    }
}
int getlength(Node* &head){
     int len=0;
    Node* temp=head;
    while(temp!=NULL){
        temp=temp->next;
        len++;
    }
    return len;
}
void insertatposition(int position,int value,Node* &head,Node* &tail){
     int length=getlength(head);
    if(position==1){
    insertathead(value,head,tail);
   }
   else if(position==length+1){
    insertattail(value,head,tail);
   }
   else{
    Node* temp=head;
    for(int i=0;i<position-2;i++){
        temp=temp->next;
    }
    //create a new node
    Node* newnode=new Node(value);
    newnode->next=temp->next;
    temp->next=newnode;
   }
}
bool searchinLL(int target,Node* &head,Node* &tail){
   Node* temp=head;
   if(head==NULL && tail==NULL){
    cout<<"The LL is empty";
   }
   while(temp!=NULL){
    if(temp->data==target){
        return true;
    }
    temp=temp->next;
   }
   return false;
}
void postionsearchinLL(int target,Node* &head){
 Node*temp=head;
 int position=1;
 while(temp!=NULL){
    if(temp->data==target){
       cout<<position;
    }
    temp=temp->next;
    position++;
 }
}
void deleteinLL(int position,Node* &head,Node* &tail){
    if(head==NULL && tail==NULL){
        cout<<"The linkedlist is empty";
    }
    Node* temp=head;
    // delete the first postion
    if(position==1){
        head=head->next;
        temp->next=NULL;
        delete temp;
    }
    else{
        for(int i=0;i<position-2;i++){
            temp=temp->next;
        }
        Node* deletenode=temp->next;
        temp->next=deletenode->next;
        deletenode->next=NULL;
        delete deletenode;
    }

}
int main(){ 
    Node* head=NULL;
    Node* tail=NULL;
    insertattail(10,head,tail);
    //print(head);
    insertattail(20,head,tail);
    //print(head);
    insertattail(30,head,tail);
   // print(head);
    insertatposition(1,60,head,tail);
    //print(head);
    insertatposition(5,100,head,tail);
    //print(head);
    insertatposition(3,600,head,tail);
    //print(head);
    deleteinLL(1,head,tail);
    print(head);
    // deleteinLL(3,head,tail);
    // print(head);
    // deleteinLL(4,head,tail);
    // print(head);
    postionsearchinLL(30,head);
   // bool ans=searchinLL(100,head,tail);
    //cout<<ans;
    //****************insert at head********************* */
    // head=insertathead(10,head,tail);
    // print(head);
    // head=insertathead(20,head,tail);
    // print(head);
    // head=insertathead(30,head,tail);
    // print(head);
    //creating of new node
    //Node* newnode=new Node(10);
    //cout<<newnode->data<<"->"<<"NULL";
    return 0;
}