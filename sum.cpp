#include<stdio.h>
main(){
	int i,n,sum=0;
	
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	sum=sum+a[i];
	printf("sum = %d",sum);
	
}
