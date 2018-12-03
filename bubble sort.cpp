#include<stdio.h>
#include<conio.h>
#define SIZE 10
int main()
{
	int a[SIZE],temp;
	printf("Enter 10 numbers:");
	for(int i=0;i<SIZE;i++)
	    scanf("\n%d",&a[i]);
	for(int out=0;out<SIZE-1;out++)
	{
	
	   for(int in=0;in<SIZE-out;in++)
	   {
	   
	      if(a[in]>a[in+1])
		  {
		  	temp=a[in];
		  	a[in]=a[in+1];
		  	a[in+1]=temp;
		  }
		for(int d=0;d<SIZE;d++)
	      printf("%d",a[d]);	
		  printf("\n");       
       } 
   }
}
