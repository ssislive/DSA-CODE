#include<stdio.h>
int delete(int arr[],int size,int index){
    for(int i=index;i<size-1;i++){
        arr[i]=arr[i+1];
    }
    return 1;
}

void print(int arr[],int size){
    for(int i=0;i<=size-1;i++){
        printf("%d ",arr[i]);
    }
}

int main(){
    int arr[100]={7,8,12,27,88};
    int index=2;
    int size=5;
    int s= delete(arr,size,index);
    if(s==1){
        printf("deletion succesful\n");
        print(arr,size-1);
    }
    else{
        printf("deletion not succesful\n");
    }
    
}