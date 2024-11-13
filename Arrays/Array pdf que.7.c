#include<stdio.h>
int main(void)
{
	int seat[5] = {0};
	int i, count1=0, count2=0, count3=0, count4=0, count5=0, S;
	
	printf("Please input the seat number(1-10):");
	scanf("%d",&S);
	
	while(S != -1)
	{
		if(S <=5 && S >= 1)
		{
			if(S == 1)
			{
				count1++;
				seat[0] = count1;
			}
			else if(S == 2)
			{
				count2++;
				seat[1]= count2;
			}
			else if(S == 3)
			{
				count3++;
				seat[2]= count3;
			}
			else if(S == 4)
			{
				count4++;
				seat[3]= count4;
			}
			else if(S == 5)
			{
				count5++;
				seat[4]= count5;
			}
		}
		
		else
		{
			printf("Invalid type of seat number: ");
		}
		
	}
	
	
	
	
	
	
	
	
	
	
	
}
