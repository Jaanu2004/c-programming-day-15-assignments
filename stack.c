#include<stdio.h>
#define SIZE 5
int stk[SIZE];
int i=-1;
int top;
push(int n){
	if(i<SIZE-1){
		i++;
		stk[i]=n;  
		printf("\nInserted %d.\n",n);
	}
	else{
		printf("\nStack is Full!");
	}
}
main()
{
	int opt;
	
	while (1)
	{
		printf("\n:STACK OPERATIONS:\n");
		printf("\n1-To Push Element");
		printf("\n2-To pop Element");
		printf("\n3-To peek");
		printf("\n4-Traverse elements");
		printf("\n5-Exit.");
		printf("\n\nEnter your Choice:");
		scanf("%d",&opt);
		if(opt==1)
		{
			int n;
			printf("\nEnter Element:");
			scanf("%d",&n);
			push(n);
		}
		if(opt==5)
			break;
	}
}




pop()
{

//               t   
	if(top<0)
	{
		printf("\nStack is Empty!.");
	}
	else
	{
		printf("\nRecent Ele Removed!:%d.",top);
		top--;
	}
}
peek()
{
	printf("\nRecent Element is :%d",stk[top]);
}
