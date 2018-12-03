#include<stdio.h>
#include<conio.h>
int main()
{
	int row,colspace,num,a=1;
	printf("\n\t");
	for(row=1;row<=10;row++) {
		
		for(colspace=10-row;colspace>=1;colspace--) 
			printf(" ");
	    
	    for(num=1;num<=a;num++) 
	        printf("*");
	    
	    a+=2;
	    printf("\n\t");
    }


}
