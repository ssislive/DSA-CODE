#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* next;
};

/* Traversal */
void traversalddl(struct node* head){
    if(head == NULL){
        printf("List is empty\n");
        return;
    }

    struct node* p = head;
    do{
        printf("element %d\n", p->data);
        p = p->next;
    }while(p != head);
}

/* Insert at beginning */
struct node* insertatbegddl(struct node* head, int data){
    struct node* p = (struct node*)malloc(sizeof(struct node));
    p->data = data;

    struct node* q = head;
    while(q->next != head){
        q = q->next;
    }

    q->next = p;
    p->next = head;
    head = p;

    return head;
}

/* Insert at index */
struct node* insertatatindexddl(struct node* head, int data, int index){
    struct node* p = (struct node*)malloc(sizeof(struct node));
    p->data = data;

    struct node* q = head;
    int i = 0;

    while(i != index-1){
        q = q->next;
        i++;
    }

    p->next = q->next;
    q->next = p;

    return head;
}

/* Insert at end */
struct node* insertatendddl(struct node* head, int data){
    struct node* p = (struct node*)malloc(sizeof(struct node));
    p->data = data;

    struct node* q = head;
    while(q->next != head){
        q = q->next;
    }

    q->next = p;
    p->next = head;

    return head;
}

/* Insert after node */
struct node* insertafteranodeddl(struct node* head, int data, struct node* prevnode){
    struct node* p = (struct node*)malloc(sizeof(struct node));
    p->data = data;

    p->next = prevnode->next;
    prevnode->next = p;

    return head;
}

int main(){
    struct node* head = (struct node*)malloc(sizeof(struct node));
    struct node* second = (struct node*)malloc(sizeof(struct node));
    struct node* third = (struct node*)malloc(sizeof(struct node));

    head->data = 7;
    head->next = second;

    second->data = 11;
    second->next = third;

    third->data = 41;
    third->next = head;

    printf("After insertion at index 1:\n");
    head = insertatatindexddl(head, 56, 1);
    traversalddl(head);

    return 0;
}
