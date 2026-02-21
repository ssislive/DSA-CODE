#include<stdio.h>
#include<stdlib.h>

struct circularqueue{
    int size;
    int f;
    int r;
    int *arr;
};

void enqueue(struct circularqueue * q,int val){
    if(q->r==q->size-1){
        printf("queue overflow\n");
    } else{
        q->r=(q->r+1)%q->size;
        q->arr[q->r]=val;
        printf("enqueued element is %d\n",val);
    }
}

int dequeue(struct circularqueue *q){
    int a=-1;
    if(q->f==q->r){
        printf("queue underflow\n");
        return -1;
    }
    else{
        q->f=(q->f+1)%q->size;
        a=q->arr[q->f];
        return a;
    }
}

int main(){
    struct circularqueue *q;
    q->size=5;
    q->f=q->r=-1;
    q->arr=(int *)malloc(q->size*sizeof(int));
    enqueue(q,12);
    enqueue(q,22);
    printf("dequeued element is %d\n",dequeue(q));
    return 0;
}