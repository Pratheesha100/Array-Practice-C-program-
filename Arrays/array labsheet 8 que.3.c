#include<stdio.h>
int main(void)
{
	int data[12] = {0};
	int i, max = 0, min;
	
	for(i = 0; i < 12; i++)
	{
		printf("Average rainfall of month %d: ",i+1);
		scanf("%d", &data[i]);
	}
	
	for(i = 0; i < 12; i++)
	{
		if(max< data[i])
		{
			max = i;
		}
		
	}
	
	for(i = 0; i < 11; i++)
    {
    	if(data[i] < data[i+1]){
    		min = i;
		}
	}
	
	printf("Maximum rainfall month is %d\n ", max);
	printf("Minimum rainfall month is %d\n ", min);
}   

