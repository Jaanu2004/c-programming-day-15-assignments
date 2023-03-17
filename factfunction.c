#include<stdio.h>
int ft(int x,int y,int z){
     for(int x=1;x<=y;x++)
    z=z*x;
    return z;
}
int main(){
    int i,n,fact=1,f;
    printf("Enter any number : ");
    scanf("%d",&n);
    f=ft(i,n,fact);
    printf("The factorial of given number is : %d",f);
    return 0;
    
}
