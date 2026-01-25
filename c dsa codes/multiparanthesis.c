#include<stdio.h>
#include<stdlib.h>

struct stack {
    int size;
    int top;
    char *arr;
};

int isempty(struct stack *ptr){
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

char StackTop(struct stack * ptr){
    return (ptr->arr[ptr->top]);
}

int match(char a, char b){
    if(a=='(' && b==')'){
        return 1;
    }
    if(a=='{' && b=='}'){
        return 1;
    }
    if(a=='[' && b==']'){
        return 1;
    }
    return 0;
}

void push(struct stack *ptr, char val);
char pop(struct stack *ptr);

int checkparanthesis(char *exp){
    struct stack * sp=(struct stack *)malloc(sizeof(struct stack));
    sp->size=100;
    sp->top=-1;
    sp->arr=(char *)malloc(sp->size*sizeof(char));
    char popped_ch;
    for(int i=0;exp[i]!='\0';i++){
        if(exp[i]=='(' || exp[i]=='{' || exp[i]=='['){
            push(sp,exp[i]);
        }
        else if(exp[i]==')' || exp[i]=='}' || exp[i]==']'){
            if(isempty(sp)){
                return 0;
            }
            else{
                popped_ch=pop(sp);
                if(!match(popped_ch,StackTop(sp))){
                    return 0;
                }
            }
        }
    }
    if(isempty(sp)){
        return 1;
    }
    else{
        return 0;
    }
}

void push(struct stack * ptr , char val){
    if(isfull(ptr)){
        printf("stack overflow");
    }
    else{
        ptr->top++;
        ptr->arr[ptr->top]=val;
    }
}

char pop(struct stack * ptr){
    if(isempty(ptr)){
        printf("Stack undeflow");
        return '\0';
    }
    else{
        char val=ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}

int main(){
    char * exp="{(1-3)+[4*5(";
    if (checkparanthesis(exp)){
        printf("the paranthesis are balanced");
    } else{
        printf("the paranthesis are not balanced");
    }
    return 0;
}