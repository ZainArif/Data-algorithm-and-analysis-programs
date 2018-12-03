#include<stdio.h>
#include<conio.h>
int main()
{
	int a[6]={41,59,65,67,68,73},b[6]={57,58,62,63,66,71},c[12],k=6,l=6,x=0,y=0,z=0;
	while( x<k && y<l )
	{
		if( a[x]<b[y] )
		  c[z++]=a[x++];
		else
		  c[z++]=b[y++];  
	}
	if( x>=k )
	  for(int d=0;d<(l-y);d++)
	      c[z+d]=b[y+d];
	else
	  for(int e=0;e<(k-x);e++)
	      c[z+e]=a[x+e];
	for(int f=0;f<12;f++)
	   printf("%d\n",c[f]);	        
}
