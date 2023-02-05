#include<bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node * nxt;
    node * prv;
};
class DoublyLinkedList
{
public:
    node *head;
    int sz;
    DoublyLinkedList()
    {
        head = NULL;
        sz = 0;
    }
    node * CreateNewNode(int data)
    {
        node *newnode = new node;
        newnode->data = data;
        newnode->nxt = NULL;
        newnode->prv = NULL;
        return newnode;
    }
    void push_back(int newElement) {
      sz++;
      node* newNode = new node();
      newNode->data = newElement;
      newNode->nxt = NULL;
      newNode->prv = NULL; 
      if(head == NULL) {
        head = newNode;
      } else {
        node* temp = head;
        while(temp->nxt != NULL)
          temp = temp->nxt;
        temp->nxt = newNode;
        newNode->prv = temp;
      }    
    }
     void push_at(int position, int newElement) {
      node * newNode = new node();
      newNode->data = newElement;
      newNode->nxt = NULL;
      newNode->prv = NULL;
      if(position < 1) {
        cout<<"\nposition should be >= 1.";
      } else if (position == 1) {
        newNode->nxt = head;
        head->prv = newNode;
        head = newNode;
      } else {
        node* temp = head;
        for(int i = 1; i < position-1; i++) {
          if(temp != NULL) {
            temp = temp->nxt;
          }
        }
        if(temp != NULL) {
          newNode->nxt = temp->nxt;
          newNode->prv = temp;
          temp->nxt = newNode;
          if(newNode->nxt != NULL)
            newNode->nxt->prv = newNode;  
        } else {
          cout<<"\nThe previous node is null.";
        }
      }
      sz++;
    }
    void delete_node(int index){
        if(index>=sz){
            return;
        }
        node *a=head;
        int current_index=0;
        while(current_index!=index){
            a=a->nxt;
            current_index++;
        }
        node *b=a->prv;
        node *c=a->nxt;
        if(b!=NULL)
        b->nxt=c;
        if(c!=NULL)
        c->prv=b;
        delete a;
        if(index==0){
            head=c;
        }
        sz--;
    }
    void deleteAllNodes() {
      node* temp = new node();
      while(head != NULL) {
        temp = head;
        head = head->nxt;
        free(temp);
      }  
    }
    void Traverse() {
      node* temp = head;
      if(temp != NULL) {
        while(temp != NULL) {
          cout<<temp->data<<",";
          temp = temp->nxt;
        }
      }
    }
    int getSize()
    {
        return sz;
    }
    void Reverse()
    {
        if(head==NULL)
        {
            return;
        }
        node *a = head;
        int cur_index = 0;
        while(cur_index != sz-1)
        {
            a = a->nxt;
            cur_index++;
        }
        node *b = head;
        while(b!= NULL)
        {
            swap(b->nxt, b->prv);
            b = b->prv;
        }
        head = a;
    }
    void Swap(int i, int j)
    {
        if(i>=sz || j>=sz)
        {
            return;
        }
        node *a = head;
        int cur_index = 0;
        while(cur_index != i)
        {
            a = a->nxt;
            cur_index++;
        }
        node *b = head;
        cur_index = 0;
        while(cur_index != j)
        {
            b = b->nxt;
            cur_index++;
        }
        int temp = a->data;
        a->data = b->data;
        b->data = temp;
    }
    void deleteZero() 
    { 
        if (head == NULL) 
            return; 
        node *prev = head; 
        node *curr = head->nxt; 
    
        while (curr != NULL) 
        { 
            if (curr->data == 0) 
            { 
                prev->nxt = curr->nxt; 
                free(curr); 
                curr = prev->nxt; 
            } 
            else
            { 
                prev = curr; 
                curr = curr->nxt; 
            } 
        } 
        if (head->data == 0) 
        { 
            node *temp = head; 
            head = head->nxt; 
            free(temp); 
        } 
    }
};

int main()
{
    DoublyLinkedList dl;
    dl.push_back(3);
    dl.push_back(2);
    dl.push_back(6);
    dl.push_back(4);
    dl.push_back(7);
    dl.Swap(1,4);
    cout<<"Doubly Linked list containing the elements [";
    dl.Traverse();
    cout<<"]"<<endl;
    dl.deleteAllNodes();
    dl.push_back(0);
    dl.push_back(2);
    dl.push_back(0);
    dl.push_back(0);
    dl.push_back(5);
    dl.deleteZero();
    cout<<"Doubly Linked list containing the elements [";
    dl.Traverse();
    cout<<"]"<<endl;
    return 0;
}