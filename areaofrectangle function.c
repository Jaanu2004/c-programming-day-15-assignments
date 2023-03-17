#include<stdio.h>
int rect(int j,int k){
    int a;
    a=j*k;
    return a;

}
int main(){
    int l,b,area;
    scanf("%d%d",&l,&b);
    area=rect(l,b);
    printf("%d",area);
    return 0;
}
