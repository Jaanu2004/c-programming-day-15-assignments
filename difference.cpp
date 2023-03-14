#include<stdio.h>
main()
{
int n,i,min,max,dif;//n=6
scanf("%d",&n);  
int a[n];//declaring an array with specific size
for(i=0;i<n;i++)//inserting array values into an array
scanf("%d",&a[i]);
min=a[0];
for(i=1;i<n;i++)//displaying array values from the array
{
if(a[i]<min)
min=a[i];
if(a[i]>max)
max=a[i];
dif=max-min;
}
printf(" differnce-%d",dif);
}
