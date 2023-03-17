#include<stdio.h>

int cube(int f){
    int l;
    l=f*f*f;
    return l; 
}
int main(){
    int n,c;
    printf("Enter any number : ");
    scanf("%d",&n);
    c=cube(n);
    printf(" Cube of given number = %d",c);
    return 0;
}