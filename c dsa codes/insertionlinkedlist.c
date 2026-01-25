#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* Next ;
};

// Linked list traversal
void linkedlistTraversal(struct node* ptr){

    

    while (ptr != NULL)
    {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->Next;
    }
}

int insertatfirst(struct node* head ,int data){

    struct node* ptr=(struct node*)malloc(sizeof(struct node));

    ptr->data=data;
    ptr->Next=head;
    
    return ptr;
}

int insertatindex(struct node* head ,int data,int index){
    struct node* ptr=(struct node*)malloc(sizeof(struct node));

    struct node* p=head;
    int i=0;
    while(i != index-1){
        p=p->Next;
        i++;
    }
    ptr->data=data;
    ptr->Next=p->Next;
    p->Next=ptr;
    return head;
}

int insertatend(struct node* head ,int data){

    struct node* ptr=(struct node*)malloc(sizeof(struct node));
    ptr->data=data;

    struct node* p=head; 

    while(p->Next!=NULL){
        p=p->Next;
    }
    ptr->Next=p->Next;
    p->Next=ptr;
    
    return head;

}

int insertatnode(struct node* head ,struct node* prevnode,int data){

    struct node* ptr=(struct node*)malloc(sizeof(struct node));
    ptr->data=data;

    ptr->Next=prevnode->Next;
    prevnode->Next=ptr;
    
    return head;

}

int main(){
// Linked list making
    struct node* head;
    struct node* second;
    struct node* third;

    head=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));

    head->data=32;
    head->Next=second;

    second->data=22;
    second->Next=third;

    third->data=11;
    third->Next=NULL;


    printf("Before insertion:\n");

    linkedlistTraversal(head);

    // head = insertatfirst(head,56);

    // printf("After insertion at first:\n");
    
    // linkedlistTraversal(head);

    // printf("After insertion at index 1:\n");

    // head=insertatindex(head,89,1);

    // linkedlistTraversal(head);

    // printf("After insertion at end:\n");

    // head=insertatend(head,99);

    // linkedlistTraversal(head);

    printf("After insertion at given node:\n");

    head=insertatnode(head,second,78);

    linkedlistTraversal(head);


    return 0;
}