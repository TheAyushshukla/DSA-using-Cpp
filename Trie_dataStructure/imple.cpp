#include<iostream>
#include<unordered_map>
using namespace std;

class TrieNode{
    public:
    char value;
    unordered_map<int,TrieNode*> children;
    bool isTerminal;

    TrieNode(char data){
        value=data;
        isTerminal=false;
    }
    
};
void insertionIntoTrie(TrieNode* root,string word){
    if(word.length() == 0){
        root->isTerminal=true;
        return;
    }
    char ch=word[0];
    TrieNode* child;
    // insert 1 char in trie
    if(root->children.count(ch) == 1){
        child=root->children[ch];
    }
    else{
        // absent 
        child=new TrieNode(ch);
        // link
        root->children[ch]=child;     
    }
    // rec call
    insertionIntoTrie(child,word.substr(1));
}

bool searchTrie(TrieNode* root,string word){
    // base case
    if(word.length() == 0){
        return root->isTerminal;
    }
    char ch=word[0];
    TrieNode*child;
    if(root->children.find(ch) != root->children.end()){
        child=root->children[ch];
    }
    else{
        return false;
    }
    bool recAns=searchTrie(child,word.substr(1));
    return recAns;
}
void deleteWord(TrieNode* root,string word){
    if(word.length() == 0){
        root->isTerminal=false;
        return ;
    }
    char ch=word[0];
    TrieNode* child;
    if(root->children.find(ch) != root->children.end()){
        child=root->children[ch];
    }
    else{
        return;
    }
    deleteWord(child,word.substr(1));
}
int main(){
    TrieNode* root =new TrieNode('-');
    insertionIntoTrie(root,"cover");
    insertionIntoTrie(root,"car");
    insertionIntoTrie(root,"care");
    insertionIntoTrie(root,"snake");
    insertionIntoTrie(root,"fivefoot");
    insertionIntoTrie(root,"extremlywell");
     insertionIntoTrie(root,"coward");
     insertionIntoTrie(root,"selfobessed");
     insertionIntoTrie(root,"tag");
     insertionIntoTrie(root,"take");
     insertionIntoTrie(root,"took");
    
    
   // deleteWord(root,"cover");
bool ans=searchTrie(root,"cover");

if(ans){
    cout<<"find"<<endl;
}
else{
    cout<<"not find"<<endl;
}

    return 0;
}
