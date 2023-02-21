#include<bits/stdc++.h>

using namespace std;

template<class T>
class Node
{
public:
    T data;
    Node* nxt_node;
    Node* prv_node;
};
template<class T>
class deqeue_doublylinkedlist
{
public:
    Node<T>* head;
    Node<T>* tail;
    int sz;
    deqeue_doublylinkedlist()
    {
        head = NULL;
        tail = NULL;
        sz = 0;
    }
    Node<T>* CreatNewNode(T value)
    {
        Node<T>* newnode = new Node<T>;
        newnode->data = value;
        newnode->nxt_node = NULL;
        newnode->prv_node = NULL;

        return newnode;
    }
    void Push_back(T value)
    {
        Node<T>* newnode = CreatNewNode(value);

        if(sz==0)
        {
            head = newnode;
            tail = newnode;
            sz++;
            return;
        }
        tail->nxt_node = newnode;
        newnode->prv_node = tail;
        tail = newnode;
        sz++;
    }
    void Push_front(T value)
    {
        Node<T>* newnode = CreatNewNode(value);

        if(sz==0)
        {
            head = newnode;
            tail = newnode;
            sz++;
            return;
        }
        head->prv_node = newnode;
        newnode->nxt_node = head;
        head = newnode;
        sz++;
    }
    void Pop_back()
    {
        if(sz==0)
        {
            cout<<"deqeue_doublylinkedlist is empty\n";
            return;
        }
        if(sz==1)
        {
            delete tail;
            head = NULL;
            tail = NULL;
            sz--;
            return;
        }
        Node<T>* a = tail;
        tail = tail->prv_node;
        tail->nxt_node = NULL;
        delete a;
        sz--;
    }
    void Pop_front()
    {
        if(sz==0)
        {
            cout<<"deqeue_doublylinkedlist is empty\n";
            return;
        }
        if(sz==1)
        {
            delete tail;
            head = NULL;
            tail = NULL;
            sz--;
            return;
        }
        Node<T>* a = head;
        head = head->nxt_node;
        head->prv_node = NULL;
        sz--;
        delete a;
    }
    T Front()
    {
        if(sz==0)
        {
            cout<<"Empty\n";
            T a;
            return a;
        }
        return head->data;
    }
    T Back()
    {
        if(sz==0)
        {
            cout<<" Empty\n";
            T a;
            return a;
        }
        return tail->data;
    }
};
int main()
{
    deqeue_doublylinkedlist<int>dqDL;
    dqDL.Push_back(10);
    dqDL.Push_back(9);
    dqDL.Push_front(1);
    cout<<"Front Element : "<<dqDL.Front()<<"\n";
    cout<<"Back Element : "<<dqDL.Back()<<"\n";
    dqDL.Pop_back();
    dqDL.Pop_front();
    cout<<"Front Element : "<<dqDL.Front()<<"\n";
    cout<<"Back Element : "<<dqDL.Back()<<"\n";
    dqDL.Pop_back();
    dqDL.Pop_front();
    cout<<"Front Element : "<<dqDL.Front()<<"\n";
    cout<<"Back Element : "<<dqDL.Back()<<"\n";
    return 0;
}
