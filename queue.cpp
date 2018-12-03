#include<stdio.h>
#include<conio.h>
int main()
{
   int element,choice,front=0,rear=-1,n=4,arr[5];
   for(;;)
   {
   	printf("Enter 1 for enqueue\nEnter 2 for dequeue\nEnter 3 for exit\n ");
    scanf("%d",&choice);
    switch(choice)
    {
    	case 1:
    	 {
    	    if( (front==0)&&(rear==n) )
    	    printf("\nOverflow\n");
    	    else
    	    {
    	      printf("\nEnter element\n");
    	      scanf("%d",&element);
    	      arr[++rear]=element;
            }
         }
    	 break; 
    	 case 2:
    	 {
    	    if(rear<0)
		    printf("\nUnderflow\n");
		    else
		    {	
		       for(front=0;front<rear;front++)
		    	   arr[front]=arr[front+1];
		       rear--;   	
    	    }
         }
    	 break;
    	 case 3:
    	 	for(int i=0;i<=rear;i++)
             printf("%d\n",arr[i]);
             break;
    }
   }
}


