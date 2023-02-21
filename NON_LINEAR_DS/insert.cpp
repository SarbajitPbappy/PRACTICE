#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int id;
    node *left;
    node *right;
    node *parent;
};
class binaryTree{
    public:
    node *root;
    binaryTree(){
        root=NULL;
    }
    node *createNewNode(int id){
        node *newNode = new node;
        newNode->id=id;
        newNode->left=NULL;
        newNode->right=NULL;
        newNode->parent=NULL;
        return newNode;
    }
    void insertion(int id){
        node *newNode=createNewNode(id);
        if(root==NULL){
            root=newNode;
            return;
        }
        queue<node*>q;
        q.push(root);
        while(!q.empty()){
            node * a=q.front();
            q.pop();
        if(a->left!=NULL){
            q.push(a->left);
        }
        else{
            a->left=newNode;
            newNode->parent=a;
            return;
        }
        if(a->right!=NULL){
            q.push(a->right);
        }
        else{
            a->right=newNode;
            newNode->parent=a;
            return;
        }
    }

}

    void BFS(){
        queue<node*>q;
        q.push(root);
        while(!q.empty()){
            node * a=q.front();
            q.pop();
        int p=-1;
        int l=-1;
        int r=-1;
        if(a->left!=NULL){
            l=a->left->id;
            q.push(a->left);
        }
        if(a->right!=NULL){
            r=a->right->id;
            q.push(a->right);
        }
        if(a->parent!=NULL){
            p=a->parent->id;
        }
            cout<<"Node Id= "<<a->id<<", Left child= "<<l<<", Right child= "<<r<<", Parent Id = "<<p<<endl;
        }
    }

    void DFS(node *a){
        if(a==NULL){
            return;
        }
        cout<<a->id<<" ";
        DFS(a->left);
        DFS(a->right);    
    }
    void inorder(node *a){
        if(a==NULL) return;
        inorder(a->left);
        cout<<a->id<<" ";
        inorder(a->right);
    }
    void preorder(node *a){
        if(a==NULL){
            return;
        }
        cout<<a->id<<" ";
        preorder(a->left);
        preorder(a->right);    
    }
    void postorder(node *a){
        if(a==NULL){
            return;
        }
        postorder(a->left);
        postorder(a->right);  
        cout<<a->id<<" ";  
    }
    
};
int main(){
    binaryTree bt;
    //bt.BFS();
    //bt.DFS(bt.root);
    //bt.inorder(bt.root);
    //bt.preorder(bt.root);
    //bt.postorder(bt.root);
    bt.insertion(0);
    bt.insertion(1);
    bt.insertion(2);
    bt.insertion(3);
    bt.insertion(4);
    bt.insertion(5);
    bt.BFS();
}