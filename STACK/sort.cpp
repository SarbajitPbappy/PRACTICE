#include<bits/stdc++.h>
using namespace std;
template<class T>
class node{
    public:
    T data;
    node *next_node;
    node *prev_node;
};
template<class T>
class doublyLinkedList{
    public:
        node<T> * head;
        int size;
    doublyLinkedList(){
        head = NULL;
        size = 0;
    }
    node <T>* create_new_node(T value){
        node <T>* new_node=new node<T>;
        new_node->data = value;
        new_node->next_node = NULL;
        new_node->prev_node = NULL;
        return new_node;
    }
    int getSize(){
        return size;
    }
    void insert_at_head(T value){
        size++;
        node<T> * a=create_new_node(value);
        if(head==NULL){
            head = a;
            return;
        }
        a->next_node = head;
        head->prev_node = a;
        head=a;
    }
    void delete_at_head(){
        if(head==NULL){
            return;
        }
        size--;
        node<T>* a=head;
        node<T>* b=head->next_node;
        delete a;
        if(b!=NULL){
            b->prev_node=NULL;
        }
        head=b;
    }
};
template<class T>
class Stack{
    public:
    doublyLinkedList<int> dl;
    Stack(){

    }
    T top(){
        if(dl.getSize()==0){
            return T();
    }
    return dl.head->data;
    }
    void push(int value){
        dl.insert_at_head(value);
    }
    void pop(){
        if(dl.getSize()==0){
            return;
        }
        dl.delete_at_head();
    }
    int getSize(){
        return dl.getSize();
    }
};
int main(){
    Stack<int> st;
    st.push(3);
    st.push(4);
    st.push(6);
    st.push(2);
    st.push(5);
    Stack <int>tmp;
    while(st.getSize()>0){
        int t=st.top();
        st.pop();
        while(st.getSize()>0){
        if(tmp.top()<t){
            break;
        }
        st.push(tmp.top());
        tmp.pop();
        }
        tmp.push(t);
    }
    swap(st,tmp);
    while(st.getSize()>0){
        cout<<st.top()<<" ";
        st.pop();
    }
}