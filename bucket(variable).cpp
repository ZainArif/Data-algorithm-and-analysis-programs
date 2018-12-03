#include<stdio.h>
#include<conio.h>
int main()
{
	int a[10],b[10],c[10],n,j=0,k=0,l=0,temp,flag[10],dex;
	char var;
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
    for(int z=1;z<=3;z++) 
    {
      if(z==1)
      {
        for(int s=0;s<j;s++)
        flag[s]=a[s];
        dex=j;
        var='A'; 
      }
	   else if(z==2)
	  {
	    for(int t=0;t<k;t++)	
	    flag[t]=b[t];
	    dex=k;
	    var='B';
      }
	  else
	  {
	    for(int u=0;u<l;u++) 	
	    flag[u]=c[u];    
        dex=l;
        var='C';
      }
	  for(int out=0;out<dex-1;out++)
         for(int in=0;in<dex-1;in++)
         {
    	   if( flag[in]>flag[in+1])
    	   {
    		  temp=flag[in];
    		  flag[in]=flag[in+1];
    		  flag[in+1]=temp;
           }
         }
      printf("\nBucket %c:\n",var);
      for(int d=0;d<dex;d++)
        printf("%d\n",flag[d]);  
    }
}
