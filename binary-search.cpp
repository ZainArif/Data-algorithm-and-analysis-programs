#include<stdio.h>
#include<conio.h>
int main()
{
	int a[7]={2,4,6,8,10,12,14},beg=0,end=6,n,mid;
	printf("Enter number:");
	scanf("%d",&n);
	mid=(beg+end)/2;
	while( beg<=end )
	{
		if( n<a[mid] )
	      end=mid-1;
		else if( n==a[mid] )
		{  	
	      printf("\nNumber %d found at position %d.",n,mid);
	      break;
	    }
		else
		   beg=mid+1; 
		mid=(beg+end)/2;    
	}
	if( beg>end )
	printf("\n%d not found.",n);
	return 0;
}
