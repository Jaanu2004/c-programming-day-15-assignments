//bubble sort
#include<stdio.h>
int main(){
    int arr[]={5,7,2,1,3};
    int len=sizeof(arr)/sizeof(int);
    int i,k,t;
    void select(int i,int arr[],int k,int len);
    select(i,arr,k,len);
}

void select(int i,int arr[],int k,int len){
    int t;
    for(i=0;i<=len;i++){
        for(k=0;k<len-1;k++){
            if(arr[k]>arr[k+1]){
            t=arr[k];
            arr[k]=arr[k+1];
            arr[k+1]=t;
            }

        }
        
    }
    for(i=0;i<len;i++)
    printf("%d",arr[i]);
        
}