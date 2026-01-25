#include<stdio.h>
#include<stdlib.h>
struct myarray{
    int total_size;
    int used_size;
    int *ptr;
};
void createarray(struct myarray *a,int tsize, int usize){
    (*a).total_size=tsize;
    (*a).used_size=usize;
    (*a).ptr=(int*)malloc(tsize*sizeof(int));
}

void showarray(struct myarray *a){
    for(int i=0;i<(*a).used_size;i++){
        printf("%d\n",(*a).ptr[i]);
    }
}

void setvalue(struct myarray *a){
    for(int i=0;i<(*a).used_size;i++){
        int n;
        scanf("%d",&n);
        (*a).ptr[i]=n;
    }
}

int main(){
    struct myarray marks;
    createarray(&marks,100,2);
    setvalue(&marks);
    showarray(&marks);
    return 0;
}