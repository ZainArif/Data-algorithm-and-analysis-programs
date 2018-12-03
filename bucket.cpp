#include<stdio.h>
#include<conio.h>
int main()
{
	int a[10],b[10],c[10],n,j=0,k=0,l=0,temp;
	printf("Enter 10 numbers between 0 to 30:");
	for(int i=0;i<=9;i++)
	{
	 scanf("%d",&n);
	 if( n>=0 && n<=9)
	   a[j++]=n;
	 else if( n>=10 && n<=19)
	   b[k++]=n;
	 else 
	   c[l++]=n;     
    }  
	  for(int out=0;out<j-1;out++)
         for(int in=0;in<j-1;in++)
         {
    	   if( a[in]>a[in+1])
    	   {
    		  temp=a[in];
    		  a[in]=a[in+1];
    		  a[in+1]=temp;
           }
         }
    for(int out=0;out<k-1;out++)
    for(int in=0;in<k-1;in++)
    {
    	if( b[in]>b[in+1])
    	{
    		temp=b[in];
    		b[in]=b[in+1];
    		b[in+1]=temp;
    	}
    }
    for(int out=0;out<l-1;out++)
    for(int in=0;in<l-1;in++)
    {
    	if( c[in]>c[in+1])
    	{
    		temp=c[in];
    		c[in]=c[in+1];
    		c[in+1]=temp;
    	}
    }
    printf("\nSorted list:");
    printf("\nBucket A:\n");
    for(int d=0;d<j;d++)
    printf("%d\n",a[d]);
    printf("\nBucket B:\n");
    for(int x=0;x<k;x++)
    printf("%d\n",b[x]);
    printf("\nBucket C:\n");
    for(int y=0;y<l;y++)
    printf("%d\n",c[y]);
}
    
