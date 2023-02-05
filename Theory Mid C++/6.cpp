#include<bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node * nxt;
};
class LinkedList
{
public:
    node * head;
    int sz;
    LinkedList()
    {
        head = NULL;
        sz=0;
    }
    node* CreateNewNode(int value)
    {
        node *newnode = new node;
        newnode->data = value;
        newnode->nxt = NULL;
        return newnode;
    }
    void InsertAtHead(int value)
    {
        sz++;
        node *a = CreateNewNode(value);
        if(head == NULL)
        {
            head = a;
            return;
        }
        a->nxt = head;
        head = a;
    }
    void Traverse()
    {
        node* a = head;
        while(a!= NULL)
        {
            cout<<a->data<<" ";
            a = a->nxt;
        }
        cout<<"\n";
    }
    int SearchDistinctValue(int value)
    {
        node* a = head;
        int index = 0;
        while(a!= NULL)
        {
            if(a->data==value)
            {
                return index;
            }
            a = a->nxt;
            index++;
        }
        return -1;
    }
    void SearchAllValue(int value)
    {
        node* a = head;
        int index = 0;
        while(a!= NULL)
        {
            if(a->data==value)
            {
                cout<<value<<" is found at index "<<index<<"\n";
            }
            a = a->nxt;
            index++;
        }
    }
    int getSize()
    {
        return sz;
    }
    void InsertAtAnyIndex(int index, int value)
    {
        if(index <0 || index > sz)
        {
            return;
        }
        if(index==0)
        {
            InsertAtHead(value);
            return;
        }
        sz++;
        node *a = head;
        int cur_index = 0;
        while(cur_index!=index-1)
        {
            a = a->nxt;
            cur_index++;
        }
        node *newnode = CreateNewNode(value);
        newnode->nxt = a->nxt;
        a->nxt = newnode;
    }
    void DeleteAtHead()
    {
        if(head == NULL)
        {
            return;
        }
        sz--;
        node *a = head;
        head = a->nxt;
        delete a;
    }
    void DeleteAnyIndex(int index)
    {
        if(index <0 || index > sz-1)
        {
            return;
        }
        if(index==0)
        {
            DeleteAtHead();
            return;
        }
        sz--;
        node *a = head;
        int cur_index = 0;
        while(cur_index != index-1)
        {
            a = a->nxt;
            cur_index++;
        }
        node *b = a->nxt;
        a->nxt = b->nxt;
        delete b;
    }
    void InsertAfterValue(int value , int data)
    {
        node *a = head;
        while(a != NULL)
        {
            if(a->data == value)
            {
                break;
            }
            a = a->nxt;
        }
        if(a== NULL)
        {
            cout<<value<<" doesn't exist in linked-list.\n";
            return;
        }
        sz++;
        node *newnode = CreateNewNode(data);
        newnode->nxt = a->nxt;
        a->nxt = newnode;
    }
    void ReversePrint2(node *a)
    {
        if(a==NULL)
        {
            return;
        }
        ReversePrint2(a->nxt);
        cout<<a->data<<" ";
    }
    void ReversePrint()
    {
        ReversePrint2(head);
        cout<<"\n";
    }
    int getLast()
    {
        if(head == NULL)
        {
            return -1;
        }
        node *a = head;
        while(a->nxt != NULL)
        {
            a = a->nxt;
        }
        return a->data;
    }
    double getAverage()
    {
        if(head == NULL)
        {
            return 0;
        }
        double sum = 0;
        node *a = head;
        while(a != NULL)
        {
            sum += a->data;
            a = a->nxt;
        }
        return sum/sz;
    }
};
int main()
{
    LinkedList l;
    l.InsertAtHead(3);
    l.InsertAtAnyIndex(1,2);
    l.InsertAtAnyIndex(2,6);
    l.InsertAtAnyIndex(3,4);
    l.InsertAtAnyIndex(4,5);
    cout<<l.getLast()<<"\n";
    l.DeleteAnyIndex(4);
    l.InsertAtAnyIndex(4,7);
    cout<<l.getAverage()<<"\n";
    return 0;
}