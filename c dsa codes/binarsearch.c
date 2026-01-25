#include<stdio.h>
int binarysearch(int arr[], int size, int key){
    
    int start=0;
    int end=size-1;
    while (start<=end){
        int mid=(start+end)/2;
        if (arr[mid]==key){
            return mid;
        }
        else if (arr[mid]>key){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }
    return -1;
}
int main(){
    
    int n;
    int key;
    printf("enter size of array");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    printf("enter key to be searched\n");
    scanf("%d",&key);
    int result=binarysearch(arr,n,key);
    if(result != -1){
        printf("Element found at index %d\n",result);
    } else{
        printf("element not found\n");
    }

}