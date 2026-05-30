#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define MAX 100



void push(char stack[],int *top,char item){
    if(*top==MAX-1){
        printf("Stack Overflow \n");
    }
    else{
        (*top)++;
        stack[*top]=item;
    }
}

char pop(char stack[],int *top){
    if(*top==-1){
        printf("Stack Underflow \n");
        return -1;
    }
    else{
        char item=stack[*top];
        (*top)--;
        return item;
    }
}

int main(){
    int top=-1;
    char str[MAX]="PAPA";
    char stack[MAX];
    char str2[MAX];
    for(int i=0;i<strlen(str);i++){
        push(stack,&top,str[i]);
    }
    for(int i=0;i<strlen(str);i++){
        str2[i]=pop(stack,&top);
    }
    str2[strlen(str)]='\0';
    if(strcmp(str,str2)==0){
        printf("The string is a palindrome \n");
    }
    else{
        printf("The string is not a palindrome \n");
    }
}
