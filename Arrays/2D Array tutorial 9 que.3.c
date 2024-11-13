#include<stdio.h>
int main(void)
{
	double sales[4][5] = {0};
	double Total[5][1] = {0};
	int i, j;
	double tot;
	
	
	for(i = 0; i < 4; i++ )
	{
		printf("Salesperson %d\n",i+1);
		for(j = 0; j < 5; j++)
		{
			printf("Product number %d sales(dollar value):",j+1);
			scanf("%lf", &sales[i][j]);
		}
		
		
	}
	
		for(i = 0; i < 4; i++ )
		{
			tot = 0;
				for(j = 0; j < 3; j++)
				{
				 tot = tot + sales[i][j];
				 	
				}
				Total[i][1] = tot;		
		}
	
  
	    for(i = 0; i < 4; i++ )
		{  
		        printf("%d\t\t", i+1);
				for(j = 0; j < 5; j++)
				{
					printf("%.3lf\t%.3lf",sales[i][j], Total[i][1]);
				}
				
				printf("\n");
		}
		
	return 0;
	
}
