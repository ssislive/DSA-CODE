#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct stack {
    int top;
    int size;
    char *arr;
};

int isempty(struct stack *ptr){
    if(ptr->top==-1){
        return 1;
    }else{
        return 0;
    }
}

void push(struct stack*ptr, char val){
    if(isfull(ptr)){
        printf("Stack overflow");
    }
    else{
        ptr->top++;
        ptr->arr[ptr->top]=val;
    }
}

char pop(struct stack * ptr){
    if(isempty(ptr)){
        printf("Stack underflow");
        return -1;
    }
    else{
        char  val=ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}

int isoperator(char ch){
    if(ch=='+' || ch=='-' || ch=='*' || ch=='/'){
        return 1;
    }
    else{
        return 0;
    }
}

int prec(char ch){
    if(ch=='*' || ch=='/'){
        return 3;
    }
    else if(ch=='+' || ch=='-'){
        return 2;
    }
    else{
        return 0;
    }
}
char stacktop(struct stack* ptr){
    if(isempty(ptr)){
        
        return -1;
    }
    else{
        return ptr->arr[ptr->top];
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

char* intopo(char* infix , char* postfix){
    struct stack *sp=(struct stack *)malloc(sizeof(struct stack));
    sp->size=100;
    sp->top=-1;
    sp->arr=(char *)malloc(sp->size*sizeof(char));
    int i=0;
    int j=0;
    while(infix[i]!='\0'){
        if(!isoperator(infix[i])){
            postfix[j]=infix[i];
            i++;
            j++;
        }
        else{
            if(prec(infix[i])>prec(stacktop(sp))){
                push(sp,infix[i]);
                i++;
            }
            else{
                postfix[j]=pop(sp);
                j++;
            }
        }
        
    }
    while(!isempty(sp)){
            postfix[j]=pop(sp);
            j++;
        }
    
    postfix[j]='\0';
    
    return postfix;
}

int main(){
    char *infix="x-y/z-k*d";
    char *postfix=(char *)malloc((strlen(infix)+1)*sizeof(char));
    printf("Postfix is %s",intopo(infix,postfix));
    return 0;
}