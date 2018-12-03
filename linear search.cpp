#include<stdio.h>
#include<conio.h>
int main()
{
	int a[5]={2,6,5,8,1},n,i,j=4,p=1;
	printf("Enter Number to be search\n");
	scanf("%d",&n);
	for(i=0;i<=j;i++)
	{
		if(n==a[i])
		{
		p=i+1;
		printf("Number %d found at Position %d",n,p);
		break;
	    }
	}	
    if(n!=a[i])
	 printf("Number not found");
}

	
