#include<stdio.h>
#include<stdlib.h>

struct queue{
    int size;
    int f;
    int r;
    int *arr;
};
void equeue(struct queue *q,int val){
    if(q->r==q->size-1){
        printf("queue overflow\n");
    }
    else{
        q->r++;
        q->arr[q->r]=val;
    }
}

int isfull(struct queue *q){
    if(q->r==q->size-1){
        return 1;
    }else{
        return 0; 
    }
}

int dequeue(struct queue *q){
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
int main(){
    struct queue *q;
    q=(struct queue *)malloc(sizeof(struct queue));
    q->size=10;
    q->f=q->r=-1;
    q->arr=(int *)malloc(q->size*sizeof(int));
    equeue(q,22);
    equeue(q,32);
    equeue(q,42);
    printf("dequeued element is %d\n",dequeue(q));
    return 0;

}