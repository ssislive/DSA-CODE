#include<stdio.h>
#include<stdlib.h>

#define MAX 100
int queue[MAX];
int front=-1;int rear=-1;

int isempty(){
    if(front==-1){
        return 1;
    }else{
        return 0;
    }
}

int isfull(){
    if(rear==MAX-1){
        return 1;
    }else{
        return 0;
    }
}

void enqueue(int x){
    if(isfull()){
        printf("Queue is full\n");
    }else{
        if(front==-1){
            front=0;
        }
    rear++;
    queue[rear]=x;
    }
}

int dequeue(){
    if(isempty()){
        printf("queue is empty\n;");
    }else{
        int val=queue[front];
        if(front==rear){
            front=rear=-1;
        }else{
            front++;
        }
    return val;
    }
}

void push(int x){
    enqueue(x);
    int size=rear-front+1;

    for(int i=0;i<size-1;i++){
        int temp=dequeue();
        enqueue(temp);
    }
}

int pop(){
    return dequeue();
}

int top(){
    if(isempty()){
        printf("stack is empty\n");
    }else{
        return queue[front];
    }
}

int main(){
    push(10);
    push(20);
    push(30);
    printf("Top element is %d\n",top());
    printf("Popped element is %d\n",pop());
    printf("pop element is %d\n",pop());
    return 0;
}