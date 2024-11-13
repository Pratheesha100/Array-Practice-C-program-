#include<stdio.h>
#define SIZE 5
int main(void)
{
	int i, Motion[SIZE];
//	int  New[5];
	
	for(i=0; i<SIZE; i++)
	{
		printf("Enter value %d: ",i+1);
		scanf("%d", &Motion[i]);
	}
	
   for(i=0; i<SIZE; i++)
   {
   	if(i<(SIZE - 1))
   	{
   		printf("%d\t",Motion[i+1]);
	   }
	  
   }
   printf("%d",Motion[0]);
   
   
   
   
   
    
/*	for(i=0; i<5;)
	{
		if(i=0)
		{
			New[i+5] = Motion[i];
		}
		i++;
	     New[i-1]	= Motion[i];
	}

	puts("");
	for(i=0; i<5 ; i++)
	{
		printf("%d",New[i]);
	}
*/	
	return 0;
}
