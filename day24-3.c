#include<stdio.h>
int main()
{
	 int n1, n2, temp, count=0, i, j;
	 scanf("%d", &n1);
	 scanf("%d", &n2);
	 for(i=n1; i<=n2; i++)
	 {
		  temp = 0;
		  for(j=2; j <= i/2; j++)
		  {
			   if(i%j==0)
			   {
				    temp=1;
				    break;
			   }
		  }
		  if(temp==0 && i>=2)
		  {
		   	count++;
		  }
	 }
	 printf("\n Prime Count = %d", count);
	 return 0;
}
