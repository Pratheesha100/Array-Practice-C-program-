#include<stdio.h>
int main(void)
{
   int unit[3][4] = {0};
   int i,j, Id, month, max=0;
   
   for(i=0; i<3; i++)
   {
   	printf("Customer Id %d\n", i+1);
   	
   	 for(j=0; j<4; j++)
   	 {
   	 	printf("Month %d Units: ",j+1);
   	 	scanf("%d", &unit[i][j]);
		}
   }
    
    for(i=0; i<3; i++)
    {
    	if(max < unit[i][j])
    	{
    		max = unit[i][j];
    		Id= i;
    		month = j;
		}
	}
	
	
	printf("\t\tMonth 01\tMonth 02\tMonth 03\tMonth 04\n");
	 for(i=0; i<3; i++)
	 {
	 	printf("Customer ID %d\t",i+1);
	 	for(j=0; j<4; j++)
		 {
		 	printf("%d\t\t",unit[i][j]);
		 }
		 printf("\n");
	 }
	 
	 printf("\nMaximum unit is %d in month %d by customer Id %d ",max,Id,month);
	 
	 return 0;
}
