#include<bits/stdc++.h>
using namespace std;
class node{
    public:
        int data;
        node *next_node;
};
class linked_list{
    public:
        node * head;
        int size;
        linked_list(){
            head = NULL;
            size = 0;
        }
        node* create_new_node(int value){
            node * new_node = new node;
            new_node->data = value;
            new_node->next_node =NULL;
            return new_node;
        }
        void insert_at_head(int value){
            size++;
            node * a=create_new_node(value);
            if(head == NULL){
                head = a;
                return;
            }
            //else if(head!=NULL)
            a->next_node =head;
            head=a;
        }
        void traverse(){
            node * a;
            a=head;
            while(a!=NULL){
                cout<<a->data<<" ";
                a=a->next_node;
            }
            cout<<endl;
        }
        int distint_search(int value){
            node * a;
            a=head;
            int index=0;
            while(a!=NULL){
                if(a->data==value){
                    return index;
                }
                a=a->next_node;
                index++;
            }
            return -1;
        }
        void searchAll(int value){
            node * a;
            a=head;
            int index=0;
            while(a!=NULL){
                if(a->data==value){
                    cout<<value<<" is found at index "<<index<<endl;
                }
                a=a->next_node;
                index++;
            }
        }
        //O(n)
    // int getSize(){
    //     int size=0;
    //     node * a=head;
    //     while(a!=NULL){
    //         size++;
    //         a=a->next_node;
    //     }
    //     return size;
    // }
    //O(1)
    int getSize(){
        return size;
    }
    //insert at any index.
    void Insert_at_anyIndex(int index, int value){
        if(index<0 || index>size){
            return;
        }
        if(index==0){
            insert_at_head(value);
            return;
        }
        size++;
        node * a=head;
        int current_index=0;
        while(current_index!=index-1){
            a=a->next_node;
            current_index++;
        }
        node *newNode=create_new_node(value);
        newNode->next_node=a->next_node;
        a->next_node=newNode;
    }
    void delete_at_head(){
        if(head==NULL){
            return;
        }
        size--;
        node * a=head;
        head=a->next_node;
        delete a;
    }
    void delete_at_tail(){
    if(head==NULL){
        return;
    }
    size--;
    node * a=head;
    node * b=head;
    while(a->next_node!=NULL){
        b=a;
        a=a->next_node;
    }
    b->next_node=NULL;
    delete a;
    }
    void delete_at_any_index(int index){
        if(index<0 || index>size-1){
            return;
        }
        size--;
        if(index==0){
            delete_at_head();
            return;
        }
        node * a=head;
        int current_index=0;
        while(current_index!=index-1){
            a=a->next_node;
            current_index++;
        }
        node *b=a->next_node;
        a->next_node=b->next_node;
        delete b;
    }
    void insert_at_specified_head(int value,int data){
        node * a=head;
        while(a!=NULL){
            if(a->data==value){
                break;
            }
            a=a->next_node;
        } 
        if(a==NULL){
            cout<<value<<" does not exist"<<endl;
        }
        node *new_node=create_new_node(data);
        new_node->next_node=a->next_node;
        a->next_node=new_node;
        size++;
    }
    void printReverse(node *a){
        if(a==NULL){
            return;
        }
        printReverse(a->next_node);
        cout<<a->data<<" ";
    }  
    void ReversePrint(){
        printReverse(head);
        cout<<endl;
    }
};
int main(){
    linked_list l;
    l.insert_at_head(1);
    l.insert_at_head(2);
    l.insert_at_head(3);
    l.insert_at_head(3);
    l.traverse();
    cout<<"3 is found at "<<l.distint_search(3)<<endl;
    cout<<"2 is found at "<<l.distint_search(2)<<endl;
    cout<<"10 is found at "<<l.distint_search(10)<<endl;
    l.searchAll(3);
    cout<<l.getSize()<<endl;
    l.traverse();
    l.Insert_at_anyIndex(2,100);
    cout<<l.getSize()<<endl;
    l.traverse();
    l.delete_at_head();
    l.traverse();
    cout<<l.getSize()<<endl;
    l.delete_at_any_index(2);
    l.traverse();
    cout<<l.getSize()<<endl;
    l.insert_at_specified_head(3,1000);
    l.traverse();
    cout<<l.getSize()<<endl;
    l.delete_at_tail();
    l.traverse();
    cout<<l.getSize()<<endl;
    l.ReversePrint();
}