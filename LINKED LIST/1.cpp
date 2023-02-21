#include <bits/stdc++.h>

using namespace std;


template <class T>
class Node
{
public:
    T data;
    Node<T> *next;
};

template <class T>
class Stack
{
public:
    Node<T> *head;
    int sz;
    Stack()
    {
        head = NULL;
        sz = 0;
    }

    Node<T> *CreatNewNode(T value)
    {
        Node<T>* NewNode = new Node<T>;
        NewNode->data = value;
        NewNode->next= NULL;
        return NewNode;
    }
    void Push(int n)
    {
        sz++;
        Node<T>* a = CreatNewNode(n);
        if(head==NULL)
        {
            head = a;
            return;
        }
        a->next = head;
        head = a;
    }

    void Pop()
    {
        if (sz==0)
        {
           cout<<"Stack Is Empty"<<"\n";
           return;
        }
        Node<T> *temp = head;
        head = head->next;
        delete temp;
        sz--;
    }
    T top()
    {
        if (sz==0)
        {
            cout<<"Stack is Empty"<<"\n";
            T a;
            return a;
        }
        return head->data;
    }
    int getSize()
    {
        return sz;
    }
};

int main()
{
    Stack<int> st;
    cout<<"Stack Size is : "<<st.getSize()<<"\n";
    st.Push(10);
    st.Push(7);
    st.Push(12);
    cout<<"Stack Size is : "<<st.getSize()<<"\n";
    cout<<st.top()<<"\n";
    st.Pop();
    cout<<st.top()<<"\n";
    st.Pop();
    cout<<st.top()<<"\n";
    st.Pop();
    cout<<st.top()<<"\n";
    cout<<"Stack Size is : "<<st.getSize()<<"\n";
    return 0;
}
