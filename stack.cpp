#include<stdio.h>
#include<conio.h>
int main()
{
   int element,choice,top=-1,arr[10];
   for(;;)
   {
   	printf("Enter 1 for push\nEnter 2 for pop\nEnter 3 for exit\n ");
    scanf("%d",&choice);
    switch(choice)
    {
    	case 1:
    	 { 
    	 if(top>=9)
    	 printf("\nOverflow");
    	 top++;
    	 printf("\nEnter element\n");
    	 scanf("%d",&element);
    	 arr[top]=element;
    	 }
    	 break;
    	 case 2:
    	 {
		 if (top==0)
    	 printf("\nUnderflow\n");
    	 element=arr[top--];	
    	 }
    	 break;
    	 case 3:
    	 	for(int i=0;i<=top;i++)
             printf("%d\n",arr[i]);
             break;
    }
   }
}


