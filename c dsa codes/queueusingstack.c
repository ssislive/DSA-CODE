#include<stdio.h>
#include<stdlib.h>
#define MAX 100

int stack1[MAX];
int stack2[MAX];
int top1=-1;int top2=-1;

void push1(int x){
    top1++;
    stack1[top1]=x;
}

void push2(int x){
    top2++;
    stack2[top2]=x;
}

int pop1(){
    int val=stack1[top1];
    top1--;
    return val;
}

int pop2(){
    int val=stack2[top2];
    top2--;
    return val;
}

void  enqueue(int x){
    push1(x);
}

int dequeue(){
    if(top1==-1){
        printf("queue is empty\n"); 
        return -1;
    }
    while(top1 !=-1){
        push2(pop1());
    }
    int val=pop2();

    while(top2!=-1){
        push1(pop2());
    }
    return val;
}
int main(){
    enqueue(10);
    enqueue(20);
    enqueue(30);

    printf("Dequeue: %d\n", dequeue());  
    printf("Dequeue: %d\n", dequeue());  

    return 0;
}