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
    node* allnode[6];
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
        for(int i=0; i<9 ; i++){
            allnode[i]=createNewNode(i);
        }
        allnode[0]->left=allnode[10];
        allnode[0]->right=allnode[22];

        allnode[1]->left=allnode[5];
        allnode[1]->parent=allnode[0];
        allnode[1]->right=allnode[12];

        allnode[2]->right=allnode[4];
        allnode[2]->parent=allnode[0];
        allnode[2]->left=allnode[3];

        allnode[5]->parent=allnode[1];
        allnode[3]->parent=allnode[2];
        allnode[4]->parent=allnode[2];  

        root=allnode[0];
    }
    void print_info(){
    for(int i=0;i<6;i++){
        int p=-1;
        int l=-1;
        int r=-1;
        if(allnode[i]->parent!=NULL){
            p=allnode[i]->parent->id;
        }
        if(allnode[i]->left!=NULL){
            l=allnode[i]->left->id;
        }
        if(allnode[i]->right!=NULL){
            r=allnode[i]->right->id;
        }
            cout<<"Node "<<i<<": Parent = "<<p<<", Left Child = "<<l<<", Right Child = "<<r<<endl;
        }
    }
};
int main(){
    binaryTree b;
    b.build_binary_tree();
    b.print_info();
}