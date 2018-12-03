#include<stdio.h>
#include<conio.h>
int main()
{
	int i=5;
	int a[6]={1,3,5,2,6};
	int n,p,ind,r;
	printf("Enter a number you want to insert & also enter its position:");	
	scanf("%d %d",&n,&p);
	ind=i-1;
	for(r=i-p;r>=1;r--)
	   a[i--]=a[ind--];
	 a[p]=n;
	 i=5;
	 for(int b=0;b<=i;b++)
	 printf("%d\n",a[b]);
	   
}
