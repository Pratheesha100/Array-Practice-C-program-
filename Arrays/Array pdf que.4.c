#include<stdio.h>
int main()
{
	int num[8];
	int i, Number, count=0;
	
	for(i=0; i<8;)
	{
	   printf("Enter the number %d:",i+1);
	   scanf("%d", &Number);
	   if(Number >= 1 && Number <= 4)
	   {
	   	  num[i] = Number;
	   	  i++;
		}
    }
    
    for(i=0; i<7; i++)
    {
    	if(num[i]==1 && num[i+1]==3)
    	{
    		count++;
		}
	}
	printf("num array: ");
	for(i=0; i<8; i++)
	{
		printf("%d\t", num[i]);
	}
	
	printf("\nNumber of times the pattern appear: %d", count);
}
