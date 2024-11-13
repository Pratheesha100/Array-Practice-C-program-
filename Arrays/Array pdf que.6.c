#include<stdio.h>
int main()
{
	int rate[5] = {0};
	int i, Rate, count1=0, count2=0, count3=0, count4=0, count5=0;
	
	
	printf("Please input the service rating(1-5): ");
	scanf("%d", &Rate);
	while(Rate != -1)
 {
		if(Rate >= 1 && Rate <= 5)
		{
			if(Rate == 1)
			{
			    count1 ++;
				rate[0] = count1;
			}
			
			else if(Rate == 2)
			{
				count2 ++;
				rate[1] = count2;
			}
			
			else if(Rate == 3)
			{
				count3 ++;
				rate[2] = count3; 
			}
			
			
			else if(Rate == 4)
			{
				count4 ++;
				rate[3] = count4;
			
			}
			
	        else
			{
				count5 ++;
				rate[4] = count5;
			}

	  }
		
		else
		{
			printf("Error.Re enter the rate.\n");
		}
		
		printf("Please input the service rating(1-5): ");
		scanf("%d", &Rate);
   	}
   	
	   printf("Rating  \tNumber of responce\n");
      for(i = 0; i < 5; i++)
      {
      	printf("%d\t\t%d\n", i+1, rate[i]);
	  }
	return 0;
}
