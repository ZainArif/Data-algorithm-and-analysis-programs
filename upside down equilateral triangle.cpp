#include<stdio.h>
#include<conio.h>
int main()
{
	int row,colspace,num,a=19;
	printf("\n\t");
	for(row=1;row<=10;row++) 
	{
		for(num=1;num<=a;num++) 
		
	        printf("*");
	    
		printf("\n\t");
		for(colspace=1;colspace<=row;colspace++) 
		
			printf(" ");
	    
	    
	    a-=2;
	    
    }


}
