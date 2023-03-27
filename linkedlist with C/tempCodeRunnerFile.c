#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct linkedList{
    struct node* head;
    int size;
};
struct node* createNewNode(int value){
    struct node* newNode = (struct node*) malloc(sizeof(struct node));
    newNode->data = value;
    newNode->next = NULL;
    return newNode;
}
void insertAthead(struct linkedList* list, int value){
    list->size++;
    struct node* a=createNewNode(value);
    if(list->head==NULL){
        list->head=a;
        a->next=NULL;
        return;
    }
    a->next=list->head;
    list->head=a;
}
void insertAttail(struct linkedList* list, int value){
    list->size++;
    struct node* a=createNewNode(value);
    struct node* b=list->head;
    while(b->next!=NULL){
        b=b->next;
    }
    b->next=a;
}
int getsize(struct linkedList* list){
    return list->size;
}
void traverse(struct linkedList* list){
    struct node* a=list->head;
    while(a->next!=NULL){
        printf("%d ", a->data);
        a=a->next;
    }
    printf("\n");
}
int main(){
    struct linkedList* l;
    l->head=NULL;
    l->size=0;
    insertAthead(&l,1);
    insertAthead(&l,2);
    insertAthead(&l,3);
    traverse(&l);
    insertAttail(&l,4);
    traverse(&l);
}