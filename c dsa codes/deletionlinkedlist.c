#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* Next;
};

int deleteatfirst(struct node* head){
    struct node * ptr=head;
    head=head->Next;
    free(ptr);
    return head;
}

int deleteatindex(struct node* head,int index){
    struct node* p=head;
    struct node* q=p->Next;

    int i=0;
    while(i!=index-1){
        p=p->Next;
        i++;
    }
    p->Next=q->Next;
    free(q);
    return head;
}

struct node* deleteatend(struct node* head) {

    if (head == NULL) {
        return NULL;
    }

    if (head->Next == NULL) {
        free(head);
        return NULL;
    }

    struct node* p = head;

    while (p->Next->Next != NULL) {
        p = p->Next;
    }

    struct node* q = p->Next;
    p->Next = NULL;
    free(q);

    return head;
}


int deleteatvalue(struct node* head,int value){
    struct node *p=head;
    struct node* q=p->Next;

    while(q->data!=value && q->Next!=NULL){
        p=p->Next;
    }
    
    if(q->data==value){
        p->Next=q->Next;
        free(q);
        return head;
    }
}

void linkedlistTraversal(struct node* ptr){

    

    while (ptr != NULL)
    {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->Next;
    }
}

int main(){
// Linked list making
    struct node* head;
    struct node* second;
    struct node* third;
    struct node* fourth;

    head=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));
    fourth=(struct node*)malloc(sizeof(struct node));

    head->data=32;
    head->Next=second;

    second->data=22;
    second->Next=third;

    third->data=11;
    third->Next=fourth;

    fourth->data=44;
    fourth->Next=NULL;

    head=deleteatindex(head ,2);

    printf("After deletion at end:\n");

    linkedlistTraversal(head);

}
