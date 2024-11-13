#include<stdio.h>
#define ROW 3
#define COL 3
int main(void)
{
	int mark[ROW][COL] = {0};
	float Avg[3][1] = {0};
	int i,j;
	float tot = 0;
	
	for(i =0; i < ROW; i++)
	{
		printf("Student %d marks\n",i+1);
		for(j = 0; j < COL; j++)
		{
			printf("Module %d mark: ",j+1);
			scanf("%d", &mark[i][j]);
			
		}
	}
	
	for(i =0; i < ROW; i++)
	{
		for(j = 0; j < COL; j++)
		{
		  tot = tot + mark[i][j];
		  	
		}
		Avg[i][1] = tot / 3;
		tot = 0;
	}
	
	printf("Student NO\tExam scores\t\tAverage\n");
	for(i =0; i < ROW; i++)
	{
		printf("%d\t    ", i+1);
		
		for(j = 0; j < COL; j++)
		{
			printf("%d   ",mark[i][j]);
			
		}
		printf("\t\t%.2f\n",Avg[i][1]);
	}
}

