#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
};
int push(struct node * top,int data){
    if(isfull(top)){
        printf("stack overflow");
    }
    else{
        struct node* n=(struct node*)malloc(sizeof(struct node));
        n->data=data;
        n->next=top;
        top=n;
        return top;
    }
}

int isempty(struct node * top){
    if(top==NULL){
        return 1;
    }
    else{
        return 0;
    }    
}
int pop(struct node* top){
    if(isempty(top)){
        printf("stack underflow");
    }
    else{
        struct node * n=top;
        top=top->next;
        int popped=n->data;
        free(n);
        return popped;
    }
}

int isfull(struct node * top){
    struct node *b=(struct node*)malloc(sizeof(struct node));
    if(b==NULL){
        return 1;
    }
    else{
        return 0;
    }
}

void print(struct node* top){
    struct node* ptr=top;
    while(ptr!=NULL){
        printf("Element: %d\n",ptr->data);
        ptr=ptr->next;
    }
}

int peek(int pos, struct node* top){
    struct node* ptr=top;
    for(int i=0;(i<pos-1 && ptr!=NULL);i++){
        ptr=ptr->next;
    }
    if(ptr!=NULL){
        return ptr->data;
    }
    else{
        return -1;
    }
}

int stacktop(struct node* top){
    if(isempty(top)){
        printf("stack is empty");
        return -1;
    }
    else{
        return top->data;
    }
}

int stackbottom(struct node* top){
    struct node * p=top;
    while(p->next!=NULL){
        p=p->next;
    }
    return p->data;
}

int main(){
    struct node *top=(struct node*)malloc(sizeof(struct node));
    top->data=10;
    top->next=NULL;
    top=push(top,20);
    
    top=push(top,30);
    print(top);
    
    return 0;
}