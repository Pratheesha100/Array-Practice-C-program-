#include<stdio.h>
#include<string.h>
int main()
{
	int numArr[6], oddNum[6], evenNum[6], i, j=0, k=0, flag;
	
	for(i = 0; i < 6; i++)
	{
		printf("Enter number %d: ", i+1);
		scanf("%d", &numArr[i]);
	}
	
	for(i = 0; i < 6; i++)
	{
		flag = numArr[i] % 2;
		
		if(flag == 1)
		{
			oddNum[j] = numArr[i];
			j++;
		 } 
		 
		 else
		 {
		 	evenNum[k] = numArr[i];
			 k++;
		 }
	}
	
    printf("Number series: ");
	for(i = 0; i < 6; i++)
	{
		printf("%d\t",numArr[i]);
		
	}
	
	printf("\nEven Numbers: ");
	for(i = 0; i < k ; i++)
	{
	    printf("%d\t",evenNum[i]);	
	}
	
	printf("\nOdd Numbers: ");
	for(i = 0; i < j; i++)
	{
	    printf("%d\t",oddNum[i]);	
	}



	
	return 0;
}
