#include<bits/stdc++.h>
using namespace std;
class node{
public:
    int value;
    node* nxt;
    node* prv;
};
class doublyLinkedList{
public:
    node *head;
    node *tail;
    int size;
    doublyLinkedList(){
        size = 0;
        head = NULL;
        tail = NULL;
    }
    node *createnewnode(int value){
        node* newNode=new node;
        newNode->value = value;
        newNode->nxt=NULL;
        newNode->prv=NULL;
        return newNode;
    }
    int Getsize(){
        return size;
    }
    void insertHead(int value){
        node *a=createnewnode(value);
        if(head==NULL){
            head=a;
            tail=a;
            return;
        }
        node *b=head;
        a->nxt=b;
        b->prv=a;
        head=a;
        size++;
    }
    void insertTail(int value) {
        node* new_node = createnewnode(value);
        if (size == 0) {
            head = new_node;
            tail = new_node;
        }
        else {
            new_node->prv = tail;
            tail->nxt = new_node;
            tail = new_node;
        }
        size++;
    }
    void insertMid(int value) {
        if (size == 0) {
            insertHead(value);
        }
        else if (size == 1) {
            insertTail(value);
        }
        else {
            int mid = size / 2;
            node* current = head;
            for (int i = 0; i < mid; i++) {
                current = current->nxt;
            }
            node* new_node = createnewnode(value);
            new_node->prv = current->prv;
            new_node->nxt = current;
            current->prv->nxt = new_node;
            current->prv = new_node;
            size++;
        }
    }
    void Traverse(){
        node *a=head;
        while(a!=NULL){
            cout<<a->value<<" ";
            a=a->nxt;
        }
        cout<<endl;
    }
};
int main() {
    doublyLinkedList list;
    list.insertHead(100);
    list.insertTail(55);
    list.insertMid(45);
    list.insertHead(25);
    list.insertTail(65);
    list.insertMid(15);
    cout<<"Original List-->";
    list.Traverse();
    list.insertMid(10);
    cout<<"Again Insert At Mid-->";
    list.Traverse();
    list.insertTail(70);
    cout<<"Again Insert At Tail-->";
    list.Traverse();
    list.insertHead(50);
    cout<<"Again Insert At Head-->";
    list.Traverse();
    cout<<"Size Of the List-->";
    cout<<list.Getsize()<<endl;
    return 0;
}