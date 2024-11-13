#include<stdio.h>
int main(void)
{
	int intArr[10], positiveNum[10], negativeNum[10], i, k=0, j=0, num;
	
	for(i=0; i<10; i++)
	{
		printf("Enter number %d: ", i+1);
		scanf("%d", &intArr[i]);
		
	}
	
	for(i=0; i<10; i++)
	{
		
		if(intArr[i] > 0)
		{
			positiveNum[j] = intArr[i];
			j++;
		}
		else{
			negativeNum[k] = intArr[i];
			k++;
		}
	}
	
	printf("Number Series: ");
	for(i=0; i<10; i++)
	{
		printf("%d\t",intArr[i]);
	}
	
	printf("\nPositive Numbers: ");
	for(i=0; i<j; i++)
	{
		printf("%d\t",positiveNum[i]);
	}
	
	printf("\nNegative Numbers: ");
	for(i=0; i<k; i++)
	{
		printf("%d\t",negativeNum[i]);
	}
	
	return 0;
}
