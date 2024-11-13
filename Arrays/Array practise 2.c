#include<stdio.h>
#define SIZE 10
int main(void)
{
	int Arr[SIZE] = {0};
	int i, num, tot = 0, max = 0;
	float avg;
	
	for(i = 0; i < SIZE;)
	{
		printf("Enter number: ");
		scanf("%d", &num);
		if(num >= 10 && num <= 100)
		{
			Arr[i] = num;
		    i++;
		}
	}
	
	for(i = 0; i < SIZE; i++)
	{
		tot = tot + Arr[i];
		if(Arr[i] > max)
		{
			max = Arr[i];
		}
		 
	}
	    avg = tot / SIZE;
	
	printf("\n%5s%13s","Number","Value");
	for(i = 0; i < SIZE; i++)
	{
		printf("\n%5d%13d",i,Arr[i]);
	}
	    printf("\nTotal summation of the values: %d \nAverage: %.2f\nMaximun value: %d", tot, avg, max);
	    return 0;
}
