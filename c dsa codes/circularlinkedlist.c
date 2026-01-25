#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
};

int traversalddl(struct node* head){
    struct node* p=head;
    if(p==NULL){
        return NULL;
    }
    do{
        printf("element %d \n",p->data);
        p=p->next;
    }while(p!=head);
}

int main(){
    struct node* head=(struct node *)malloc(sizeof(struct node));
    struct node* second=(struct node *)malloc(sizeof(struct node));
    struct node* third=(struct node *)malloc(sizeof(struct node));

    head->data=7;
    head->next=second;

    second->data=11;
    second->next=third;

    third->data=41;
    third->next=head;

    traversalddl(head);
}