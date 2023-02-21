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
    void build_binary_tree(){
        node* allnode[6];
        for(int i=0; i<6; i++){
            allnode[i]=createNewNode(i);
        }
        allnode[0]->left=allnode[1];
        allnode[0]->right=allnode[2];

        allnode[1]->left=allnode[5];
        allnode[1]->parent=allnode[0];
        allnode[1]->right=NULL;

        allnode[2]->right=allnode[4];
        allnode[2]->parent=allnode[0];
        allnode[2]->left=allnode[3];

        allnode[5]->parent=allnode[1];
        allnode[3]->parent=allnode[2];
        allnode[4]->parent=allnode[2];  

        root=allnode[0];
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
    bt.build_binary_tree();
    //bt.BFS();
    //bt.DFS(bt.root);
    //bt.inorder(bt.root);
    //bt.preorder(bt.root);
    bt.postorder(bt.root);
}