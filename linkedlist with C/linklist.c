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
    while(a!=NULL){
        printf("%d ", a->data);
        a=a->next;
    }
    printf("\n");
}

void insertatanyidx(struct linkedList* list,int index,int value){
    if(index<0 && index>list->size){
        return;
    }
    if(index==0){
        insertAthead(list,value);
        return;
    }
    struct node* a=list->head;
    int current_idx=0;
    while(current_idx!=index-1){
        a=a->next;
        current_idx++;
    }
    struct node* new=createNewNode(value);
    new->next=a->next;
    a->next=new;
    list->size++;
}

void dAthead(struct linkedList* list){
    if(list->head==NULL){
        return;
    }
    struct node* a=list->head;
    list->head=a->next;
    free(a);
    list->size--;
}
void del(struct linkedList* list,int index){
    if(index<0 && index>list->size){
        return;
    }
    
    if(index==0){
        dAthead(list);
        return;
    }

    struct node* a=list->head;
    int cur_idx=0;

    while(cur_idx!=index-1){
        a=a->next;
        cur_idx++;
    }
    struct node* next=a->next;
    a->next=next->next;
    free(next);
}

int main(){
    struct linkedList* l = (struct linkedList*) malloc(sizeof(struct linkedList));
    l->head=NULL;
    l->size=0;
    insertAthead(l,1);
    insertAthead(l,2);
    insertAthead(l,3);
    traverse(l);
    insertAttail(l,4);
    traverse(l);
    insertatanyidx(l,2,50);
    traverse(l);
    dAthead(l);
    traverse(l);
    del(l,3);
    traverse(l);
    free(l);
    return 0;
}
