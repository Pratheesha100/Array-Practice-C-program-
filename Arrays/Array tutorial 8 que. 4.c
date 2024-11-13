#include<stdio.h>
int main(void)
{
	int i, j, value[10];
    
	
	for(i=0; i<10; i++)
	{
		printf("Enter number %d: ",i+1);
		scanf("%d", &value[i]);
	}
	
	
	printf("%s%13s%13s","Element", "Value", "Histogram");
	for(i=0; i<10; i++)
	{
		printf("\n%1d%16d\t", i, value[i]);
		for(j=1; j<value[i]; j++)
		{
			printf("*");
		}
	
    }
return 0;	
}



