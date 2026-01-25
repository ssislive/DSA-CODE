#include<stdio.h>
#include<stdlib.h>

struct stack{
    int size;
    int top;
    int * arr;
};

int isempty(struct stack * ptr){
    if(ptr->top==-1){
        return 1;
    }
    else{
        return 0;
    }
}
int isfull(struct stack * ptr){
    if(ptr->top==ptr->size-1){
        return 1;
    }
    else{
        return 0;
    }
}

int push(struct stack*ptr,int val){
    if(isfull(ptr)){
        printf("Stack overflow");
    }
    else{
        ptr->top++;
        ptr->arr[ptr->top]=val;
        printf("pushed %d to stack\n",val);
    }
}

int pop(struct stack * ptr){
    if(isempty(ptr)){
        printf("Stack underflow");
    }
    else{
        int val=ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}

int peek(struct stack * ptr,int i){
    if((ptr->top-i-1)<0){
        printf("invalid postition");
        return -1;
    }
    else{
        return ptr->arr[ptr->top-i-1];
    }
}

int stacktop(struct stack* ptr){
    if(isempty(ptr)){
        printf("Stack is empty");
        return -1;
    }
    else{
        return ptr->arr[ptr->top];
    }
}

int stackbottom(struct stack* ptr){
    if(isempty(ptr)){
        printf("Stack is empty");
        return -1;
    }
    else{
        return ptr->arr[0];
    }
}

int main(){
    struct stack * ptr;
    ptr->size=80;
    ptr->top=-1;
    ptr->arr=(int*)malloc(ptr->size*sizeof(int));

    printf("stack created succesfully\n");
    
    ptr->arr[0]=7;
    ptr->top++;

    ptr->arr[1]=45;
    ptr->top++;

    push(ptr,78);
    printf("popped %d from stack\n",pop(ptr));

    return 0;


}