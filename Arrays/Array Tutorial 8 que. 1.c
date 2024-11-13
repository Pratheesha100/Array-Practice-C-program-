#include<stdio.h>
int main(void)
{
	float mark[10], M, tot = 0, avg;
	
	int i;
	
	for(i = 0; i < 10;)
	{
		printf("Enter student %d mark: ",i+1);
	    scanf("%f", &M);
	    if(M >= 0 && M <= 20)
	    {
	    	mark[i] = M;
	    	i++;
		}
	} 
    
	for(i = 0; i < 10; i++)
    {
        tot = tot + mark[i];
			
	}
	 avg = tot / 10;
	
	for(i = 0; i < 10; i++)
    {
        printf("\n%.1f",mark[i]);	
	}
	
	printf("\nAverage of the marks is %.2f",avg);
	
	return 0;
}
