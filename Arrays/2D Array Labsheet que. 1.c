#include<stdio.h>
//#define ROW 4
//#define COL 3
int main(void)
{
	//int numbers[ROW][COL];
	int numbers[4][3] = {0};
	int i,j;
	
	for(i = 0; i < 4 ; i++)
	{
		printf("Enter the numbers for raw %d\n", i+1);
		for(j = 0; j < 3; j++)
		{
			printf("Enter number %d: ", j+1);
			scanf("%d", &numbers[i][j]);
		}
	}
	 printf("\n");
	for(i = 0; i < 4 ; i++)
	{
		  for(j = 0; j < 3; j++)
		   {
		  	printf("%2d  ", numbers[i][j]);
			} 
			printf("\n"); 
	}
}
