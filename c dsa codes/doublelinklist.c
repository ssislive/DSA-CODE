#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node* next;
    struct node* prev;
};

void linklisttraversal(struct node* head){
    struct node* ptr=head;
    while(ptr!=NULL){
        printf("element: %d\n",ptr->data);
        ptr=ptr->next;
    }
}

int main(){
    struct node* head=(struct node*)malloc(sizeof(struct node));
    struct node* second=(struct node*)malloc(sizeof(struct node));
    struct node* third=(struct node*)malloc(sizeof(struct node));

    head->data=10;
    head->next=second;
    head->prev=NULL;

    second->data=20;
    second->next=third;
    second->prev=head;

    third->data=30;
    third->next=NULL;
    third->prev=second;
    
    linklisttraversal(head);
    return 0;

}