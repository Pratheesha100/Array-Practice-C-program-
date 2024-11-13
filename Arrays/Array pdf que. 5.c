#include<stdio.h>
int main(void)
{
	int arrNum[6], i;
     
	 
   	
	for(i=0; i<6; i++)
   {
   	
   	printf("Number %d: ", i+1);
	scanf("%d", &arrNum[i]);
   	
   }
	
	
	for(i=0; i<5; i++)
   {
   	if (arrNum[i] > arrNum[i+1])
   	{
   	    printf("Numbers are not in ascending order");
	 	return -1;	
	   }

   }
	
	printf("Numbers are in ascending order");
	return 0;
	
	}
