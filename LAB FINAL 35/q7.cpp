#include<bits/stdc++.h>
using namespace std;
class node{
public:
    int value;
    node* left;
    node* right;
};
class BST{
public:
    node* root;
    BST(){
        root =NULL;
    }
    node* createNewNode(int value){
        node* newNode = new node;
        newNode->value =value;
        newNode->left =NULL;
        newNode->right =NULL;
        return newNode;
    }
    void BFS()
    {
        if(root == NULL)
            return;
        queue<node*>q;
        q.push(root);

        while(!q.empty())
        {
            node* a = q.front();
            q.pop();
            int p = -1, l = -1 , r= - 1;
            if(a->left != NULL){
                l = a->left->value;
                q.push(a->left);
            }
            if(a->right != NULL){
                r = a->right->value;
                q.push(a->right);
            }
            cout<<"Node value = "<<a->value<<" Left Child = "<<l;
            cout<<" Right Child = "<<r<<"\n";
        }
    }

    void Insert(int value){
        node* newnode=createNewNode(value);
        if(root==NULL){
            root=newnode;
            return;
        }
        node* current=root;
        node* prv=NULL;
        while(current!=NULL){
            if(newnode->value>current->value){
                prv=current;
                current=current->right;
            }
            else{
                prv=current;
                current=current->left;
            }
        }
        if(newnode->value>prv->value){
            prv->right=newnode;
        }
        else{
            prv->left=newnode;
        }
    }
    bool Search(int value){
        node *current=root;
        while(current!=NULL){
            if(value>current->value){
                current=current->right;
            }
            else if(value<current->value){
                current=current->left;
            }
            else {
                return true;
            }
        }
        return false;
    }
};
int main()
{
    BST bst;
    bst.Insert(10);
    bst.Insert(20);
    bst.Insert(25);
    bst.Insert(50);
    bst.Insert(8);
    bst.Insert(9);
    cout<<bst.Search(10)<<"\n"; //1
    cout<<bst.Search(9)<<"\n"; //1
    cout<<bst.Search(20)<<"\n"; //1
    cout<<bst.Search(60)<<"\n"; //0
    return 0;
}
