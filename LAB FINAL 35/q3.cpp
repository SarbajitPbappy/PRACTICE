#include<bits/stdc++.h>
using namespace std;
class node{
public:
    int value;
    node* nxt;
    node* prv;
};
class LinkedList{
public:
    node *head;
    node *tail;
    int size;
    LinkedList(){
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
    void print(){
        node *a=head;
        while(a!=NULL){
            cout<<a->value<<" ";
            a=a->nxt;
        }
        cout<<endl;
    }
    void merge(LinkedList a) {
        if (a.size == 0) {
            return;
        }
        if (size == 0) {
            head = a.head;
            tail = a.tail;
            size = a.size;
            return;
        }
        tail->nxt = a.head;
        a.head->prv = tail;
        tail = a.tail;
        size += a.size;
    }
};
int main() {
    LinkedList list1;
    list1.insertHead(100);
    list1.insertTail(55);
    list1.insertMid(45);
    list1.insertHead(25);
    list1.insertTail(65);
    list1.insertMid(15);
    list1.print();

    LinkedList list2;
    list2.insertTail(70);
    list2.insertTail(80);
    list2.insertTail(90);
    list2.print();

    list1.merge(list2);
    cout<<"After Merging-->";
    list1.print();
    return 0;
}