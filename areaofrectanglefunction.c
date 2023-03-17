#include<stdio.h>
int rect(int j,int k){
    int a;
    a=j*k;
    return a;

}
int main(){
    int l,b,area;
    printf("Enter length and Breadth of Rectangle : ");
    scanf("%d%d",&l,&b);
    area=rect(l,b);
    printf("The area of Rectangle : %d",area);
    return 0;
}
