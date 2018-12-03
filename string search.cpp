#include<stdio.h>
#include<conio.h>
int main()
{
	char a[13]={'N','E','D','U','N','I','V','E','R','S','I','T','Y'},b[20],c;
	int i,r=0,x,d;
	printf("Enter 3 character text:");
	for(  i=0;i<=20;i++)
	{
		c=getche();
		if(c=='\r')
		  break;
		b[i]=c;  
	}
	
		for(  x=0;x<=12;x++)
		{
			if( b[r]==a[x])
			{
				if( b[r+1]==a[x+1])
				{
					if( b[r+2]==a[x+2])
					{
				    d=x;
					for( int y=r;y<=(r+2);y++)
					printf("\n%c=%d",b[y],x++);
				    }
				}
			}
		
		}
		if( b[r]!=a[d])
	       printf("\nText not found.");

	
}
