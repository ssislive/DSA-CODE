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

    linkedlistTraversal(head);

    return 0;
}