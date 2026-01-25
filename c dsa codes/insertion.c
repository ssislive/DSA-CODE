#include<stdio.h>
int insert(int arr[],int index,int size,int element){
    for(int i=size-1;i>=index;i--){
        arr[i+1]=arr[i];
    }
    arr[index]=element;
    return 1;
}
void print(int arr[],int size){
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}
int main(){
    int arr[100]={7,8,12,27,88};
    int index=3;
    int element=45;
    int size=5;
    insert(arr,index,size,element);
    if(arr[3]==element){
        printf("insertion succesful \n");
        print(arr,size+1);
    }
    else{
        printf("insertion not succesful\n");
    }
}