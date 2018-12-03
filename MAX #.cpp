#include<stdio.h>
#include<conio.h>
int main()
{
	int a[100],max,i,s,dex,p=1;
	printf("How many numbers you want to enter? ");
	scanf("%d",&s);
    for(i=0;i<s;i++)
      {
      	printf("Enter number:");
      	scanf("%d",&a[i]);
      }
    max=a[0];
    for(dex=1;dex<s;dex++)
    {
    	if( max<a[dex] )
    	{
    	max=a[dex];
    	p=dex+1;
        }
    }
    printf("\nMaximum number=%d",max);
    printf("\nPosition=%d",p);
}
