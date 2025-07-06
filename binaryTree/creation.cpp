#include<iostream>
#include<queue>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int val){
        this->data=val;
        left=NULL;
        right=NULL;
    }
};
Node* createTree(){
    int value;
    cout<<"Enter the value"<<" ";
    cin>>value;
    if(value==-1){
        return NULL;
    }
    else{
        Node* root=new Node(value);
        cout << "adding left child for " << value << endl;
        root->left=createTree();
        cout << "adding right child for " << value << endl;
        root->right=createTree();
        return root;
    }
}
void preOrdertraversal(Node* root){
    if(root==NULL){
        return ;
    }
    cout<<root->data<<" ";
    preOrdertraversal(root->left);
    preOrdertraversal(root->right);
}
void inOrdertraversal(Node* root){
    if(root==NULL){
        return ;
    }
    inOrdertraversal(root->left);
    cout<<root->data<<" ";
    inOrdertraversal(root->right);
}
void postordertraversal(Node* root){
    if(root==NULL){
        return;
    }
    postordertraversal(root->left);
    postordertraversal(root->right);
    cout<<root->data<<" ";
}
void levelordertraversal(Node* root){
    if(root==NULL){
        return ;
    }
    queue<Node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        Node* front=q.front();
        q.pop();
        if(front==NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout<<front->data<<" ";
            if(front->left!=NULL){
                q.push(front->left);
            }
            if(front->right!=NULL){
                q.push(front->right);
            }
        }
    }
}
int main(){
    Node* root;
	root = createTree();
	// 10 50 40 -1 -1 -1 30 20 -1 -1 -1
	//level order traversal ->
	//10
	//50 30
	//40 20
	levelordertraversal(root);

	//cout << "printing root" << root->data << endl;

  return 0;
}