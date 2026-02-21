#include<stdio.h>
#include<stdlib.h>

struct node{
    int size;
    int f;
    int r;
    int *arr;
};

void enqueuef(struct node *q,int val){
    if(q->f==-1){
        q->f=q->r=q->size-1;
        q->arr[q->f]=val;
    }else if(q->f==0){
        printf("DEqueue overflow\n");
    }
    else{
        q->f--;
        q->arr[q->f]=val;
    }
}

void equeuer(struct node *q,int val){
    if(q->r==q->size-1){
        printf("queue overflow\n");
    }
    else{
        q->r++;
        q->arr[q->r]=val;
    }
}

int dequeuef(struct node *q){
    int a=1;
    if(q->f==q->r){
        printf("queue undeflow \n");
        return -1;
    }
    else{
        q->f++;
        a=q->arr[q->f];
        return a;
    }
}

int dequeuer(struct node*q){
    if(q->r==-1){
        printf("DEqueue undeflow");
    }else{
        int val=q->arr[q->r];
        if(q->f==q->r){
            q->f=q->r=-1;
        }else{
            q->r--;
        }
        return val;
    }
}

int main(){
    struct node * q;
    q=(struct node*)malloc(sizeof(struct node));
    q->f=q->r=-1;
    q->size=10;
    q->arr=(int *)malloc(q->size*sizeof(int));
    enqueuef(q,22);
    enqueuef(q,34);
    int d= dequeuer(q);
    printf("%d",d);
    return 0;
}