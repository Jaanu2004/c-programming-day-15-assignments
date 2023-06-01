//selection sort
#include<stdio.h>
#define SIZE 5
int main(){
    int arr[SIZE],j;
    for(j=0;j<SIZE;j++){
        scanf("%d",&arr[j]);
    }
    int len=sizeof(arr)/sizeof(int);
    int i,k,t;
    void select(int i,int arr[],int k,int len);
    select(i,arr,k,len);
}

void select(int i,int arr[],int k,int len){
    int t;
    for(i=0;i<len-1;i++){
        for(k=i+1;k<len;k++){
            if(arr[i]>arr[k]){
            t=arr[i];
            arr[i]=arr[k];
            arr[k]=t;
            }

        }
        
    }
    for(i=0;i<len;i++)
    printf("%d ",arr[i]);
}