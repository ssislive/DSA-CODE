#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
};

void enqueue(struct node **f, struct node **r, int val){
    struct node *n = (struct node*)malloc(sizeof(struct node));
    if(n == NULL){
        printf("Queue is full\n");
    }
    else{
        n->data = val;
        n->next = NULL;
        if(*f == NULL){
            *f = *r = n;
        }
        else{
            (*r)->next = n;
            *r = n;
        }
    }
}

int dequeue(struct node **f, struct node **r){
    int val = -1;
    if(*f == NULL){
        printf("Queue is empty\n");
    }
    else{
        struct node *ptr = *f;
        *f = (*f)->next;
        val = ptr->data;
        free(ptr);
        
        if(*f == NULL){
            *r = NULL;
        }
    }
    return val;
}

int main(){
    struct node *f = NULL;  
    struct node *r = NULL;  
    
    enqueue(&f, &r, 10);
    enqueue(&f, &r, 20);
    enqueue(&f, &r, 30);
    
    printf("Dequeued element is %d\n", dequeue(&f, &r));
    printf("Dequeued element is %d\n", dequeue(&f, &r));
    printf("Dequeued element is %d\n", dequeue(&f, &r));
    
    return 0;
}
