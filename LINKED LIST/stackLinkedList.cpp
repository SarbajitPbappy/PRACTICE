#include<bits/stdc++.h>
using namespace std;
template<class T>
class node{
    public:
        T data;
        node<T> *next_node;
};
template<class T>
class Stack{
    public:
        node<T> * head;
        int size;
        Stack(){
            head = NULL;
            size = 0;
        }
        node <T> *create_new_node(T value){
            node<T> * new_node = new node<T>;
            new_node->data = value;
            new_node->next_node =NULL;
            return new_node;
        }
        void pushATstack(T value){
            size++;
            node <T> * a=create_new_node(value);
            if(head == NULL){
                head = a;
                return;
            }
            a->next_node =head;
            head=a;
        }
    T getSize(){
        return size;
    }
    void popStack(){
        if(size==0){
            cout<<"Empty stack"<<endl;
            return;
        }
        size--;
        node<T> * a=head;
        head=a->next_node;
        delete a;
    }
    T top(){
        if(size==0){
            cout<<"Empty stack"<<endl;
            T a;
            return a;
    }
    return head->data;
    }
};
int main(){
    Stack<int> st;
    cout<<st.getSize()<<endl;
    st.pushATstack(10);
    st.pushATstack(20);
    st.pushATstack(30);
    cout<<st.getSize()<<endl;
    cout<<st.top()<<endl;
    st.popStack();
    cout<<st.top()<<endl;
    st.popStack();
    cout<<st.top()<<endl;
    st.popStack();
    cout<<st.getSize()<<endl;
}