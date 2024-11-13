#include<stdio.h>
int main()
{
	int value[10] = {23, 27, 89, 90, 51, 56, 34, 79, 31, 30};
	int key, i;
	
	printf("Enter a number: ");
	scanf("%d", &key);
	
	for(i=0; i<10; i++)
	{
		if(key==value[i])
		{
			printf("Value Found\n Place: %d",i);
			return -1;
		}
	
	}
	printf("Value not found");
		return 0;
}
